package com.honor.plugin.soupdate;

import android.content.Context;
import android.content.res.AssetManager;
import android.text.TextUtils;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.List;

public class DeviceEnvironment {

    private static String IL2CPP_SO_NAME = "liblogic";
    private static String mPersistentDataPath;
    private static Context mContext;
//    private static List<String> zipList = new ArrayList<>();

    /**
     * {@link DeviceEnvironment#setCPUArchitecture(int iType)} --->
     * {@link DeviceEnvironment#copySoToAppLib()} --->
     * {@link DeviceEnvironment#getSoPath()} --->
     * {@link DeviceEnvironment#getPersistentAssetsDataPathDist()} --->
     *
     * @return
     */
    public native static int nativeSetupIL2CPP();

    public native static int nativeGetIL2CPPVersion();

    public native static int nativeGetCPUArchitecture();

    public static void init(Context context) {
        HLog.logd("init");
        mContext = context;
        System.loadLibrary("il2cpp");
    }

    public static String getSoPath() {
        HLog.logd("getSoPath");
        return DynamicSOLoader.getAppLibPath(IL2CPP_SO_NAME);
    }

    public static boolean setCPUArchitecture(int iType) {
        HLog.logd("setCPUArchitecture");
        boolean ret = DynamicSOLoader.setCPUArchitecture(iType);
        canCopyDynamicResource = canCopyDynamicResource_();
        return ret;
    }


    public static boolean copySoToAppLib() {
        HLog.logd("copySoToAppLib");
        if (mContext == null) {
            return false;
        }
        return DynamicSOLoader.copySoToAppLib(IL2CPP_SO_NAME, mContext);
    }

    private static boolean canCopyDynamicResource;

    public static boolean canCopyDynamicResource() {

        return canCopyDynamicResource;
    }

    public static boolean canCopyDynamicResource_() {
        boolean ret1 = FileUtils.computeFileCount(getPersistentAssetsDataPathDist() + "bin/Data/Managed", ".tmp") == 20;
        boolean ret2 = FileUtils.isFileExists(DynamicSOLoader.getDynamicDownloadSoFolderPath(IL2CPP_SO_NAME));
        HLog.logd("canCopyDynamicResource_.ret1:"+ret1);
        HLog.logd("canCopyDynamicResource_.ret2:"+ret2);
        return ret1 && ret2;

    }

    /**
     * @return 有外部存储返回Android/data/packageName/files 没有外部存储返回/data/data/packageName/files
     */
    public static String getPersistentDataPath() {
        HLog.logd("getPersistentDataPath");
        if (mContext == null) {
            return "";
        }
        if (!TextUtils.isEmpty(mPersistentDataPath)) {
            return mPersistentDataPath;
        }
        String sPersistPath;
        String sPrefKey = "__x__PersistPath_x__KEY__";
        sPersistPath = FileUtils.getString(mContext, sPrefKey);
        if (!TextUtils.isEmpty(mPersistentDataPath) && FileUtils.isPathWriteable(sPersistPath)) {
            mPersistentDataPath = sPersistPath;
            return mPersistentDataPath;
        }
        File file = mContext.getExternalFilesDir("");
        if (file != null) {
            sPersistPath = file.getAbsolutePath();
        }
        if (!TextUtils.isEmpty(sPersistPath) && FileUtils.isPathWriteable(sPersistPath)) {
            mPersistentDataPath = sPersistPath;
            FileUtils.putString(mContext, sPrefKey, mPersistentDataPath);
            return mPersistentDataPath;
        }
        mPersistentDataPath = mContext.getFilesDir().getAbsolutePath();
        FileUtils.putString(mContext, sPrefKey, mPersistentDataPath);
        return mPersistentDataPath;
    }

    public static String getPersistentAssetsDataPath() {
        return getPersistentDataPath() + "/";
    }


    public static String getPersistentAssetsDataPathDist() {
        return getPersistentDataPath() + "/GameRes/";
    }


    public static void copyAssetsDataManaged(String from, String to) {
        AssetManager assetManager = mContext.getAssets();
        try {
            String[] names = assetManager.list(from);
            if (names.length > 0) {
                //目录
                for (String name : names) {
                    copyAssetsDataManaged(from + "/" + name, to + "/" + name);
                }
            } else {
                //copy
                File toFile = new File(to);
                if (toFile.exists())
                    toFile.delete();
                if (!toFile.getParentFile().exists()) {
                    if (!toFile.getParentFile().mkdirs()) {
                        return;
                    }
                }
                InputStream in = assetManager.open(from);
                FileUtils.copyFile(in, new FileOutputStream(to));
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

    }


    public static void copyDataManaged(String managedRelativePath, String to) {
        String dynamicDownloadManagedPath = DeviceEnvironment.getPersistentAssetsDataPathDist() + managedRelativePath;
        if (FileUtils.isFileExists(to)) {
            HLog.logd("copyDataManaged: canCopyDynamicResource:" + canCopyDynamicResource());
            if (!canCopyDynamicResource()) return;
            FileUtils.copyFileRecursion(dynamicDownloadManagedPath, to);
            FileUtils.deleteFile(dynamicDownloadManagedPath);
        } else {
            HLog.logd("copyDataManaged:copyAssetsDataManaged");
            copyAssetsDataManaged(managedRelativePath, to);
        }

    }

}
