#include "common.h"

extern "C" {

void gpuSubmitDefaultPacket(void);
void FUN_002b7dc4(u32 a, u32 b, u32 c, u32 d, f32 f0, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8);
void submitDefaultFloatParameters(void);

/* Resets the GPU command defaults, forwards the draw setup, then restores the default float parameters. */
void FUN_002aa18c(u32 a, u32 b, u32 c, u32 d, f32 f0, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8)
{
    gpuSubmitDefaultPacket();
    FUN_002b7dc4(a, b, c, d, f0, f1, f2, f3, f4, f5, f6, f7, f8);
    submitDefaultFloatParameters();
}

} /* extern "C" */
