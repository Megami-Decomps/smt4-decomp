#include "common.h"
#include "gfx/ColoredQuad.h"

extern "C" {

void gpuSubmitDefaultPacket(void);
void gpuSubmitColoredTexturedQuad(u32 topLeft, u32 bottomLeft, u32 topRight, u32 bottomRight, f32 x, f32 y, f32 width,
    f32 height, f32 u, f32 v, f32 uWidth, f32 vHeight, f32 depth);
void submitDefaultFloatParameters(void);

/* Draws a quad with one colour per corner and no texture rectangle, between the default packet
 * and the default float parameters. */
void gxSubmitDrawZeroExtraParams(f32 x, f32 y, f32 width, f32 height, u32 topLeft, u32 bottomLeft,
                                 u32 topRight, f32 depth, u32 bottomRight)
{
    gpuSubmitDefaultPacket();
    gpuSubmitColoredTexturedQuad(topLeft, bottomLeft, topRight, bottomRight, x, y, width, height, 0.0f, 0.0f, 0.0f, 0.0f, depth);
    submitDefaultFloatParameters();
}

} /* extern "C" */
