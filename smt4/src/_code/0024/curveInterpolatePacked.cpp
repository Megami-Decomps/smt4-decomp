#include "common.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {


/* Interpolates from `from` to `to` over `duration` by the table-shaped curve at `elapsed` (clamped to the ends). */
f32 curveInterpolatePacked(f32 from, f32 to, f32 duration, f32 elapsed)
{
    if (duration == 0.0f) {
        return to;
    }
    if (elapsed <= 0.0f) {
        return from;
    }
    if (elapsed >= duration) {
        return to;
    }
    f32 delta = to - from;
    f32 phase = elapsed * 16384.0f / duration;
    u16 position = (u32)phase;
    f32 scaled = mathInterpolatePackedTable(position) * delta;
    return scaled + from;
}

} /* extern "C" */
