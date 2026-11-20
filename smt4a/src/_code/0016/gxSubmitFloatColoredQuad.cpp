#include "common.h"
#include "code/Code002b.h"

extern "C" {
extern const f32 *g_defaultDrawColor; /* white (1, 1, 1, 1): the colour a corner without one gets */
void gpuSubmitDefaultPacket(void);
void gpuSubmitFloatColoredQuad(const f32 *topLeft, const f32 *bottomLeft, const f32 *topRight, const f32 *bottomRight,
    f32 x, f32 y, f32 width, f32 height, f32 u, f32 v, f32 uWidth, f32 vHeight, f32 depth);
void effectSubmitDefaultParameters(void);

/* Draws a textured quad with one RGBA colour per corner (NULL: the default colour), between the
 * default packet and the default float parameters.
 * The bottom-right colour is declared after the texture rectangle: ABI-equal (r3), and it is the
 * order retail copies the arguments in. */
void gxSubmitFloatColoredQuad(const f32 *topLeft, const f32 *bottomLeft, const f32 *topRight, f32 x, f32 y,
    f32 width, f32 height, f32 u, f32 v, f32 uWidth, f32 vHeight, const f32 *bottomRight, f32 depth)
{
    if (topLeft == NULL) topLeft = g_defaultDrawColor;
    if (bottomLeft == NULL) bottomLeft = g_defaultDrawColor;
    if (topRight == NULL) topRight = g_defaultDrawColor;
    if (bottomRight == NULL) bottomRight = g_defaultDrawColor;
    gpuSubmitDefaultPacket();
    gpuSubmitFloatColoredQuad(topLeft, bottomLeft, topRight, bottomRight, x, y, width, height, u, v, uWidth, vHeight, depth);
    effectSubmitDefaultParameters();
}

} /* extern "C" */
