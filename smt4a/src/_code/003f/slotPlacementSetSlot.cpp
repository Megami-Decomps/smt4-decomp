#include "common.h"
#include "ui/ScreenPoint.h"

extern "C" {

typedef struct SlotPlacement {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ ScreenPoint position;
    /* 0x34 */ u8 unk34[4];
    /* 0x38 */ s32 slot;
} SlotPlacement;

extern void slotPlacementGetPosition(SlotPlacement *placement, s32 *x, s32 *y);

/* Moves the placement to `slot` and caches the slot's screen position. */
void slotPlacementSetSlot(SlotPlacement *placement, s32 slot)
{
    ScreenPoint position;

    placement->slot = slot;
    position.x = 0;
    position.y = 0;
    slotPlacementGetPosition(placement, &position.x, &position.y);
    placement->position = position;
}

} /* extern "C" */
