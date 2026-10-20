#include "common.h"

extern "C" {

int scrSetResult(int result);
extern int FUN_00247004(u32 unit);
extern u8 *btlUnitGet(u32 id);

u32 FUN_002f70bc(u32 *id)
{
    u8 *unit = btlUnitGet(*id);

    if (FUN_00247004(*(u32 *)(unit + 0x20)) != 0) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
