#include "gfx/FragmentLightColors.h"

extern "C" {

u32 nw_ut_FloatColor_ToPicaU32(ModelColor *color);

/* Sets the light's second specular colour and caches its packed PICA form. */
void fragmentLightSetSpecular1(FragmentLightRef *light, ModelColor color)
{
    light->data->specular1 = color;
    light->data->specular1Pica = nw_ut_FloatColor_ToPicaU32(&light->data->specular1);
}

} /* extern "C" */
