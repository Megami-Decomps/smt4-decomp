/* NON_MATCHING: only the zero-return block and the branch into it differ. */
#include "input/PadAnalog.h"
#include "shard/Sys4650a0.h"

extern "C" {
extern PadAnalogSample g_padInputs[2];
extern PadAnalogSample DAT_004e3c48;
f32 inputApplyDeadZone(f32 *value, f32 threshold);

// Read normalized analog coordinates and apply the configured dead zone when enabled.
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
        PadAnalogSample *sample = (g_padInputState.flags & 1) != 0 ? &DAT_004e3c48 : &g_padInputs[index];
        if (sample != NULL) {
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
            if (outX != NULL)
                *outX = x;
            if (outY != NULL)
                *outY = y;
            return 1;
        }
    }
    return 0;
}
}
