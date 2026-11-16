#include "ui/SlotPlacement.h"

extern "C" {
void slotPlacementGetPosition(SlotPlacement *placement, s32 *x, s32 *y);

/* Starts an eight-frame transition from the stored position to the selected slot. */
void slotPlacementStartTransition(SlotPlacement *placement, u8 mode)
{
    placement->mode = mode;
    placement->frame = 0;
    placement->state = 1;
    s32 x = 0;
    s32 y = 0;
    slotPlacementGetPosition(placement, &x, &y);
    placement->stepX = (x - placement->startX) * 0x1000 / 8;
    placement->stepY = (y - placement->startY) * 0x1000 / 8;
    placement->currentX = placement->startX * 0x1000;
    placement->currentY = placement->startY * 0x1000;
}
}
