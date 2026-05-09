#include <stdio.h>
#include <windows.h>

int main(void) {
    DWORD pid = GetCurrentProcessId();

    printf("maldev lab smoke test\n");
    printf("pid: %lu\n", (unsigned long)pid);
    printf("sleeping for 30 seconds so you can inspect the process...\n");

    Sleep(30000);

    printf("done\n");
    return 0;
}
