/* NON_MATCHING: retail bulk-loads the four position components; compiler uses scalar loads and different VFP/core temporary scheduling while copying the integer marker. */
#include "shard/W6_W6Match2_OffsetPosition2D.h"

extern "C" void itemDrawCategoryBadge(u32 id, s32 x, s32 y, s32 layer, s32 equippedFlag);

// Add the local and base offsets, truncate the coordinates, and forward the draw.
extern "C" void FUN_00230d2c(const OffsetPosition2D* position, u32 id, s32 x, s32 y,
                            s32 layer, s32 equippedFlag)
{
    f32 screenX = position->x + position->offsetX + f32(x);
    f32 screenY = position->y + position->offsetY + f32(y);
    itemDrawCategoryBadge(id, s32(screenX), s32(screenY), layer, equippedFlag);
}
