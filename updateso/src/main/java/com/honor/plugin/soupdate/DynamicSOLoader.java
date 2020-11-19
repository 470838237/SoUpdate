package com.honor.plugin.soupdate;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;

import android.content.Context;
import android.content.res.AssetManager;
import android.text.TextUtils;
import android.util.Log;


public class DynamicSOLoader {
    private static String TAG = "DYSO";
    private static Context mCurrentContext = null;
    public static int mCopySoToAppLibErrorCode = 0;

    private enum CPUArchitecture {
        ARCH_UNKNOWN,
        ARCH_X86,
        ARCH_ARMV7,
        ARCH_ARMV64,
    }

    private static CPUArchitecture mStaticCPUArchitecture = CPUArchitecture.ARCH_UNKNOWN;

    /**
     * @param iType cpu架构
     * @return
     */
    public static boolean setCPUArchitecture(int iType) {
        HLog.logd("Setup wrong architecture :" + iType);
        if (iType == 1) {
            mStaticCPUArchitecture = CPUArchitecture.ARCH_X86;
            return true;
        } else if (iType == 2) {
            mStaticCPUArchitecture = CPUArchitecture.ARCH_ARMV7;
            return true;
        } else if (iType == 3) {
            mStaticCPUArchitecture = CPUArchitecture.ARCH_ARMV64;
            return true;
        }

        return false;
    }

    public static int getCPUArchitecture() {
        if (mStaticCPUArchitecture == CPUArchitecture.ARCH_X86) {
            return 1;
        } else if (mStaticCPUArchitecture == CPUArchitecture.ARCH_ARMV7) {
            return 2;
        } else if (mStaticCPUArchitecture == CPUArchitecture.ARCH_ARMV64) {
            return 3;
        }
        return 0;
    }

    public static boolean copySdcardFileWithMD5(String fromFile, String toFile) {
        mCopySoToAppLibErrorCode = 3;
        String keyLastCopyFileMd5 = "last_copy_file_md5";
        File copyToFile = new File(toFile);
        if (copyToFile.exists()) {
            String lastCopyFileMD5 = FileUtils.getString(mCurrentContext, keyLastCopyFileMd5);
            if (!TextUtils.isEmpty(lastCopyFileMD5)) {
                String fromFileMD5 = EncryptUtil.md5File(new File(fromFile));
                if (fromFileMD5.equals(lastCopyFileMD5)) {
                    return true;
                }
            }
        }
        boolean success = FileUtils.copyFile(fromFile, toFile);
        String md5 = EncryptUtil.md5File(copyToFile);
        FileUtils.putString(mCurrentContext, keyLastCopyFileMd5, md5);
        return success;
    }

    public static String getPrefixFolderNameByPlatform() {
        String strLibPath;
        if (mStaticCPUArchitecture == CPUArchitecture.ARCH_X86) {
            strLibPath = "/x86/";
        } else if (mStaticCPUArchitecture == CPUArchitecture.ARCH_ARMV7) {
            strLibPath = "/armeabi-v7a/";
        } else if (mStaticCPUArchitecture == CPUArchitecture.ARCH_ARMV64) {
            strLibPath = "/arm64-v8a/";
        } else {
            strLibPath = "";
            Log.e(DynamicSOLoader.TAG, "unkown cpu architecture");
        }
        return strLibPath;
    }

    public static String getSoRelativePath() {
        return "comlibs" + DynamicSOLoader.getPrefixFolderNameByPlatform();
    }

    private static String getAPKSOPath(String soName) {
        return getSoRelativePath() + soName + ".bytes";
    }


    public static String getDynamicDownloadSoFolderPath(String soName) {
        return DeviceEnvironment.getPersistentAssetsDataPathDist() + getAPKSOPath(soName);
    }


    private static boolean loadSoInAppLib(String soName) {
        String sFullPath = DynamicSOLoader.getAppLibPath(soName);
        if (FileUtils.isFileExists(sFullPath)) {
            System.load(sFullPath);
            return true;
        }
        return false;
    }

    private static void deleteAppLib(String soName) {
        String sFullPath = DynamicSOLoader.getAppLibPath(soName);
        File kFile = new File(sFullPath);
        if (kFile.exists()) {
            kFile.delete();
        }
    }

    public static String getAppLibDirectory() {
        File file = DynamicSOLoader.mCurrentContext.getDir("libs", Context.MODE_PRIVATE);
        if (!file.exists()) {
            file.mkdirs();
        }
        return file.getAbsolutePath();
    }

    public static String getAppLibPath(String soName) {
        return new StringBuilder(getAppLibDirectory())
                .append("/")
                .append(soName)
                .append(".so")
                .toString();
    }


    public static boolean copySoToAppLib(String soName, Context Context) {
        mCopySoToAppLibErrorCode = 0;
        mCurrentContext = Context;
        String dynamicDownloadFolderPath = DynamicSOLoader.getDynamicDownloadSoFolderPath(soName);
        String appLibPath = DynamicSOLoader.getAppLibPath(soName);
        String APKSOPath = DynamicSOLoader.getAPKSOPath(soName);
        HLog.logd("copySoToAppLib:appLibPath:" + appLibPath);
        if (FileUtils.isFileExists(appLibPath)) {
            mCopySoToAppLibErrorCode = 1;
            HLog.logd("copySoToAppLib:canCopyDynamicResource:"+DeviceEnvironment.canCopyDynamicResource());
            if (!DeviceEnvironment.canCopyDynamicResource()) return true;
            boolean ret = FileUtils.copyFile(dynamicDownloadFolderPath, appLibPath);
            FileUtils.deleteFile(dynamicDownloadFolderPath);
            return ret;
        } else {
            HLog.logd("copySoToAppLib:copy Assets");
            mCopySoToAppLibErrorCode = 10;
            AssetManager assetManager = mCurrentContext.getAssets();
            try {
                FileOutputStream outputStream = new FileOutputStream(appLibPath);
                return FileUtils.copyFile(assetManager.open(APKSOPath), outputStream);
            } catch (IOException e) {
                e.printStackTrace();
            }
            return false;
        }
    }

    public static void loadSO(String soName, Context Context) {
        mCurrentContext = Context;
        if (copySoToAppLib(soName, Context)) {
            DynamicSOLoader.loadSoInAppLib(soName);
            DynamicSOLoader.deleteAppLib(soName);
        }
    }
}
