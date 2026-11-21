#include "shard/W6_W6Match7_QuadVectors.h"

extern "C" {
extern QuadVectorState g_quadColorState;

/* Sets all four quad colors to the supplied RGB value with the default alpha. */
void gxSetUniformQuadColors(const QuadVector3 *color)
{
    QuadVector colors[4];
    f32 alpha = g_quadColorState.defaultW;
    colors[0].xyz = *color;
    colors[0].w = alpha;
    colors[1].xyz = *color;
    colors[1].w = alpha;
    colors[2].xyz = *color;
    colors[2].w = alpha;
    colors[3].xyz = *color;
    colors[3].w = alpha;
    quadSetOrderedVectors(colors[0], colors[1], colors[2], colors[3], 0, 0);
}
}
