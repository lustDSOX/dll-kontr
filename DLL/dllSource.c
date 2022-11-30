#include "dllHeader.h"

BOOL WINAPI DllMain(
	HINSTANCE hinstDLL, 
	DWORD fdwReason,    
	LPVOID lpvReserved) 
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
		break;

	case DLL_THREAD_ATTACH:
		break;

	case DLL_THREAD_DETACH:
		break;

	case DLL_PROCESS_DETACH:

		if (lpvReserved != NULL)
		{
			break;
		}
		break;
	}
	return TRUE;  
}

int CountSimple(int n1, int n2) {;
	int count = 0;
	if (n1 == 1)n1 ++ ;
	while (n1 != n2) {
		BOOL simple = TRUE;
		for (size_t j = 2; j < n1; j++)
		{
			if (n1 % j == 0) {
				simple = FALSE;
				break;
			}
		}
		if (simple) count++;
		n1++;
	}
	return count;
}

int CountSimpleThreads(int n1, int n2,int cThread) {
	int count = 0;
	if (n1 == 1)n1++;
	while (n1 != n2) {
		BOOL simple = TRUE;
		for (size_t j = 2; j < n1; j++)
		{
			if (n1 % j == 0) {
				simple = FALSE;
				break;
			}
		}
		if (simple) count++;
		n1++;
	}
	return count;
}