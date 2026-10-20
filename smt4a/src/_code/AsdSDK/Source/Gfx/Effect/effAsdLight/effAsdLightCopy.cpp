/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 41 vs built 36 rows, 34 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effAsdLight.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
void sysMemClear(void *block, s32 size);
void rt_memcpy_w(void *dst, const void *src, s32 size);

/* Creates a light effect object as a copy of `src`'s parameters. */
EffAsdLight *effAsdLightCopy(EffAsdLight *src)
{
    EffAsdLight *light = (EffAsdLight *)memAlloc(0x10000, 0x100, 0, 288, 0x10, 1);

    sysMemClear(light, 288);
    light->rotation0.x = 0;
    light->rotation0.y = 0;
    light->rotation0.z = 0;
    light->rotation0.w = 1.0f;
    light->rotation1.x = 0;
    light->rotation1.y = 0;
    light->rotation1.z = 0;
    light->rotation1.w = 1.0f;
    light->unk24 = -1;
    light->scale = 1.0f;
    rt_memcpy_w(light->params, src->params, 0xb4);
    return light;
}

} /* extern "C" */
