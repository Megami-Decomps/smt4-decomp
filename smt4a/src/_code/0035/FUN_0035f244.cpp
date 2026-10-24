#include "common.h"

extern "C" {
extern u32 g_btlScriptUnit;
void btlUnitSetParam(u32 unit, s32 param, s32 value, s32 flag);
}

extern "C" s32 FUN_0035f244(void)
{
    btlUnitSetParam(g_btlScriptUnit, 6, 0, 1);
    return 1;
}
