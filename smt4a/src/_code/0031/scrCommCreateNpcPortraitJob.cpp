#include "common.h"

extern "C" {
u32 scrGetArg(u32 index);
void scrSetResult(u32 value);
s32 FUN_0039af04(void);
u32 npc2dCreateDemonPortrait(u32 id, u32 option, s32 x, s32 y, f32 alpha);
void eventTexSetJobParam(u32 job);
void eventInsertSortedTextureJob(u32 job);

u32 scrCommCreateNpcPortraitJob(void)
{
    u32 id = scrGetArg(0);
    s32 x = (s32)scrGetArg(1);
    u32 job = 0;
    if (FUN_0039af04()) {
        job = npc2dCreateDemonPortrait(id, 0, x, 0, 1.0f);
        eventTexSetJobParam(job);
        eventInsertSortedTextureJob(job);
    }
    scrSetResult(job);
    return 1;
}
}
