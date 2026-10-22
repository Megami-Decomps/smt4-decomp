/* NON_MATCHING: register allocation only: retail keeps `first` in r4 and `firstSlot` in r6 (swapped here). */
#include "common.h"

extern "C" {
u32 scrGetArg(u32 index);
s32 bustupCutAnimFindSlot(u32 id);
void FUN_00249c4c(u32 id, s32 layer, s32 front);

/* Script command: layers bust-ups `first` (layer 2) and `second` (layer 1); when only one of them
 * is already placed, the other one is brought to the front. */
u32 FUN_0031bf80(void)
{
    u32 first = scrGetArg(0);
    u32 second = scrGetArg(1);
    s32 firstSlot = bustupCutAnimFindSlot(first);
    s32 secondSlot = bustupCutAnimFindSlot(second);

    if ((firstSlot < 0 && secondSlot < 0) || (firstSlot > 0 && secondSlot > 0)) {
        FUN_00249c4c(first, 2, 0);
        FUN_00249c4c(second, 1, 0);
    } else if (firstSlot > 0) {
        FUN_00249c4c(first, 2, 0);
        FUN_00249c4c(second, 1, 1);
    } else {
        FUN_00249c4c(second, 1, 0);
        FUN_00249c4c(first, 2, 1);
    }
    return 1;
}

} /* extern "C" */
