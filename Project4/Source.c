#include "Header.h"

main() {
	HINSTANCE dll = LoadLibrary(L"DLL.dll");
	CountSimple CS = (CountSimple)GetProcAddress(dll, "CountSimple");
	CountSimpleThreads CST = (CountSimpleThreads)GetProcAddress(dll, "CountSimpleThreads");
	int count = CST(1, 22,5);
	start times = (start)GetProcAddress(dll, "start");
	printf("%d", times);
}