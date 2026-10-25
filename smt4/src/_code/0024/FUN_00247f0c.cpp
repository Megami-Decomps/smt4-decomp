/* NON_MATCHING: identical instructions apart from VFP register numbering (retail keeps the 0.0f constant in s1 and the scaled time in s0; built uses s4 and s1) */
#include "common.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {


/* Interpolates from `from` to `to` over `duration` by the table-shaped curve at `elapsed` (clamped to the ends). */
f32 FUN_00247f0c(f32 from, f32 to, f32 duration, f32 elapsed)
{
    f32 result = to;

    if (duration == 0.0f) {
        return result;
    }
    if (elapsed <= 0.0f) {
        return from;
    }
    if (elapsed >= duration) {
        return result;
    }
    f32 delta = result - from;
    u16 position = (u32)((elapsed * 16384.0f) / duration);
    f32 scaled = mathInterpolatePackedTable(position) * delta;
    return scaled + from;
}

} /* extern "C" */
