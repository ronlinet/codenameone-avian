/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class java_lang_Float */

#ifndef _Included_java_lang_Float
#define _Included_java_lang_Float
#ifdef __cplusplus
extern "C" {
#endif
#undef java_lang_Float_serialVersionUID
#define java_lang_Float_serialVersionUID -8742448824652078965LL
#undef java_lang_Float_POSITIVE_INFINITY
#define java_lang_Float_POSITIVE_INFINITY Inff
#undef java_lang_Float_NEGATIVE_INFINITY
#define java_lang_Float_NEGATIVE_INFINITY -Inff
#undef java_lang_Float_NaN
#define java_lang_Float_NaN NaNf
#undef java_lang_Float_MAX_VALUE
#define java_lang_Float_MAX_VALUE 3.4028235E38f
#undef java_lang_Float_MIN_NORMAL
#define java_lang_Float_MIN_NORMAL 1.17549435E-38f
#undef java_lang_Float_MIN_VALUE
#define java_lang_Float_MIN_VALUE 1.4E-45f
#undef java_lang_Float_MAX_EXPONENT
#define java_lang_Float_MAX_EXPONENT 127L
#undef java_lang_Float_MIN_EXPONENT
#define java_lang_Float_MIN_EXPONENT -126L
#undef java_lang_Float_SIZE
#define java_lang_Float_SIZE 32L
#undef java_lang_Float_serialVersionUID
#define java_lang_Float_serialVersionUID -2671257302660747028LL
/*
 * Class:     java_lang_Float
 * Method:    floatToRawIntBits
 * Signature: (F)I
 */
JNIEXPORT jint JNICALL Java_java_lang_Float_floatToRawIntBits
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     java_lang_Float
 * Method:    intBitsToFloat
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_java_lang_Float_intBitsToFloat
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif