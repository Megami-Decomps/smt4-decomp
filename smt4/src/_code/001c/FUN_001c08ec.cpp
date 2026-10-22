#include "common.h"

extern "C" {
void gpuSubmitDefaultPacket(void);
void FUN_002b7dc4(u32 first, u32 second, u32 third, u32 fourth,
                  f32 x, f32 y, f32 z, f32 w,
                  f32 zero4, f32 zero5, f32 zero6, f32 zero7, f32 value);
void submitDefaultFloatParameters(void);

/* Submit the default packet and apply the supplied five floating-point values. */
void FUN_001c08ec(f32 x, f32 y, f32 z, f32 w, f32 value)
{
    gpuSubmitDefaultPacket();
    FUN_002b7dc4(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
                  x, y, z, w, 0.0f, 0.0f, 0.0f, 0.0f, value);
    submitDefaultFloatParameters();
}
}
