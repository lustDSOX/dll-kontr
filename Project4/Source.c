#include "Header.h"

main() {
	system("chcp 1251>nul");
	HINSTANCE dll = LoadLibrary(L"DLL.dll");
	CountSimple CS = (CountSimple)GetProcAddress(dll, "CountSimple");
	clock_t* times = (clock_t*)GetProcAddress(dll, "start");
	CountSimpleThreads CST = (CountSimpleThreads)GetProcAddress(dll, "CountSimpleThreads");
	clock_t* timesT = (clock_t*)GetProcAddress(dll, "startT");
	int countT = CST(1, 12,3);
	int count = CS(1, 12);
	printf("CST = %d\n",countT);
	printf("CS = %d\n", count);
	printf("Время выполнения функции в нескольких потоках %d миллисекунд\n", *timesT);
	printf("Время выполнения функции в одном потоке %d миллисекунд\n", *times);
	FreeLibrary(dll);
}