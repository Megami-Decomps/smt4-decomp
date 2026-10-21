#include "shard/W5_W5Match2_TouchRegions.h"
extern "C" {
s16 ifTouchRegionAdd(s16 x,s16 y,s16 width,s16 height);
/* Register the second touch rectangle and increment the region count. */
void touchRegisterSecondRegion(TouchRegions *regions,s32 x,s32 y,s32 width,s32 height) { regions->second=ifTouchRegionAdd((s16)x,(s16)y,(s16)width,(s16)height); ++regions->count; }
}
