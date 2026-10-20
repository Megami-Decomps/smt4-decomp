/* NON_MATCHING: retail stores the zero components as integer words (str of 0; w is written 0 then 1.0f); the build stores them as float zeros (vstr/vstm) */
#include "AsdSDK/Source/Gfx/Effect/effAsdLight.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_005449b4[];

void *memAlloc(int, int, int, int size, int align, int);
void sysMemClear(void *block, s32 size);
void rt_memcpy_w(void *dst, const void *src, s32 size);

/* Creates a light effect object as a copy of `src`'s parameters. */
EffAsdLight *effAsdLightCopy(EffAsdLight *src)
{
    EffAsdLight *light;

    asdDebugTrace(DAT_005449b4, 55);
    light = (EffAsdLight *)memAlloc(0x10000, 0x100, 0, 288, 0x10, 1);

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
