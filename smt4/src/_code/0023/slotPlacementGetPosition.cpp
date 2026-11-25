#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/SlotPlacement.h"

/* Looks up a slot's screen position and applies the horizontal shift for its group. */
extern "C" void slotPlacementGetPosition(SlotPlacement *placement, s32 *x, s32 *y)
{
    enum {
        SLOT_POSITION_TABLE = 25,
        SLOT_POSITION_FIRST_ROW = 45,
        SLOT_POSITION_ALT_FIRST_ROW = 87,
        SLOT_FIRST_MIRRORED = 4,
        SLOT_LAST_MIRRORED = 15,
        SLOT_MIRRORED_COUNT = SLOT_LAST_MIRRORED - SLOT_FIRST_MIRRORED + 1,
        SLOT_HORIZONTAL_SHIFT = 400
    };
    s32 slot = placement->slot;
    const TextureTableEntryIV *row;

    if (placement->mode != 0) {
        row = asdTMTexTableEntryAt(SLOT_POSITION_TABLE, slot + SLOT_POSITION_ALT_FIRST_ROW);
        *x = row->x;
        *y = row->y;
        return;
    }
    if (slot > SLOT_LAST_MIRRORED) {
        slot -= SLOT_MIRRORED_COUNT;
    }
    row = asdTMTexTableEntryAt(SLOT_POSITION_TABLE, slot + SLOT_POSITION_FIRST_ROW);
    *x = row->x;
    *y = row->y;
    if (placement->mirrored == 0) {
        if (placement->slot > SLOT_LAST_MIRRORED) {
            *x += SLOT_HORIZONTAL_SHIFT;
        }
    } else {
        if ((u32)placement->slot - SLOT_FIRST_MIRRORED <= SLOT_MIRRORED_COUNT - 1) {
            *x -= SLOT_HORIZONTAL_SHIFT;
        }
    }
}
