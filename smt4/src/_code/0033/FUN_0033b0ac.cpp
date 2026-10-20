#include "common.h"

extern "C" {

void FUN_00282820(s32, u32, s32, s32, s32, s32, s32, s32);
void FUN_003ae06c(u32 arg);
u32 btlUnitGet(u32 unit);

extern u32 g_btlScriptUnit;
extern u32 DAT_00439ca8;

void FUN_0033b0ac(void)
{
    u32 unit;

    FUN_003ae06c(DAT_00439ca8);
    unit = btlUnitGet(g_btlScriptUnit);
    FUN_00282820(0, unit, 0, 0, 6, 4, 6, 0);
}

} /* extern "C" */
