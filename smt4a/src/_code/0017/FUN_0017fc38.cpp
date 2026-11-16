#include "common.h"

struct InterpolationState {
    f32 start;       // 0x00
    f32 end;         // 0x04
    s32 duration;    // 0x08
    s32 elapsed;     // 0x0C
};

// Linear interpolation from start to end; returns end once elapsed reaches duration.
extern "C" f32 FUN_0017fc38(const InterpolationState* state)
{
    f32 result = state->end;
    s32 duration = state->duration;
    s32 elapsed = state->elapsed;

    if (elapsed < duration) {
        f32 start = state->start;
        result -= start;
        result = result * static_cast<f32>(elapsed) / static_cast<f32>(duration);
        result += start;
    }

    return result;
}
