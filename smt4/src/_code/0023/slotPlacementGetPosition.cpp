/* NON_MATCHING: register allocation only: retail keeps the placement in r5 and the x output pointer in r4 (built swaps them). */
#include "common.h"

extern "C" {

typedef struct SlotPlacement {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ u8 special;      /* nonzero: use the fixed table row */
    /* 0x23 */ u8 unk23[0x15];
    /* 0x38 */ s32 slot;
    /* 0x3C */ s32 mirrored;
} SlotPlacement;

typedef struct PlacementRow {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
} PlacementRow;

extern PlacementRow *FUN_002bf4f8(s32 table, s32 row);

/* Looks up the screen position of the placement's slot; slots 4..15 are shifted by 400 px to one side, 16+ to the other. */
void slotPlacementGetPosition(SlotPlacement *placement, s32 *x, s32 *y)
{
    s32 slot = placement->slot;
    PlacementRow *row;
    s32 shifted;

    if (placement->special != 0) {
        row = FUN_002bf4f8(25, slot + 87);
        *x = row->x;
        *y = row->y;
        return;
    }
    if (slot > 15) {
        slot = slot - 12;
    }
    row = FUN_002bf4f8(25, slot + 45);
    *x = row->x;
    *y = row->y;
    if (placement->mirrored == 0) {
        if (placement->slot > 15) {
            shifted = *x + 400;
        } else {
            return;
        }
    } else {
        if ((u32)(placement->slot - 4) <= 11) {
            shifted = *x - 400;
        } else {
            return;
        }
    }
    *x = shifted;
}

} /* extern "C" */
