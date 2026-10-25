/* NON_MATCHING: right portrait, duration and left slot occupy different saved registers. */
#include "common.h"
#include "shard/bustupConfigureSlotTransition.h"

extern "C" {
u32 scrGetArg(u32);
s32 bustupCutAnimFindSlot(u32);
void bustupCutAnimSetPlacement(u32, s32, s32, s32, s32);

// Place a pair of cut-in portraits, transitioning whichever portrait needs to change slots.
u32 FUN_003cdbe8(void)
{
    u32 left = scrGetArg(0);
    u32 right = scrGetArg(1);
    u32 duration = scrGetArg(2);
    u32 x = scrGetArg(3);
    u32 y = scrGetArg(4);
    s32 leftSlot = bustupCutAnimFindSlot(left);
    s32 rightSlot = bustupCutAnimFindSlot(right);
    if ((leftSlot < 0 && rightSlot < 0) || (leftSlot > 0 && rightSlot > 0)) {
        bustupCutAnimSetPlacement(left, 2, 0, 0, 0);
        bustupCutAnimSetPlacement(right, 1, 0, 0, 0);
    } else if (leftSlot > 0) {
        bustupCutAnimSetPlacement(left, 2, 0, 0, 0);
        bustupConfigureSlotTransition(right, 1, 3, duration, x, y);
    } else {
        bustupCutAnimSetPlacement(right, 1, 0, 0, 0);
        bustupConfigureSlotTransition(left, 2, 3, duration, x, y);
    }
    return 1;
}
}
