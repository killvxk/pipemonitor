#pragma once
#include "windows.h"

typedef enum 
{
	S_INJECT,
	E_INJECT_OPENPROCESS,
	E_INJECT_VIRTUALALLOCEX,
	E_INJECT_WRITEPROCESSMEMORY,
	E_INJECT_GETMODULEHANDLE,
	E_INJECT_CREATEREMOTETHREAD,
} inject_ret;

inject_ret inject(DWORD pid,LPWSTR path);