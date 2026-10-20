#include "shard/Shard0045.h"

extern "C" {

typedef struct LightObj {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ VIface *allocator;
    /* 0x008 */ u8 unk008[0x140];
    /* 0x148 */ u32 original;
} LightObj;

void nw_gfx_Light_DestroyOriginalValue(LightObj *light)
{
    light->allocator->vtbl->slot3(light->allocator, light->original);
    light->original = 0;
}

} /* extern "C" */
