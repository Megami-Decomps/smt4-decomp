/* Runs the fallback handlers when their checks fail; returns whether textureCacheGetDirection reported success. */
#include "common.h"

extern "C" {

extern s32 textureCacheGetDirection(void);
extern s32 scrGetCommandFrame(void);
extern void textureCachePollReady(void);
extern void FUN_0036f0a0(s32 arg);

u8 FUN_0038a3d8(void)
{
    s32 ok;

    if (scrGetCommandFrame() == 0) {
        textureCachePollReady();
    }
    ok = textureCacheGetDirection();
    if (ok == 0) {
        FUN_0036f0a0(ok);
    }
    return ok != 0;
}

}
