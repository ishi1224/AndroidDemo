#include "com_jnimobile_www_myjnidemo_helper_JniLib.h"

int avg(int a, int b);

JNIEXPORT jint JNICALL Java_com_jnimobile_www_myjnidemo_helper_JniLib_getInt
        (JNIEnv *env, jobject obj) {
    int sum = 0, i = 0;

    for (i = 0; i < 100; i++) {
        sum += i;
    }
    return sum;
}

/*
 * Class:     com_jnimobile_www_myjnidemo_helper_JniLib
 * Method:    getBoolean
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_jnimobile_www_myjnidemo_helper_JniLib_getBoolean
        (JNIEnv *env, jobject obj) {

    return 1;
}

/*
 * Class:     com_jnimobile_www_myjnidemo_helper_JniLib
 * Method:    show
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jnimobile_www_myjnidemo_helper_JniLib_show
        (JNIEnv *env, jobject obj) {

}

JNIEXPORT jint JNICALL Java_com_jnimobile_www_myjnidemo_helper_JniLib_getAvg
        (JNIEnv *env, jobject obj, jintArray array) {
    int size = sizeof(array) / sizeof(array[0]);
    int i = 0;
    int sum = 0;
    for (i = 0; i < size; i++) {
        sum = &array[i];
    }

    return sum / size;
}