#include "common.h"

extern "C" {
// Return the signed shortest rotation from the first angle to the second.
f32 mathGetShortestAngleDelta(f32 from, f32 to)
{
    if (from < 0.0f || to < 0.0f) {
        from += 360.0f;
        to += 360.0f;
    }
    from = static_cast<f32>(static_cast<s32>(from) % 360);
    to = static_cast<f32>(static_cast<s32>(to) % 360);
    f32 difference = from - to;
    if (difference > 180.0f || difference < -180.0f) {
        if (from < to)
            from += 360.0f;
        else
            to += 360.0f;
    }
    return to - from;
}
}
