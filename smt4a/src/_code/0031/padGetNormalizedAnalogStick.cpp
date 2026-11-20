/* NON_MATCHING: only the zero-return block and the branch into it differ. */
#include "input/PadAnalog.h"
#include "shard/GlobalBlocks.h"

extern "C" {
extern PadAnalogSample DAT_0063ffd0[2];
extern PadAnalogSample DAT_0063fff0;
f32 inputApplyDeadZone(f32 *value, f32 threshold);

// Read normalized analog axes, applying the configured dead zone when enabled.
u32 padGetNormalizedAnalogStick(f32 *outX, f32 *outY, u32 index)
{
    s16 minimum;
    s16 maximum;
    padAnalogGetExtrema(g_padInputState.calibration, minimum, maximum);
    f32 range = (f32)(maximum - minimum);
    if (index >= 2) {
        return 0;
    }
    if (index > g_padInputState.count) {
        return 0;
    }
    {
        PadAnalogSample *sample;
        bool locked = (g_padInputState.flags & 1) != 0;
        if (locked || (g_padInputState.flags & 2) != 0)
            sample = &DAT_0063fff0;
        else
            sample = &DAT_0063ffd0[index];
        if (sample) {
            f32 rawX = (f32)sample->x;
            f32 rawY = (f32)sample->y;
            f32 x = rawX / range;
            f32 y = rawY / range;
            if (g_padInputState.deadZone != 0.0f) {
                inputApplyDeadZone(&x, g_padInputState.deadZone);
                inputApplyDeadZone(&y, g_padInputState.deadZone);
                if (x == 0.0f && y == 0.0f)
                    return 0;
            }
            if (outX)
                *outX = x;
            if (outY)
                *outY = y;
            return 1;
        }
    }
    return 0;
}
}
