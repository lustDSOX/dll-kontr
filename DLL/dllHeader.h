#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <time.h>

int count = 0;

extern __declspec(dllimport) int CountSimple(int, int);
extern __declspec(dllimport) int CountSimpleThreads(int, int,int);

__declspec(dllimport) clock_t start;
clock_t start;
__declspec(dllimport) clock_t startT;
clock_t startT;
void IsSimple(int);
