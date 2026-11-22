#include "gfx/FragmentLightColors.h"

extern "C" {

u32 nw_ut_FloatColor_ToPicaU32(ModelColor *color);

/* Sets the light's diffuse colour and caches its packed PICA form. */
void fragmentLightSetDiffuse(FragmentLightRef *light, ModelColor color)
{
    light->data->diffuse = color;
    light->data->diffusePica = nw_ut_FloatColor_ToPicaU32(&light->data->diffuse);
}

} /* extern "C" */
