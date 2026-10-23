/* NON_MATCHING: calibration sign extensions, combined flag test, coordinate VFP scheduling and return-block placement differ. */
#include "input/PadAnalog.h"
#include "shard/GlobalBlocks.h"

extern "C" {
extern PadAnalogSample DAT_0063ffd0[2];
extern PadAnalogSample DAT_0063fff0;
void FUN_00226c70(f32 *value, f32 deadZone);

// Read normalized analog axes, applying the configured dead zone when enabled.
u32 FUN_00317af8(f32 *outX, f32 *outY, u32 index)
{
    // The dead-zone value lies beyond the recovered shared global prefix.
    struct AnalogGlobalsView {
        PadAnalogCalibration *calibration;
        u32 count;
        u32 flags;
        u32 unk0C;
        u32 unk10;
        f32 deadZone;
    };
    typedef char AnalogGlobalsViewOffsetCheck[
        offsetof(AnalogGlobalsView, deadZone) == 0x14 ? 1 : -1];
    AnalogGlobalsView *state = reinterpret_cast<AnalogGlobalsView *>(&DAT_005b4000);
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
        PadAnalogSample *sample;
        if ((state->flags & 1) || (state->flags & 2))
            sample = &DAT_0063fff0;
        else
            sample = &DAT_0063ffd0[index];
        if (sample) {
            f32 x = (f32)sample->x / range;
            f32 y = (f32)sample->y / range;
            if (state->deadZone != 0.0f) {
                FUN_00226c70(&x, state->deadZone);
                FUN_00226c70(&y, state->deadZone);
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
