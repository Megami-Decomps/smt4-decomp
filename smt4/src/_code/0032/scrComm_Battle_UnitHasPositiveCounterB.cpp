#include "common.h"

extern "C" {

int scrSetResult(int result);
extern u8 *btlUnitGet(u32 id);

u32 scrComm_Battle_UnitHasPositiveCounterB(u32 *id)
{
    u8 *unit = btlUnitGet(*id);

    if (*(s16 *)(*(int *)(unit + 0x20) + 0x90) > 0) {
        scrSetResult(1);
    } else {
        scrSetResult(0 < *(s16 *)(*(int *)(unit + 0x20) + 0x94));
    }
    return 1;
}

} /* extern "C" */
