/* NON_MATCHING: the position now bulk-loads (vldmia) as in retail; retail forwards the layer with `ldr` and the last word through VFP (vldr/vstr) and converts x before y, where armcc merges both stack words into one ldm. */
#include "shard/W6_W6Match2_OffsetPosition2D.h"

/* A one-word argument the callee reads as an integer or a float. */
union BadgeWord {
    f32 f;
    s32 i;
};

extern "C" void itemDrawCategoryBadge(u32 id, s32 x, s32 y, s32 layer, BadgeWord equippedFlag);

// Add the local and base offsets, truncate the coordinates, and forward the draw.
extern "C" void FUN_00230d2c(const OffsetPosition2D* position, u32 id, s32 x, s32 y,
                            s32 layer, BadgeWord equippedFlag)
{
    f32 screenX = position->x + position->offsetX + f32(x);
    f32 screenY = position->y + position->offsetY + f32(y);
    itemDrawCategoryBadge(id, s32(screenX), s32(screenY), layer, equippedFlag);
}
