/*
KCTFJr{Anti_Debugging_always_bothers_us}
*/

#include <stdio.h>
#include <windows.h>

char flag[] = "JBSEIqz@msh^Cdatffhmf^`kv`xr^ansgdqr^tr|";

BOOL checkDebugger() {
	__try {
		CloseHandle((HANDLE)0x12345678);
	}
	__except (EXCEPTION_EXECUTE_HANDLER) {
		return TRUE;
	}
	return FALSE;
}

void func1() {
	for (int i = 0; i < 40; i++) {
		flag[i] += 1;
	}
	MessageBox(
		NULL,
		flag,
		"FLAG",
		MB_OK
	);
}

void func2() {
	MessageBox(
		NULL,
		"????????????????????",
		"FLAG",
		MB_OK
	);
}

int main(int argc, char argv[]) {

	if (IsDebuggerPresent()) {
		fprintf(stderr, "Process exit!\n");
		exit(1);
	}

	if (checkDebugger()) {
		fprintf(stderr, "Process exit!\n");
		exit(1);
	}
	
	HANDLE a = CreateFile(".\\test.txt", GENERIC_READ, NULL, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (a == INVALID_HANDLE_VALUE) {
		fprintf(stderr, "Process exit!!\n");
		exit(1);
	}
	
	LPFILETIME creation;
	SYSTEMTIME utc;
	GetFileTime(a, &creation, NULL, NULL);
	FileTimeToSystemTime(&creation, &utc);

	if (utc.wDay == 21) {
		func1();
	}
	else {
		func2();
	}

	return 0;
}