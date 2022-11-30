#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include <time.h>

int count = 0;
clock_t start;

extern __declspec(dllimport) int CountSimple(int, int);
extern __declspec(dllimport) int CountSimpleThreads(int, int,int);
extern __declspec(dllimport) clock_t start;
void IsSimple(int);
