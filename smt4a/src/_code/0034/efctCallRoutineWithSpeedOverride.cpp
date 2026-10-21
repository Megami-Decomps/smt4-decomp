#include "common.h"

extern "C" {
f32 jobGetScalarValue();
void efctSetSpeed(f32 speed);
void FUN_0017ffa8(u32 first, u32 table, s32 index, u32 second, u32 third, u32 fourth);

void efctCallRoutineWithSpeedOverride(u32 first, u32 second, u32 third, f32 speed)
{
    f32 previousSpeed = jobGetScalarValue();
    if (speed < 1.0f) {
        efctSetSpeed(speed);
    }
    FUN_0017ffa8(2, 11, 9, first, second, third);
    efctSetSpeed(previousSpeed);
}
}
