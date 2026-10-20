#include "common.h"

extern "C" {

int scrSetResult(int result);
extern u8 *btlUnitGet(u32 id);
extern int FUN_002d1974(u32 a, u32 b);

u32 FUN_0031caec(u32 *id)
{
    u8 *unit = btlUnitGet(*id);
    int result = FUN_002d1974(*(u32 *)(unit + 0x24), 0x40000);

    scrSetResult(result != 0);
    return 1;
}

} /* extern "C" */
