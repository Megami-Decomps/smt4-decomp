/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 54 vs built 49 rows, 36 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effAsdLight.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
void sysMemClear(void *block, s32 size);
void *FUN_002b41c4(EffAsdLightDesc *desc);
void rt_memcpy(void *dst, const void *src, s32 size);
void FUN_0018cfe4(s32 handle, u32 arg);

extern s32 g_effAsdLightHandle;
extern u32 DAT_005b3c88;

/* Creates a light effect object from an effect description (kind and parameters) and notifies
 * the registered handler, if any. */
EffAsdLight *effAsdLightCreateFromDesc(EffAsdLightDesc *desc)
{
    EffAsdLight *light = (EffAsdLight *)memAlloc(0x10000, 0x100, 0, 0x120, 0x10, 1);

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
            FUN_0018cfe4(g_effAsdLightHandle, DAT_005b3c88);
        }
    }
    return light;
}

} /* extern "C" */
