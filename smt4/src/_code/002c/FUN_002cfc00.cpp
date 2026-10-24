#include "common.h"

extern "C" {
extern u32 g_btlScriptUnit;
s32 scrGetArg(u32 index);
void btlUnitSetParam(u32 unit, s32 param, s32 value);
}

extern "C" s32 FUN_002cfc00(void)
{
    btlUnitSetParam(g_btlScriptUnit, 7, scrGetArg(0));
    return 1;
}
