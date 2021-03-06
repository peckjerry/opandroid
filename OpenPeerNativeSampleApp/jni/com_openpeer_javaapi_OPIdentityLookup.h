/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_openpeer_javaapi_OPIdentityLookup */

#ifndef _Included_com_openpeer_javaapi_OPIdentityLookup
#define _Included_com_openpeer_javaapi_OPIdentityLookup
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    toDebugString
 * Signature: (Lcom/openpeer/javaapi/OPIdentityLookup;Z)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_toDebugString
  (JNIEnv *, jclass, jobject, jboolean);

/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    create
 * Signature: (Lcom/openpeer/javaapi/OPAccount;Lcom/openpeer/javaapi/OPIdentityLookupDelegate;Ljava/util/List;Ljava/lang/String;)Lcom/openpeer/javaapi/OPIdentityLookup;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_create
  (JNIEnv *, jclass, jobject, jobject, jobject, jstring);

/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    getStableID
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_getStableID
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    isComplete
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_isComplete
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    wasSuccessful
 * Signature: (ILjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_wasSuccessful
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    cancel
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_cancel
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    getUpdatedIdentities
 * Signature: ()Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_getUpdatedIdentities
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    getUnchangedIdentities
 * Signature: ()Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_getUnchangedIdentities
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    getInvalidIdentities
 * Signature: ()Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_getInvalidIdentities
  (JNIEnv *, jobject);

/*
 * Class:     com_openpeer_javaapi_OPIdentityLookup
 * Method:    releaseCoreObjects
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_openpeer_javaapi_OPIdentityLookup_releaseCoreObjects
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
