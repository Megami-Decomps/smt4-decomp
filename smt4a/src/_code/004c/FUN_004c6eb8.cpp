#include "common.h"

/* Applies the floating-point multiplier while it is below one. */
extern "C" s32 FUN_004c6eb8(s32 value, f32 multiplier)
{
    if (multiplier < 1.0f)
        value = (s32)((f32)value * multiplier);
    return value;
}
