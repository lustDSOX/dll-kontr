#include "Header.h"

main() {
	HINSTANCE dll = LoadLibrary(L"DLL.dll");
	CountSimple CS = (CountSimple)GetProcAddress(dll, "CountSimple");
	int count = CS(1, 22);
	printf("%d", count);
}