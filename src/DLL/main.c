#include <string.h>
#include <stdio.h>
#include <windows.h>
#include "../SignatureScanner.c"



BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call,
                      LPVOID lpReserved) {
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        MessageBox(0, "TEST1","TEST1", 1);
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}