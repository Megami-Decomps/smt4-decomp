#include "common.h"

extern "C" {
extern u32 g_btlScriptUnit;
void btlUnitSetParam(u32 unit, s32 param, s32 value);
}

extern "C" s32 FUN_002e3fdc(void)
{
    btlUnitSetParam(g_btlScriptUnit, 6, 0);
    return 1;
}
