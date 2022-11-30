#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <time.h>

typedef int(_cdecl* CountSimple)(int, int);
typedef int(_cdecl* CountSimpleThreads)(int, int,int);
