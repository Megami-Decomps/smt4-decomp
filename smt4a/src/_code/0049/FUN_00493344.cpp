#include "shard/W6_W6Match2_OffsetPosition2D.h"
#include "shard/W6_W6Match6_ItemIcon_VariantA.h"

// Add the local and base offsets, truncate the coordinates, and forward the draw.
extern "C" void FUN_00493344(const OffsetPosition2D* position, u32 id, s32 x, s32 y,
                             s32 layer, BadgeWord showEquipped)
{
    s32 drawX = (s32)(position->x + position->offsetX + (f32)x);
    s32 drawY = (s32)(position->y + position->offsetY + (f32)y);
    uiDrawItemCategoryIcon(id, drawX, drawY, layer, showEquipped);
}
