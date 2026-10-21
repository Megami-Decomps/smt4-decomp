/* NON_MATCHING: post-call count register and X/region store order differ; all argument normalization and pre-call instructions match. */
#include "shard/W6_W6Match1_TouchRegionOwner.h"

extern "C" {
s32 ifTouchRegionAdd(s32 x, s32 y, s32 width, s32 height);

void FUN_002346ac(TouchRegionOwner* owner, u16 x, u16 y, u16 width, u16 height)
{
    owner->region = static_cast<u16>(ifTouchRegionAdd(static_cast<s16>(x), static_cast<s16>(y),
                                                    static_cast<s16>(width), static_cast<s16>(height)));
    owner->x = static_cast<s16>(x);
    owner->y = static_cast<s16>(y);
    owner->width = static_cast<s16>(width);
    owner->height = static_cast<s16>(height);
    ++owner->count;
}
}
