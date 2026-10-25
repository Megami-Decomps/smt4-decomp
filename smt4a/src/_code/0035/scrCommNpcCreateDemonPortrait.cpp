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
u32 scrCommNpcCreateDemonPortrait(void)
{
    u32 demonId = scrGetArg(0);
    s32 x = scrGetArg(1);
    s32 y = scrGetArg(2);
    f32 alpha = scriptReadStackValueAsFloat(3);
    u32 style = scrGetArg(4);
    u32 handle = 0;
    if (FUN_0039af04() != 0) {
        handle = npc2dCreateDemonPortrait(demonId, style, x, y, alpha);
        eventTexSetJobParam(handle);
        eventInsertSortedTextureJob(handle);
    }
    scrSetResult(handle);
    return 1;
}
}
