﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
struct Transform_1_t1535;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t47;
// System.AsyncCallback
struct AsyncCallback_t48;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m9198_gshared (Transform_1_t1535 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m9198(__this, ___object, ___method, method) (( void (*) (Transform_1_t1535 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m9198_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m9199_gshared (Transform_1_t1535 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m9199(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t1535 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m9199_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m9200_gshared (Transform_1_t1535 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t48 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m9200(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1535 *, Object_t *, int32_t, AsyncCallback_t48 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m9200_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m9201_gshared (Transform_1_t1535 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m9201(__this, ___result, method) (( Object_t * (*) (Transform_1_t1535 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m9201_gshared)(__this, ___result, method)
