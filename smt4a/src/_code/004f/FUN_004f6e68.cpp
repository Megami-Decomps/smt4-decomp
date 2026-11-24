#include "battle/BtlEffectReset.h"

extern "C" {

/* Resets every effect file slot of the battle effect work. */
void FUN_004f6e68(BtlEffectFiles *work)
{
    s32 i;

    work->requestA = 0;
    work->requestB = 0;
    for (i = 0; i < 4; i++) {
        clearEffectSlot(&work->unitSlots[i]);
        clearEffectSlot(&work->secondSlots[i]);
        clearEffectSlot(&work->thirdSlots[i]);
        clearEffectSlot(&work->fourthSlots[i]);
    }
    for (i = 0; i < 4; i++)
        clearEffectSlot(&work->fifthSlots[i]);
    for (i = 0; i < 3; i++)
        clearEffectSlot(&work->eighthSlots[i]);
    clearEffectSlot(&work->singleSlot);
    clearEffectSlot(&work->lastSlot);
    for (i = 0; i < 3; i++)
        clearEffectSlot(&work->sixthSlots[i]);
    for (i = 0; i < 2; i++)
        clearEffectSlot(&work->seventhSlots[i]);
    for (i = 0; i < 11; i++)
        work->markerSlots[i].handle = 0xFF;
}

} /* extern "C" */
