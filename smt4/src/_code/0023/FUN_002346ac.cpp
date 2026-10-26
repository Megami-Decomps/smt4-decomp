#include "shard/W6_W6Match1_TouchRegionOwner.h"

extern "C" {
u16 ifTouchRegionAdd(s16 x, s16 y, s16 width, s16 height);

void FUN_002346ac(TouchRegionOwner* owner, s32 x, s32 y, s32 width, s32 height)
{
    owner->region = ifTouchRegionAdd(x, y, width, height);
    owner->x = x;
    owner->y = y;
    owner->width = width;
    owner->height = height;
    owner->count++;
}
}
