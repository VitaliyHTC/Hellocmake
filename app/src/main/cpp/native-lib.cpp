#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_vitaliyhtc_hello_1cmake_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jint JNICALL
Java_com_vitaliyhtc_hello_1cmake_MainActivity_intFromJNI(
        JNIEnv *env,
        jobject instance) {
    jint result = 128;
    return result;
}