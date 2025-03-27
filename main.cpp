#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <winuser.h>
#include <windows.h>
#include <tlhelp32.h>

using namespace std;

int main()
{
    const HWND hwnd = FindWindowA(nullptr, "osu!");
    DWORD pid = 0;
    GetWindowThreadProcessId(hwnd, &pid);

    uintptr_t getModuleBase(DWORD procId, const wchar_t* modName)
    {
        uintptr_t modBase = 0;
        constexpr DWORD procId = 0;
        HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, procId);
    }


    return 0;
}
