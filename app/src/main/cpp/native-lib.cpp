#include <jni.h>
#include <string>

extern "C"
jstring
Java_it_milano_ciobanu_suggestor_QuestionActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
