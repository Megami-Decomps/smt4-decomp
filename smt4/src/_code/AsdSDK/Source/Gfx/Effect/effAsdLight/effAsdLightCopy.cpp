/* NON_MATCHING: only the register of the -1 constant differs (retail mvn r0, ours mvn r1). */
#include "AsdSDK/Source/Gfx/Effect/effAsdLight.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"
#include <string.h>

static __inline void quaternionSetIdentity(EffLightVec4 *quaternion)
{
    EffLightVec4 zero = {0, 0, 0, 0};
    *quaternion = zero;
    quaternion->w = 1.0f;
}

extern "C" {

extern const char DAT_004101c0[];

void *memAlloc(int, int, int, int size, int align, int);
void __aeabi_memcpy4(void *dst, const void *src, s32 size);

/* Creates a light effect object as a copy of `src`'s parameters. */
EffAsdLight *effAsdLightCopy(EffAsdLight *src)
{
    asdDebugTrace(DAT_004101c0, 34);
    EffAsdLight *light = (EffAsdLight *)memAlloc(0x10000, 0x100, 0, 272, 0x10, 1);

    memClear(light, 272);
    quaternionSetIdentity(&light->rotation0);
    quaternionSetIdentity(&light->rotation1);
    light->unk24 = -1;
    light->scale = 1.0f;
    __aeabi_memcpy4(light->params, src->params, 0xb4);
    return light;
}

} /* extern "C" */
