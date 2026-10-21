/* NON_MATCHING: retail bulk-loads position components and transports the integer equipped flag through VFP; scalar loads and conversion/register scheduling differ. */
#include "shard/W6_W6Match2_OffsetPosition2D.h"
#include "shard/W6_W6Match6_ItemIcon.h"


// Add the local and base offsets, truncate the coordinates, and forward the draw.
extern "C" void FUN_00493344(const OffsetPosition2D* position, u32 id, s32 x, s32 y,
                             u32 flags, s32 showEquipped)
{
    f32 screenX = position->x + position->offsetX + f32(x);
    f32 screenY = position->y + position->offsetY + f32(y);
    uiDrawItemCategoryIcon(id, s32(screenX), s32(screenY), flags, showEquipped);
}
