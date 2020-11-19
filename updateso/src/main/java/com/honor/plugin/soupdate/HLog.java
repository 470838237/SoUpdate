package com.honor.plugin.soupdate;

import android.util.Log;

public class HLog {
    private static boolean mDebug = true;
    private static final String TAG = "plugin.soupdate";


    public static void logd(String message) {
        if (mDebug)
            Log.d(TAG, message);
    }

    public static void debug(boolean debug) {
        mDebug = debug;
    }
}
