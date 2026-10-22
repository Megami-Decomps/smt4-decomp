/* NON_MATCHING: saved GPR allocation and paired stack argument stores differ from retail. */
#include "common.h"

extern "C" f32 jobGetScalarValue(void);
extern "C" void efctSetSpeed(f32 speed);
extern "C" void FUN_0017ffa8(u32 first, u32 table, s32 index, u32 second, u32 third, u32 fourth);

/* Dispatch an effect selector while temporarily reducing the global effect speed. */
extern "C" void effectDispatchSelector(u32 kind, u32 first, u32 second, u32 third, f32 speed)
{
    if (kind == 0)
        return;
    s32 index = 0;
    switch (kind) {
    case 1: index = 5; break;
    case 4: index = 8; break;
    case 5: index = 2; break;
    case 6: index = 1; break;
    case 8: index = 3; break;
    case 9: index = 4; break;
    case 10: index = 19; break;
    case 2: index = 6; break;
    case 3: index = 34; break;
    case 11: index = 39; break;
    case 12: index = 38; break;
    case 13: index = 37; break;
    }
    f32 previousSpeed = jobGetScalarValue();
    if (speed < 1.0f)
        efctSetSpeed(speed);
    FUN_0017ffa8(2, 11, index, first, second, third);
    efctSetSpeed(previousSpeed);
}
