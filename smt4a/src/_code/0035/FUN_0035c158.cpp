/* NON_MATCHING: Script argument values occupy different saved registers, changing the portrait call's move order. */
#include "common.h"

extern "C" {
u32 scrGetArg(u32 index);
f32 scriptReadStackValueAsFloat(s32 index);
s32 FUN_0039af04(void);
u32 npc2dCreateDemonPortrait(u32 demonId, u32 style, s32 x, s32 y, f32 alpha);
void eventTexSetJobParam(u32 handle);
void eventInsertSortedTextureJob(u32 handle);
void scrSetResult(u32 result);

/* Creates the script's demon portrait when its event context is available and returns its handle. */
u32 FUN_0035c158(void)
{
    u32 demonId = scrGetArg(0);
    s32 x = scrGetArg(1);
    s32 y = scrGetArg(2);
    f32 alpha = scriptReadStackValueAsFloat(3);
    u32 style = scrGetArg(4);
    s32 context = FUN_0039af04();
    u32 handle = 0;
    if (context != 0) {
        handle = npc2dCreateDemonPortrait(demonId, style, x, y, alpha);
        eventTexSetJobParam(handle);
        eventInsertSortedTextureJob(handle);
    }
    scrSetResult(handle);
    return 1;
}
}
