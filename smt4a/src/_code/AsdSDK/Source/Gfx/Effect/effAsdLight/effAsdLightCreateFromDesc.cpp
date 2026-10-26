#include "AsdSDK/Source/Gfx/Effect/effAsdLight.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include <string.h>

static void quaternionSetIdentity(EffLightVec4 *quaternion)
{
    memset(quaternion, 0, sizeof(*quaternion));
    quaternion->w = 1.0f;
}

extern "C" {

extern const char DAT_005449b4[];

void sysMemClear(void *block, s32 size);
void *resourceResolveHeaderPointer(EffAsdLightDesc *desc);
void rt_memcpy(void *dst, const void *src, s32 size);
void sceneTraverserVisit(s32 handle, u32 arg);

extern s32 g_effAsdLightHandle;
extern u32 g_asdModelTransformBuilder;

/* Creates a light effect object from an effect description (kind and parameters) and notifies
 * the registered handler, if any. */
EffAsdLight *effAsdLightCreateFromDesc(EffAsdLightDesc *desc)
{
    EffAsdLight *light;

    asdDebugTrace(DAT_005449b4, 55);
    light = (EffAsdLight *)memAlloc(0x10000, 0x100, 0, 0x120, 0x10, 1);

    sysMemClear(light, 0x120);
    quaternionSetIdentity(&light->rotation0);
    quaternionSetIdentity(&light->rotation1);
    light->unk24 = -1;
    light->scale = 1.0f;
    if (desc != NULL) {
        light->kind = desc->kind;
        rt_memcpy(light->params, resourceResolveHeaderPointer(desc), 0xb4);
        if (g_effAsdLightHandle != 0) {
            sceneTraverserVisit(g_effAsdLightHandle, g_asdModelTransformBuilder);
        }
    }
    return light;
}

} /* extern "C" */
