/* NON_MATCHING: identical instruction count and flow; only the prologue differs: retail forms the addresses of the two request words as `base + 7168 + 852/856` with adds, armcc here loads the second offset from the literal pool (`ldr r1,[pc]; str sl,[r1,r4]`), which shifts every later branch by 4 bytes. */
#include "battle/BtlEffectFiles.h"

extern "C" {
void asdMemFree(void *block);
void sysMemClear(void *block, s32 bytes);

/* Empties one effect slot: no handle, no name, no loaded file, no flags. */
static void clearEffectSlot(BtlEffectSlot *slot)
{
    slot->handle = 0xFF;
    sysMemClear(slot->name, 0x80);
    if (slot->file != NULL) {
        asdMemFree(slot->file);
        slot->file = NULL;
    }
    slot->flags = 0;
}

/* Resets every effect file slot of the battle effect work. */
void FUN_004f6e68(BtlEffectFiles *work)
{
    work->requestA = 0;
    work->requestB = 0;
    for (s32 i = 0; i < 4; i++) {
        clearEffectSlot(&work->unitSlots[i]);
        clearEffectSlot(&work->secondSlots[i]);
        clearEffectSlot(&work->thirdSlots[i]);
        clearEffectSlot(&work->fourthSlots[i]);
    }
    for (s32 i = 0; i < 4; i++)
        clearEffectSlot(&work->fifthSlots[i]);
    for (s32 i = 0; i < 3; i++)
        clearEffectSlot(&work->eighthSlots[i]);
    clearEffectSlot(&work->singleSlot);
    clearEffectSlot(&work->lastSlot);
    for (s32 i = 0; i < 3; i++)
        clearEffectSlot(&work->sixthSlots[i]);
    for (s32 i = 0; i < 2; i++)
        clearEffectSlot(&work->seventhSlots[i]);
    for (s32 i = 0; i < 11; i++)
        work->markerSlots[i].handle = 0xFF;
}

} /* extern "C" */
