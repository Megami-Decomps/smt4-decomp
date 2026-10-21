/* NON_MATCHING: retail uses vmul.f32 s3, s0, s4 where the compiled block uses vmul.f32 s0, s0, s4. */
#include "common.h"

struct InterpolationState {
    f32 start;       // 0x00
    f32 end;         // 0x04
    s32 duration;    // 0x08
    s32 elapsed;     // 0x0C
};

extern "C" f32 FUN_0017fc38(const InterpolationState* state)
{
    f32 result = state->end;
    s32 duration = state->duration;
    s32 elapsed = state->elapsed;

    if (elapsed < duration) {
        f32 start = state->start;
        f32 difference = result - start;
        f32 scaled = difference * static_cast<f32>(elapsed);
        result = scaled / static_cast<f32>(duration) + start;
    }

    return result;
}
