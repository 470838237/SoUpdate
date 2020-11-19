echo off
cd %~dp0
cd jni
rem call D:\tools\android-ndk-r13b\ndk-build
call ndk-build
cd ..\libs\x86
MOVE /Y libmoba.so liblogic.bytes
cd ..\armeabi-v7a
MOVE /Y libmoba.so liblogic.bytes
cd ..\arm64-v8a
MOVE /Y libmoba.so liblogic.bytes
cd %~dp0
echo "===================finish==================="
pause
