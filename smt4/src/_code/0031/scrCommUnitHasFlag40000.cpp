#include "battle/BattleUnitSlot.h"

extern "C" {

int scrSetResult(int result);
extern int FUN_002d1974(u32 a, u32 b);

extern u32 g_btlScriptUnit;
u32 scrCommUnitHasFlag40000(void)
{
    u8 *unit = reinterpret_cast<u8 *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));
    int result = FUN_002d1974(*(u32 *)(unit + 0x24), 0x40000);

    scrSetResult(result != 0);
    return 1;
}

} /* extern "C" */
