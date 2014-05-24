#ifndef NATIVE_H
#define NATIVE_H

#include "basetypes.h"
#include "vmconfig.h"
#include "platform.h"

typedef void (*nativeFunc)(vm* vm, u08 a, u08 b, u08 c);

//exported functions

//preload native functions in global namespace
void nativeInit(vm* vm);

//call native function stored in reg
void nativeCall(vm* vm, u08 a, u08 b, u08 c);

#endif