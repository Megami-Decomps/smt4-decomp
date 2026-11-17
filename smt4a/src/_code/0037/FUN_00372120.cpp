#include "common.h"
#include "Terminal/TerminalSelectionGlobals.h"

extern "C" {
extern TerminalSelectionGlobals g_tmnl;
s32 scrGetArg(u32 index);
}

extern "C" s32 FUN_00372120(void)
{
    g_tmnl.selection = scrGetArg(0);
    return 1;
}
