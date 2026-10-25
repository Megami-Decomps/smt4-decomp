/* NON_MATCHING: calibration sign-extension, coordinate VFP scheduling and return-block placement differ. */
#include "input/PadAnalog.h"
#include "shard/Sys4650a0.h"

extern "C" {
extern PadAnalogSample DAT_004e3c28[2];
extern PadAnalogSample DAT_004e3c48;
f32 inputApplyDeadZone(f32 *value, f32 threshold);

// Read normalized analog coordinates and apply the configured dead zone when enabled.
u32 FUN_0027f958(f32 *outX, f32 *outY, u32 index)
{
    // Dead-zone state lies beyond the established shared globals prefix.
    struct AnalogGlobalsView {
        PadAnalogCalibration *calibration;
        u32 count;
        u32 flags;
        u32 unk0C;
        u32 unk10;
        f32 deadZone;
    };
    AnalogGlobalsView *state = reinterpret_cast<AnalogGlobalsView *>(&DAT_004650a0);
    PadAnalogCalibration *calibration = state->calibration;
    s16 minimum;
    s16 maximum;
    if (calibration->mode == 0) {
        minimum = calibration->minimum[0];
        maximum = calibration->maximum[0];
    } else if (calibration->mode == 1) {
        minimum = calibration->minimum[1];
        maximum = calibration->maximum[1];
    } else {
        minimum = calibration->minimum[2];
        maximum = calibration->maximum[2];
    }
    f32 range = (f32)(maximum - minimum);
    if (index < 2 && index <= state->count) {
        PadAnalogSample *sample = (state->flags & 1) != 0 ? &DAT_004e3c48 : &DAT_004e3c28[index];
        if (sample != NULL) {
            f32 x = (f32)sample->x / range;
            f32 y = (f32)sample->y / range;
            if (state->deadZone != 0.0f) {
                inputApplyDeadZone(&x, state->deadZone);
                inputApplyDeadZone(&y, state->deadZone);
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
