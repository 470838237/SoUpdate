package com.honor.plugin.soupdate;


import java.io.File;
import java.io.FileFilter;
import java.io.FileInputStream;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;


public class EncryptUtil {
    public final static String SHA_256 = "SHA-256";
    public final static String MD5 = "MD5";


    private EncryptUtil() {
    }

    public static String md5(String str) {
        return md5(str.getBytes());
    }

    public static String md5(byte[]... toEncode) {
        Object[] objects = toEncode;
        return digest(MD5, objects);
    }

    public static String hexEncode(byte[] toEncode) {
        StringBuilder sb = new StringBuilder(toEncode.length * 2);
        for (byte b : toEncode) {
            if ((b & 0xf0) != 0) {
                sb.append(Integer.toHexString((b & 0xff)));
            } else {
                sb.append("0").append(Integer.toHexString(b & 0xf));
            }
        }
        return sb.toString().toLowerCase();
    }

    /**
     * @param encName
     * @param strSrc
     */
    public static String digest(String encName, Object... strSrc) {
        String strDes = null;
        if (strSrc != null) {
            try {
                if (encName == null || encName.length() == 0) {
                    encName = SHA_256;
                }
                MessageDigest md = MessageDigest.getInstance(encName);
                for (Object o : strSrc) {
                    if (o instanceof byte[]) {
                        md.update((byte[]) o);
                    } else if (o instanceof String) {
                        md.update(((String) o).getBytes());
                    } else if (o != null) {
                        md.update(String.valueOf(o).getBytes());
                    }
                }
                byte[] d = md.digest();
                strDes = hexEncode(d); // to HexString
            } catch (NoSuchAlgorithmException e) {
                e.printStackTrace();
            }
        }
        return strDes;
    }

    public static String md5File(File file) {
        try {
            MessageDigest md = MessageDigest.getInstance(MD5);
            FileInputStream inputStream = new FileInputStream(file);
            byte[] buffer = new byte[1024 * 4];
            int offset;
            while ((offset = inputStream.read(buffer)) != -1) {
                md.update(buffer, 0, offset);
            }
            inputStream.close();
            byte[] d = md.digest();
            return hexEncode(d);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return "";
    }


}
