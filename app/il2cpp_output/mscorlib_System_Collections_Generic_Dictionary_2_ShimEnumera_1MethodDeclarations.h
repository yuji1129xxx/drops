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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t1540;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1528;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9232_gshared (ShimEnumerator_t1540 * __this, Dictionary_2_t1528 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9232(__this, ___host, method) (( void (*) (ShimEnumerator_t1540 *, Dictionary_2_t1528 *, const MethodInfo*))ShimEnumerator__ctor_m9232_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9233_gshared (ShimEnumerator_t1540 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9233(__this, method) (( bool (*) (ShimEnumerator_t1540 *, const MethodInfo*))ShimEnumerator_MoveNext_m9233_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t564  ShimEnumerator_get_Entry_m9234_gshared (ShimEnumerator_t1540 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9234(__this, method) (( DictionaryEntry_t564  (*) (ShimEnumerator_t1540 *, const MethodInfo*))ShimEnumerator_get_Entry_m9234_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9235_gshared (ShimEnumerator_t1540 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9235(__this, method) (( Object_t * (*) (ShimEnumerator_t1540 *, const MethodInfo*))ShimEnumerator_get_Key_m9235_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9236_gshared (ShimEnumerator_t1540 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9236(__this, method) (( Object_t * (*) (ShimEnumerator_t1540 *, const MethodInfo*))ShimEnumerator_get_Value_m9236_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9237_gshared (ShimEnumerator_t1540 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9237(__this, method) (( Object_t * (*) (ShimEnumerator_t1540 *, const MethodInfo*))ShimEnumerator_get_Current_m9237_gshared)(__this, method)
