#ifndef DVM_H_
#define DVM_H_
#include <jni.h>
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "config.h"

void dvm_jni_onload(JNIEnv* env);
#endif