#include "com_jnimobile_www_myjnidemo_MainActivity.h"
/* 
 * Class:     com_jnimobile_www_myjnidemo_MainActivity 
 * Method:    getStringFromNative 
 * Signature: ()Ljava/lang/String; 
 */
JNIEXPORT jstring JNICALL Java_com_jnimobile_www_myjnidemo_MainActivity_getStringFromNative
        (JNIEnv * env, jobject obj){
    return (*env)->NewStringUTF(env,"I'm comes from to Native Function!");
}