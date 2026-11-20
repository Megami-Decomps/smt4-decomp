#include "common.h"
namespace { struct Effects { u8 padding[0x84]; float scale; }; }
extern "C" {
extern Effects g_quadColorState;
void gxSetUniformQuadColors(const float *values);
void gxResetUniformQuadColorsAndScale(void)
{
    float values[4];
    g_quadColorState.scale = 1.0f;
    values[0] = 1.0f;
    values[1] = 1.0f;
    values[2] = 1.0f;
    values[3] = 1.0f;
    gxSetUniformQuadColors(values);
}
}
