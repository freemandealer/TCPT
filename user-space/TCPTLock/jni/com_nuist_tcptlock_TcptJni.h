/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_nuist_tcptlock_TcptJni */

#ifndef _Included_com_nuist_tcptlock_TcptJni
#define _Included_com_nuist_tcptlock_TcptJni
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_nuist_tcptlock_TcptJni
 * Method:    reg
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_nuist_tcptlock_TcptJni_reg
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_nuist_tcptlock_TcptJni
 * Method:    auth
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_nuist_tcptlock_TcptJni_auth
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_nuist_tcptlock_TcptJni
 * Method:    clearkey
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_nuist_tcptlock_TcptJni_clearkey
  (JNIEnv *, jclass);

/*
 * Class:     com_nuist_tcptlock_TcptJni
 * Method:    dosomething
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_nuist_tcptlock_TcptJni_dosomething
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif