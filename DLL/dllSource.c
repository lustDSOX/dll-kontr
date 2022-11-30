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

int CountSimple(int n1, int n2) {
	count = 0;
	int s = 0;
	int e = 0;
	if (n1 > n2) {
		e = n1;
		s = n2;
	}
	else {
		s = n1;
		e = n2;
	}
	if (s == 1) s++;
	if (s <= 0 && e <= 0) return 0;
	if (s <= 0) s = 2;
	while (s != e) 
	{
		IsSimple(s);
		s++;
	}
	return count;
}

int CountSimpleThreads(int n1, int n2, int cThread) {
	start = clock();
	count = 0;
	int s = 0;
	int e = 0;
	if (n1 > n2) {
		e = n1;
		s = n2;
	}
	else {
		s = n1;
		e = n2;
	}
	if (s == 1) s++;
	if (s <= 0 && e <= 0) return 0;
	if (s <= 0) s = 2;

	HANDLE* threads = calloc(cThread-1, sizeof(HANDLE));
	for (size_t i = 0; i < cThread-1; i++)
	{
		threads[i] = CreateThread(NULL, NULL, IsSimple, s, NULL, NULL);
		if (s < e) s++;
		else break;
	}
	while (s != e) {
		IsSimple(s);
		s++;
	}
	WaitForMultipleObjects(cThread - 1, threads, NULL, INFINITE);
	start = clock() - start;
	return count;
}

void IsSimple(int n) {
	BOOL simple = TRUE;
	for (size_t j = 2; j < n; j++)
	{
		if (n % j == 0) {
			simple = FALSE;
			break;
		}
	}
	if (simple) count++;
}
