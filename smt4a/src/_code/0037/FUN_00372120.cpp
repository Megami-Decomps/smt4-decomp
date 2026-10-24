#include "common.h"

struct TerminalGlobals {
    /* 0x00 */ void *work;
    /* 0x04 */ s32 selection;
};

extern "C" {
extern TerminalGlobals g_tmnl;
s32 scrGetArg(u32 index);
}

extern "C" s32 FUN_00372120(void)
{
    g_tmnl.selection = scrGetArg(0);
    return 1;
}
