/* NON_MATCHING: retail stores the zero components as integer words (str of 0; w is written 0 then 1.0f); the build stores them as float zeros (vstr/vstm) */
#include "AsdSDK/Source/Gfx/Effect/effAsdLight.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_005449b4[];

void *memAlloc(int, int, int, int size, int align, int);
void sysMemClear(void *block, s32 size);
void *FUN_002b41c4(EffAsdLightDesc *desc);
void rt_memcpy(void *dst, const void *src, s32 size);
void sceneTraverserVisit(s32 handle, u32 arg);

extern s32 g_effAsdLightHandle;
extern u32 DAT_005b3c88;

/* Creates a light effect object from an effect description (kind and parameters) and notifies
 * the registered handler, if any. */
EffAsdLight *effAsdLightCreateFromDesc(EffAsdLightDesc *desc)
{
    EffAsdLight *light;

    asdDebugTrace(DAT_005449b4, 55);
    light = (EffAsdLight *)memAlloc(0x10000, 0x100, 0, 0x120, 0x10, 1);

    sysMemClear(light, 0x120);
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
    if (desc != NULL) {
        light->kind = desc->kind;
        rt_memcpy(light->params, FUN_002b41c4(desc), 0xb4);
        if (g_effAsdLightHandle != 0) {
            sceneTraverserVisit(g_effAsdLightHandle, DAT_005b3c88);
        }
    }
    return light;
}

} /* extern "C" */
