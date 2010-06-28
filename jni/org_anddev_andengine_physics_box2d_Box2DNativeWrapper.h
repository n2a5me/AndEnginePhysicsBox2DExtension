/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_anddev_andengine_physics_box2d_Box2DNativeWrapper */

#ifndef _Included_org_anddev_andengine_physics_box2d_Box2DNativeWrapper
#define _Included_org_anddev_andengine_physics_box2d_Box2DNativeWrapper
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_anddev_andengine_physics_box2d_Box2DNativeWrapper
 * Method:    createWorld
 * Signature: (FFFFFF)V
 */
JNIEXPORT void JNICALL Java_org_anddev_andengine_extension_physics_box2d_Box2DNativeWrapper_createWorld (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_anddev_andengine_physics_box2d_Box2DNativeWrapper
 * Method:    step
 * Signature: (FI)V
 */
JNIEXPORT void JNICALL Java_org_anddev_andengine_extension_physics_box2d_Box2DNativeWrapper_step (JNIEnv *, jobject, jobject, jfloat, jint);

/*
 * Class:     org_anddev_andengine_physics_box2d_Box2DNativeWrapper
 * Method:    createCircle
 * Signature: (FFFFF)I
 */
JNIEXPORT jint JNICALL Java_org_anddev_andengine_extension_physics_box2d_Box2DNativeWrapper_createCircle (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jboolean, jboolean);

/*
 * Class:     org_anddev_andengine_physics_box2d_Box2DNativeWrapper
 * Method:    createBox2
 * Signature: (FFFFFFF)I
 */
JNIEXPORT jint JNICALL Java_org_anddev_andengine_extension_physics_box2d_Box2DNativeWrapper_createBox (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jboolean, jboolean);

/*
 * Class:     org_anddev_andengine_physics_box2d_Box2DNativeWrapper
 * Method:    destroyBody
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_anddev_andengine_extension_physics_box2d_Box2DNativeWrapper_destroyBody (JNIEnv *, jobject, jint);

/*
 * Class:     org_anddev_andengine_physics_box2d_Box2DNativeWrapper
 * Method:    getBodyInfo
 * Signature: (Lorg/anddev/andengine/physics/box2d/Box2DBodyInfo;I)V;
 */
JNIEXPORT void JNICALL Java_org_anddev_andengine_extension_physics_box2d_Box2DNativeWrapper_getBodyInfo (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     org_anddev_andengine_physics_box2d_Box2DNativeWrapper
 * Method:    setGravity
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_anddev_andengine_extension_physics_box2d_Box2DNativeWrapper_setGravity (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     org_anddev_andengine_physics_box2d_Box2DNativeWrapper
 * Method:    setBodyXForm
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_org_anddev_andengine_extension_physics_box2d_Box2DNativeWrapper_setBodyXForm (JNIEnv *, jobject, jint, jfloat, jfloat, jfloat);

/*
 * Class:     org_anddev_andengine_physics_box2d_Box2DNativeWrapper
 * Method:    setBodyAngularVelocity
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_org_anddev_andengine_extension_physics_box2d_Box2DNativeWrapper_setBodyAngularVelocity (JNIEnv *, jobject, jint, jfloat);

/*
 * Class:     org_anddev_andengine_physics_box2d_Box2DNativeWrapper
 * Method:    setBodyLinearVelocity
 * Signature: (IFF)V
 */
JNIEXPORT void JNICALL Java_org_anddev_andengine_extension_physics_box2d_Box2DNativeWrapper_setBodyLinearVelocity (JNIEnv *, jobject, jint, jfloat, jfloat);

/*
 * Class:     org_anddev_andengine_physics_box2d_Box2DNativeWrapper
 * Method:    getStatus
 * Signature: (Lorg/anddev/andengine/physics/box2d/Box2DBodyInfo;I)V
 */
JNIEXPORT void JNICALL Java_org_anddev_andengine_extension_physics_box2d_Box2DNativeWrapper_getStatus (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     org_anddev_andengine_physics_box2d_Box2DNativeWrapper
 * Method:    getLinearVelocity
 * Signature: (Lorg/anddev/andengine/physics/box2d/Box2DBodyInfo;I)V
 */
JNIEXPORT void JNICALL Java_org_anddev_andengine_extension_physics_box2d_Box2DNativeWrapper_getLinearVelocity (JNIEnv *, jobject, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
