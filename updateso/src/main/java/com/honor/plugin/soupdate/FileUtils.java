package com.honor.plugin.soupdate;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;

import java.io.File;
import java.io.FileFilter;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.zip.ZipEntry;
import java.util.zip.ZipInputStream;

public class FileUtils {
    /**
     * 判断文件是否存在
     */
    public static boolean isFileExists(String strFile) {
        return new File(strFile).exists();
    }


    public static boolean isPathWriteable(String dir) {
        return new File(dir).canWrite();
    }

    public static final String HONOR_SDK_PREFERENCE = "so_update_preference";
    private static SharedPreferences preferences;

    public static void putString(Context context, String key, String value) {
        if (preferences == null)
            preferences = context.getSharedPreferences(HONOR_SDK_PREFERENCE, Context.MODE_PRIVATE);
        preferences.edit().putString(key, value).commit();
    }


    public static String getString(Context context, String key) {
        if (preferences == null)
            preferences = context.getSharedPreferences(HONOR_SDK_PREFERENCE, Context.MODE_PRIVATE);
        return preferences.getString(key, "");
    }


    public static boolean copyFile(InputStream in, OutputStream out) {
        try {
            byte[] buffer = new byte[1024 * 4];
            int offset;
            while ((offset = in.read(buffer)) != -1) {
                out.write(buffer, 0, offset);
            }
            in.close();
            out.close();
            return true;
        } catch (IOException e) {
            e.printStackTrace();
        }
        return false;
    }

    public static boolean copyFile(String fromPath, String toPath) {
        try {
            File fromFile = new File(fromPath);
            File toFile = new File(toPath);
            if (!fromFile.exists())
                return false;
            if (toFile.exists())
                toFile.delete();
            if (!toFile.getParentFile().exists())
                toFile.getParentFile().mkdirs();
            FileInputStream inputStream = new FileInputStream(fromFile);
            FileOutputStream outputStream = new FileOutputStream(toFile);
            return copyFile(inputStream, outputStream);
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
        return false;
    }

    public static void copyFileRecursion(String from, String to) {
        File file = new File(from);
        if (file.isDirectory()) {
            File[] subFiles = file.listFiles();
            if (subFiles != null) {
                for (File subFile : subFiles) {
                    copyFileRecursion(subFile.getAbsolutePath(), to + "/" + subFile.getName());
                }
            }
        } else {
            copyFile(from, to);
        }
    }

    public static boolean unzip(InputStream inputStream, String unZipPath) {
        ZipInputStream zipStream = new ZipInputStream(inputStream);
        ZipEntry entry;
        try {
            while ((entry = zipStream.getNextEntry()) != null) {
                File dir = new File(unZipPath + entry.getName());
                if (entry.isDirectory()) {
                    if (!dir.exists()) {
                        dir.mkdirs();
                    }
                } else {
                    FileOutputStream out = new FileOutputStream(dir);
                    byte[] b = new byte[1024 * 4];
                    int n;
                    while ((n = zipStream.read(b)) != -1) {
                        out.write(b, 0, n);
                    }
                    out.close();
                }
            }
            zipStream.close();
            return true;
        } catch (Exception e) {
            e.printStackTrace();
        }
        return false;
    }

    private static int fileCount;

    public static int computeFileCount(String dir, final String... filters) {
        fileCount = 0;
        computeFileCount_(dir, filters);
        return fileCount;
    }

    private static void computeFileCount_(String dir, final String... filters) {
        File root = new File(dir);
        File[] files = root.listFiles(new FileFilter() {
            @Override
            public boolean accept(File pathname) {
                for (String item : filters) {
                    if (pathname.getName().endsWith(item)) return false;
                }
                return true;
            }
        });
        if (files != null) {
            for (File subFile : files) {
                if (subFile.isDirectory()) {
                    computeFileCount_(subFile.getAbsolutePath(), filters);
                } else {
                    fileCount++;
                }
            }
        }
    }


    public static boolean deleteFile(String path) {
        if (TextUtils.isEmpty(path)) {
            return true;
        }

        File source = new File(path);
        final File file = new File(source.getAbsolutePath() + System.currentTimeMillis());
        source.renameTo(file);
        if (file.exists()) {
            if (file.isFile()) {
                return file.delete();
            } else if (file.isDirectory()) {
                for (File f : file.listFiles()) {
                    if (f.isFile()) {
                        f.delete();
                    } else if (f.isDirectory()) {
                        deleteFile(f.getAbsolutePath());
                    }
                }
                return file.delete();
            }
            return false;
        }
        return true;
    }
}
