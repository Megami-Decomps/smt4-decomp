#include "common.h"

extern "C" {

int scrSetResult(int result);
extern int btlSlotsHaveReadyUnit(u32 unit);
extern u8 *btlUnitGet(u32 id);

extern u32 g_btlScriptUnit;
u32 FUN_002f70b8(void)
{
    u8 *unit = btlUnitGet(g_btlScriptUnit);

    if (btlSlotsHaveReadyUnit(*(u32 *)(unit + 0x20)) != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
