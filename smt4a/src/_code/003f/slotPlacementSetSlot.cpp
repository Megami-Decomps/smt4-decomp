#include "common.h"

extern "C" {

typedef struct Point {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 y;
} Point;

typedef struct SlotPlacement {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ Point position;
    /* 0x34 */ u8 unk34[4];
    /* 0x38 */ s32 slot;
} SlotPlacement;

extern void FUN_003f3e64(SlotPlacement *placement, s32 *x, s32 *y);

/* Moves the placement to `slot` and caches the slot's screen position. */
void slotPlacementSetSlot(SlotPlacement *placement, s32 slot)
{
    Point position;

    placement->slot = slot;
    position.x = 0;
    position.y = 0;
    FUN_003f3e64(placement, &position.x, &position.y);
    placement->position = position;
}

} /* extern "C" */
