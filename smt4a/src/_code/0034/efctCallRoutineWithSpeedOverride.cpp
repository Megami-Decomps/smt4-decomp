#include "common.h"

extern "C" {
f32 jobGetScalarValue();
void efctSetSpeed(f32 speed);
void texTableRecordCallWithParams(u32 first, u32 table, s32 index, u32 second, u32 third, u32 fourth);

void efctCallRoutineWithSpeedOverride(u32 first, u32 second, u32 third, f32 speed)
{
    f32 previousSpeed = jobGetScalarValue();
    if (speed < 1.0f) {
        efctSetSpeed(speed);
    }
    texTableRecordCallWithParams(2, 11, 9, first, second, third);
    efctSetSpeed(previousSpeed);
}
}
