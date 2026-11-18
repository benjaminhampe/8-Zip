#include <de/win32/win32_MessageBox.h>
#include <../res/resource.h>

#ifdef _WIN32
    #ifndef WIN32_LEAN_AND_MEAN
    #define WIN32_LEAN_AND_MEAN
    #endif
    // #define _WIN32_WINNT  0x0A00   // Windows 8 API freischalten
    // #define WINVER        0x0A00
    // #define _WIN32_WINNT  0x0602   // Windows 8 API freischalten
    // #define WINVER        0x0602
    #include <windows.h>            // only for Window ICOn
    #include <shellapi.h>
    //#include "../res/resource.h"    // only for Window ICOn
    // #include <shellscalingapi.h>    // Für SetProcessDpiAwarenessContext()
    // #include <winuser.h>
    // #include <dwmapi.h>

    // #pragma comment(lib, "Shlwapi.lib")
#endif


void EightZip_MessageBox(const std::wstring& caption, const std::wstring& text)
{
    MSGBOXPARAMSW mbp = { 0 };
    mbp.cbSize      = sizeof(MSGBOXPARAMSW);
    mbp.hwndOwner   = NULL; // Can be NULL or fl_xid(fltk_window)
    mbp.hInstance   = GetModuleHandle(NULL);
    mbp.lpszText    = text.c_str();
    mbp.lpszCaption = caption.c_str();
    mbp.dwStyle     = MB_OK | MB_ICONINFORMATION; // MB_USERICON | MB_USERICON tells Windows to use lpszIcon
    mbp.lpszIcon    = MAKEINTRESOURCEW(aaaa);

    MessageBoxIndirectW(&mbp);
}
