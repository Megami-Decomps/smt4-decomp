/* NON_MATCHING: the debug trace now matches; retail still stores 0 to every rotation word as plain integer stores and then w = 1.0f separately (armcc pairs them into vstmia here). */
#include "AsdSDK/Source/Gfx/Effect/effAsdLight.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_004101c0[];

void *memAlloc(int, int, int, int size, int align, int);
void memClear(void *block, s32 size);
void __aeabi_memcpy4(void *dst, const void *src, s32 size);

/* Creates a light effect object as a copy of `src`'s parameters. */
EffAsdLight *effAsdLightCopy(EffAsdLight *src)
{
    asdDebugTrace(DAT_004101c0, 34);
    EffAsdLight *light = (EffAsdLight *)memAlloc(0x10000, 0x100, 0, 272, 0x10, 1);

    memClear(light, 272);
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
    __aeabi_memcpy4(light->params, src->params, 0xb4);
    return light;
}

} /* extern "C" */
