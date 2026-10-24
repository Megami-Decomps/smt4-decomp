/* NON_MATCHING: readable rebuild of the battle effect slot lookup-and-start (153 vs 228 rows); retail clears its 16-word name buffer with sixteen separate stores and keeps the sixth/eighth argument pair as one 64-bit piece, which armcc here emits as a block clear. */
#include "battle/BtlEffectFiles.h"

extern "C" {
s32 libc_strcpy(char *dest, const char *source);
s32 FUN_004f5750(BtlEffectFiles *work, u32 handle, u32 a, u32 b, s32 group, u32 c, char *name, u32 d, u32 e);

/* Looks up the effect slot of (group 0-3 the unit sets, 4 markers, 5 and 6 further sets, 7 the last,
 * 8 the single, 9 and 10 the remaining groups, index) and starts its effect with a copy of its name; the name
 * is also copied out to `nameOut` when given. Returns the work, or 0 when the slot does not exist. */
s32 FUN_004f5238(BtlEffectFiles *work, u32 a, u32 b, s32 group, s32 index, u32 c, char *nameOut, u32 d, u32 e)
{
    u8 handle = 0xFF;
    if (group >= 11)
        return 0;
    char name[64] = { 0 };
    BtlEffectSlot *slot;
    switch (group) {
    case 0:
        if (index >= 4)
            return 0;
        slot = &work->unitSlots[index];
        break;
    case 1:
        if (index >= 4)
            return 0;
        slot = &work->secondSlots[index];
        break;
    case 2:
        if (index >= 4)
            return 0;
        slot = &work->thirdSlots[index];
        break;
    case 3:
        if (index >= 4)
            return 0;
        slot = &work->fourthSlots[index];
        break;
    case 4:
        if (index >= 11)
            return 0;
        slot = &work->markerSlots[index];
        break;
    case 5:
        if (index >= 4)
            return 0;
        slot = &work->fifthSlots[index];
        break;
    case 6:
        if (index >= 3)
            return 0;
        slot = &work->eighthSlots[index];
        break;
    case 7:
        if (index != 0)
            return 0;
        slot = &work->lastSlot;
        break;
    case 8:
        if (index != 0)
            return 0;
        slot = &work->singleSlot;
        break;
    case 9:
        if (index >= 3)
            return 0;
        slot = &work->sixthSlots[index];
        break;
    default:
        if (index >= 2)
            return 0;
        slot = &work->seventhSlots[index];
        break;
    }
    handle = slot->handle;
    libc_strcpy(name, slot->name);
    if (nameOut != NULL)
        libc_strcpy(nameOut, name);
    FUN_004f5750(work, handle, a, b, group, c, name, d, e);
    return (s32)work;
}

} /* extern "C" */
