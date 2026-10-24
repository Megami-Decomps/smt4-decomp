#include "common.h"

extern "C" {

void FUN_0019ea00(void);
void FUN_0019e5e0(u32 a, u32 b, u32 c, u32 d, f32 f0, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8);
void effectSubmitDefaultParameters(void);

/* Resets the GPU command defaults, forwards the draw setup, then restores the default float parameters. */
void FUN_0019af70(u32 a, u32 b, u32 c, u32 d, f32 f0, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8)
{
    FUN_0019ea00();
    FUN_0019e5e0(a, b, c, d, f0, f1, f2, f3, f4, f5, f6, f7, f8);
    effectSubmitDefaultParameters();
}

} /* extern "C" */
