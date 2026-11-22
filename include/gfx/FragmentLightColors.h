#ifndef GFX_FRAGMENTLIGHTCOLORS_H
#define GFX_FRAGMENTLIGHTCOLORS_H

#include "common.h"
#include "shard/W5_W5Match2_ModelColor.h"
#include <stddef.h>

/* A fragment light's resource data (nw::gfx::res::ResFragmentLightData): the float colours and their
 * packed PICA forms, and the direction. */
struct FragmentLightData {
    /* 0x000 */ u8 unk000[0xbc];
    /* 0x0bc */ ModelColor ambient;
    /* 0x0cc */ ModelColor diffuse;
    /* 0x0dc */ ModelColor specular0;
    /* 0x0ec */ ModelColor specular1;
    /* 0x0fc */ u32 ambientPica;
    /* 0x100 */ u32 diffusePica;
    /* 0x104 */ u32 specular0Pica;
    /* 0x108 */ u32 specular1Pica;
    /* 0x10c */ f32 direction[3];
};
typedef char FragmentLightDataCheck[offsetof(FragmentLightData, diffusePica) == 0x100 &&
                                    offsetof(FragmentLightData, direction) == 0x10c ? 1 : -1];

/* The one-pointer resource accessor the colour setters take (nw::gfx::res::ResFragmentLight). */
struct FragmentLightRef {
    /* 0x00 */ FragmentLightData *data;
};

extern "C" {

/* Sets the light's diffuse colour and its packed PICA form. */
void fragmentLightSetDiffuse(FragmentLightRef *light, ModelColor color);
/* Sets the light's first specular colour and its packed PICA form. */
void fragmentLightSetSpecular0(FragmentLightRef *light, ModelColor color);
/* Sets the light's second specular colour and its packed PICA form. */
void fragmentLightSetSpecular1(FragmentLightRef *light, ModelColor color);
/* Returns the resource data of a model slot (a light's FragmentLightData for a light slot). */
u32 asdModelSlotGetResource(u32 slot, u32 bank);

} /* extern "C" */

#endif
