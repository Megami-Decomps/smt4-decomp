#include "shard/W6_W6Match7_QuadVectors.h"

extern "C" {
extern QuadVectorState g_quadColorState;

/* Restores the white quad color and the default alpha. */
void gxResetUniformQuadColorsAndScale(void)
{
    g_quadColorState.defaultW = 1.0f;
    QuadVector color;
    gxSetUniformQuadColors(&color.xyz);
}
} /* extern "C" */
