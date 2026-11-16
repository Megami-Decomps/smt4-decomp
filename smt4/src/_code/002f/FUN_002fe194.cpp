/* Runs the fallback handlers when their checks fail; returns whether FUN_00246708 reported success. */
#include "common.h"

extern "C" {

extern s32 FUN_00246708(void);
extern s32 scrGetCommandFrame(void);
extern void textureCachePollReady(void);
extern void effectTextureRequestsPump(s32 arg);

u8 FUN_002fe194(void)
{
    s32 ok;

    if (scrGetCommandFrame() == 0) {
        textureCachePollReady();
    }
    ok = FUN_00246708();
    if (ok == 0) {
        effectTextureRequestsPump(ok);
    }
    return ok != 0;
}

}
