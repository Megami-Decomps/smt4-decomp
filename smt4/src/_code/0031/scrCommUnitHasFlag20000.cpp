#include "common.h"

extern "C" {

int scrSetResult(int result);
extern u8 *btlUnitGet(u32 id);
extern int FUN_002d1974(u32 a, u32 b);

extern u32 g_btlScriptUnit;
u32 scrCommUnitHasFlag20000(void)
{
    u8 *unit = btlUnitGet(g_btlScriptUnit);
    int result = FUN_002d1974(*(u32 *)(unit + 0x24), 0x20000);

    scrSetResult(result != 0);
    return 1;
}

} /* extern "C" */
