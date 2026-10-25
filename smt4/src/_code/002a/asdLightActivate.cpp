/* Marks light slot `index` active and not dirty. */
#include "shard/S1Light.h"
#include "shard/asdLightActivate.h"

extern "C" {
extern LightCount g_asdLightCount[];

void asdLightActivate(s32 index)
{
    g_asdLightCount[index].render.active = 1;
    g_asdLightCount[index].render.dirty = 0;
}
}
