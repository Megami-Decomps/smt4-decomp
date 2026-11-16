#include "common.h"

extern "C" {
u32 scrGetArg(u32 index);
u32 eventTexHasEmptySlot(void);
u32 npcCreateTextureEffectJob(u32 id, s32 first, s32 second);
void eventTexSetJobParam(u32 handle);
void eventInsertSortedTextureJob(u32 handle);
void scrSetResult(u32 result);

// Create an event texture when a slot is free and return its handle to the script.
u32 eventTexCreateScriptCommand(void)
{
    u32 id = scrGetArg(0);
    u32 handle = 0;
    if (eventTexHasEmptySlot() != 0) {
        handle = npcCreateTextureEffectJob(id, 0, 0);
        eventTexSetJobParam(handle);
        eventInsertSortedTextureJob(handle);
    }
    scrSetResult(handle);
    return 1;
}
}
