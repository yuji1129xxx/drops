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

// System.CultureAwareComparer
struct CultureAwareComparer_t1363;
// System.Globalization.CultureInfo
struct CultureInfo_t345;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.CultureAwareComparer::.ctor(System.Globalization.CultureInfo,System.Boolean)
extern "C" void CultureAwareComparer__ctor_m8186 (CultureAwareComparer_t1363 * __this, CultureInfo_t345 * ___ci, bool ___ignore_case, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CultureAwareComparer::Compare(System.String,System.String)
extern "C" int32_t CultureAwareComparer_Compare_m8187 (CultureAwareComparer_t1363 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CultureAwareComparer::Equals(System.String,System.String)
extern "C" bool CultureAwareComparer_Equals_m8188 (CultureAwareComparer_t1363 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CultureAwareComparer::GetHashCode(System.String)
extern "C" int32_t CultureAwareComparer_GetHashCode_m8189 (CultureAwareComparer_t1363 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
