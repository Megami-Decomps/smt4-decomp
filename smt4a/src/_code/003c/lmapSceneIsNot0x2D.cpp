#include "shard/Shard003C.h"

extern "C" {

extern s32 lmapSceneGetUnk0(void);

u8 lmapSceneIsNot0x2D(void)
{
    if (lmapSceneGetUnk0() == 0x2D) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
