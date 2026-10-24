#include "common.h"

extern "C" {
extern u32 g_btlScriptUnit;
void btlUnitSetParam(u32 unit, s32 param, s32 value, s32 flag);
}

extern "C" s32 FUN_0038d46c(void)
{
    btlUnitSetParam(g_btlScriptUnit, 12, 0, 1);
    return 1;
}
