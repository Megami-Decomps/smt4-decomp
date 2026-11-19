#include "common.h"
#include "gfx/ColoredQuad.h"

extern "C" {

void gpuSubmitDefaultPacket(void);
void FUN_002b7dc4(u32 a, u32 b, u32 c, u32 d, f32 f0, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5, f32 f6, f32 f7, f32 f8);
void submitDefaultFloatParameters(void);

/* Draw setup with the extra float parameters zeroed; restores the default float parameters afterwards. */
void gxSubmitDrawZeroExtraParams(f32 x, f32 y, f32 width, f32 height, u32 color0, u32 color1, u32 color2,
                                 f32 depth, u32 color3)
{
    gpuSubmitDefaultPacket();
    FUN_002b7dc4(color0, color1, color2, color3, x, y, width, height, 0.0f, 0.0f, 0.0f, 0.0f, depth);
    submitDefaultFloatParameters();
}

} /* extern "C" */
