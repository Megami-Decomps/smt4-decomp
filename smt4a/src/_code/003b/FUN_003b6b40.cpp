/* NON_MATCHING: paired bustup job selection uses different saved-register allocation. */
/* Places two bustup jobs in opposite slots, preserving a job already on the other side. */
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 bustupCutAnimFindSlot(u32 job);
void bustupCutAnimSetPlacement(u32 job, s32 slot, s32 snap, s32 x, s32 y);

u32 FUN_003b6b40(void)
{
    u32 first = scrGetArg(0);
    u32 second = scrGetArg(1);
    s32 firstSlot = bustupCutAnimFindSlot(first);
    s32 secondSlot = bustupCutAnimFindSlot(second);
    if (firstSlot < 0) {
        if (secondSlot < 0) {
            bustupCutAnimSetPlacement(first, 2, 0, 0, 0);
            bustupCutAnimSetPlacement(second, 1, 0, 0, 0);
            return 1;
        }
    } else if (firstSlot > 0) {
        if (secondSlot > 0) {
            bustupCutAnimSetPlacement(first, 2, 0, 0, 0);
            bustupCutAnimSetPlacement(second, 1, 0, 0, 0);
            return 1;
        }
        bustupCutAnimSetPlacement(first, 2, 0, 0, 0);
        bustupCutAnimSetPlacement(second, 1, 1, 0, 0);
        return 1;
    }
    bustupCutAnimSetPlacement(second, 1, 0, 0, 0);
    bustupCutAnimSetPlacement(first, 2, 1, 0, 0);
    return 1;
}
}
