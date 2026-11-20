/* Runs the fallback handlers when their checks fail; returns whether textureCacheGetDirection reported success. */
#include "common.h"

extern "C" {

extern s32 textureCacheGetDirection(void);
extern s32 scrGetCommandFrame(void);
extern void textureCachePollReady(void);
extern void effectTextureRequestsPump(s32 arg);

u8 FUN_002fe194(void)
{
    s32 ok;

    if (scrGetCommandFrame() == 0) {
        textureCachePollReady();
    }
    ok = textureCacheGetDirection();
    if (ok == 0) {
        effectTextureRequestsPump(ok);
    }
    return ok != 0;
}

}
