/* NON_MATCHING: only the register of the -1 constant differs (retail mvn r0, ours mvn r1). */
#include "AsdSDK/Source/Gfx/Effect/effAsdLight.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include <string.h>

static __inline void quaternionSetIdentity(EffLightVec4 *quaternion)
{
    EffLightVec4 zero = {0, 0, 0, 0};
    *quaternion = zero;
    quaternion->w = 1.0f;
}

extern "C" {

extern const char DAT_005449b4[];

void sysMemClear(void *block, s32 size);
void __aeabi_memcpy4(void *dst, const void *src, s32 size);

/* Creates a light effect object as a copy of `src`'s parameters. */
EffAsdLight *effAsdLightCopy(EffAsdLight *src)
{
    EffAsdLight *light;

    asdDebugTrace(DAT_005449b4, 55);
    light = (EffAsdLight *)memAlloc(0x10000, 0x100, 0, 288, 0x10, 1);

    sysMemClear(light, 288);
    quaternionSetIdentity(&light->rotation0);
    quaternionSetIdentity(&light->rotation1);
    light->unk24 = -1;
    light->scale = 1.0f;
    __aeabi_memcpy4(light->params, src->params, 0xb4);
    return light;
}

} /* extern "C" */
