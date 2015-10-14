#include <string.h>
#include <jni.h>
#include <stdint.h>
#include <stdio.h>

// Unfortunately this has to be hand-generated for now...
#define SWIFT_ADD _TF3add13addTwoNumbersFTVSs5UInt86secondS0__S0_


uint8_t SWIFT_ADD(uint8_t, uint8_t);

jstring Java_com_example_helloswift_HelloSwift_stringFromJNI(JNIEnv * env, jobject thiz ) {

  uint8_t a = 123;
  uint8_t b = 45;
  uint8_t c = SWIFT_ADD(a,b);

  char result[255];
  sprintf(result, "The result is %d", c);

  return (*env)->NewStringUTF(env, result);
}
