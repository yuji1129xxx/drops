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

// System.RankException
struct RankException_t1360;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t312;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.RankException::.ctor()
extern "C" void RankException__ctor_m8171 (RankException_t1360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RankException::.ctor(System.String)
extern "C" void RankException__ctor_m8172 (RankException_t1360 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RankException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RankException__ctor_m8173 (RankException_t1360 * __this, SerializationInfo_t312 * ___info, StreamingContext_t313  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
