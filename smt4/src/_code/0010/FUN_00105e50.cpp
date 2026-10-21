/* NON_MATCHING: instruction selection/order differs: retail vcvt.f32.s32 s3, s0; compiler vcvt.f32.s32 s0, s0. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern GxRatePresets g_asdGxPresets;

/* Converts the frame interval to the graphics timing preset. */
void FUN_00105e50(s32 interval)
{
    f32 frequency = 59.83100128173828f / (interval + 1);
    g_asdGxPresets.depth = 1000000.0f / frequency;
    g_asdGxPresets.interval = interval;
}

} /* extern "C" */
