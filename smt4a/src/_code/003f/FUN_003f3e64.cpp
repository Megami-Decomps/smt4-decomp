/* NON_MATCHING: branch/store layout matches; slot and x-output pointers use exchanged saved registers. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {


typedef struct Slot {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ u8 override;
    /* 0x23 */ u8 unk23[0x15];
    /* 0x38 */ s32 index;
    /* 0x3C */ s32 shifted;
} Slot;


/* Looks up the slot's screen position; slots 16 and up use the table's second page and are moved
 * by 400 horizontally (the left-shifted layout moves slots 4-15 the other way). */
void FUN_003f3e64(Slot *slot, s32 *x, s32 *y)
{
    s32 index = slot->index;
    TextureTableEntryIV *position;
    s32 shifted;

    if (slot->override != 0) {
        position = asdTMTexTableEntryAt(0x11, index + 0x57);
        *x = position->x;
        *y = position->y;
        return;
    }
    if (index > 15) {
        index -= 12;
    }
    position = asdTMTexTableEntryAt(0x11, index + 0x2d);
    *x = position->x;
    *y = position->y;
    if (slot->shifted == 0) {
        if (slot->index > 15) {
            shifted = *x + 400;
        } else {
            return;
        }
    } else {
        if ((u32)(slot->index - 4) <= 11) {
            shifted = *x - 400;
        } else {
            return;
        }
    }
    *x = shifted;
}

} /* extern "C" */
