/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class JavaAssignment */

#ifndef _Included_JavaAssignment
#define _Included_JavaAssignment
#ifdef __cplusplus
extern "C" {
#endif
#undef JavaAssignment_WALL
#define JavaAssignment_WALL 48L
#undef JavaAssignment_FREE
#define JavaAssignment_FREE 49L
#undef JavaAssignment_TARGET
#define JavaAssignment_TARGET 84L
#undef JavaAssignment_AGENT
#define JavaAssignment_AGENT 65L
/*
 * Class:     JavaAssignment
 * Method:    sayHello
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JavaAssignment_sayHello
  (JNIEnv *, jobject);

/*
* Class:     JavaAssignment
* Method:    sayNecro
* Signature: (Ljava/lang/String;)Ljava/lang/String;
*/
JNIEXPORT jstring JNICALL Java_JavaAssignment_sayNecro
(JNIEnv *, jobject, jstring);

/*
* Class:     JavaAssignment
* Method:    steps
* Signature: ([C)[D
*/
JNIEXPORT jintArray  JNICALL Java_JavaAssignment_steps
(JNIEnv *, jobject, jintArray);

/*
* Class:     JavaAssignment
* Method:    sayBoolean
* Signature: (Z)Z
*/
JNIEXPORT jboolean JNICALL Java_JavaAssignment_sayBoolean
(JNIEnv *, jobject, jboolean);

#ifdef __cplusplus
}
#endif
#endif
