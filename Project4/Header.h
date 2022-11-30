#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>


typedef int(_cdecl* CountSimple)(int, int);
typedef int(_cdecl* CountSimpleThreads)(int, int,int);
typedef clock_t(_cdecl* start);
