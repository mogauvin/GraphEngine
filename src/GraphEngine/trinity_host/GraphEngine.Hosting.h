﻿#pragma once

#include "TrinityCommon.h"

#if !defined(TRINITYC_EXPORTS)
DLL_IMPORT TrinityErrorCode GraphEngineInit(IN int n_apppaths, IN wchar_t** lp_apppaths, OUT void*& lpenv);
DLL_IMPORT TrinityErrorCode GraphEngineUninit(IN const void* lpenv);
DLL_IMPORT TrinityErrorCode GraphEngineGetFunction(IN const void* lpenv, IN wchar_t* lp_entry_asm, IN wchar_t* lp_entry_class, IN wchar_t* lp_entry_method, OUT void** lp_func);
#endif