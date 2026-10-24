#include "battle/btlUnit.h"

extern "C" {
extern u32 g_btlScriptUnit;
u32 scrGetArg(u32 index);
BtlUnitA *btlUnitGet(u32);
s32 FUN_002b54a0(s32 *, u32);
void scrSetResult(s32);

// Test the requested action against the script-selected unit's parameter block.
u32 scrCommTestUnitAction(void)
{
    u32 action = scrGetArg(0);
    BtlUnitA *unit = btlUnitGet(g_btlScriptUnit);
    if (FUN_002b54a0(unit->params, action) != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}
}
