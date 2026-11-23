#include "AsdSDK/Source/Gfx/Effect/effAsdLight.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemCopy.h"
#include "gfx/LightRegistry.h"
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

extern void *g_effAsdLightHandle[2];
extern void *g_asdModelTransformBuilder[2];

/* effAsdLightCreateFromDesc's body: the copy creates its light through it (without a description), and retail
 * inlines it here as a function of the same file. */
static __inline EffAsdLight *lightCreateFromDesc(EffAsdLightDesc *desc)
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
        __aeabi_memcpy(light->params, resourceResolveHeaderPointer(desc), 0xb4);
        if (g_effAsdLightHandle[0] != NULL) {
            sceneTraverserVisit(g_effAsdLightHandle[0], g_asdModelTransformBuilder[0]);
        }
    }
    return light;
}

/* Creates a light effect object as a copy of `src`'s parameters. */
EffAsdLight *effAsdLightCopy(EffAsdLight *src)
{
    EffAsdLight *light = lightCreateFromDesc(NULL);
    memcpy(light->params, src->params, sizeof(light->params));
    return light;
}

} /* extern "C" */
