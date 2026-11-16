#include "common.h"

extern "C" f32 FUN_002b70cc(f32 angle);

/* Evaluate linear or quarter-wave interpolation at an integer frame fraction. */
extern "C" f32 FUN_00227280(s32 mode, s32 duration, s32 frame)
{
    f32 result = 0.0f;
    if (duration != 0) {
        if (mode == 0) {
            return (f32)frame / (f32)duration;
        }
        if (mode == 1) {
            f32 angle = (f32)frame * 1.57079632679f / (f32)duration;
            return FUN_002b70cc(angle * 40.7436654315f);
        }
        if (mode == 2) {
            f32 phase = (f32)frame * 1.57079632679f / (f32)duration + 4.71238898038f;
            result = FUN_002b70cc(phase * 40.7436654315f) + 1.0f;
        }
    }
    return result;
}
