#include "common.h"

extern "C" {
u32 scrGetArg(u32 index);
void scrSetResult(u32 result);
s32 eventTexHasEmptySlot(void);
u32 npc2dCreatePortraitJob(u32 id, s32 kind, s32 x, f32 value, s32 layer);
void eventTexSetJobParam(u32 job);
void eventInsertSortedTextureJob(u32 job);

u32 scrCommCreateNpc2dJob(void)
{
    u32 id = scrGetArg(0);
    s32 x = (s32)scrGetArg(1);
    u32 job = 0;
    if (eventTexHasEmptySlot()) {
        job = npc2dCreatePortraitJob(id, 0, x, 1.0f, 0);
        eventTexSetJobParam(job);
        eventInsertSortedTextureJob(job);
    }
    scrSetResult(job);
    return 1;
}
}
