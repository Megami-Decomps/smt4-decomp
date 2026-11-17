/* NON_MATCHING: same stores and calls; armcc copies the third stacked argument through a VFP register (vldr/vstr) where retail loads all three with ldm and stores with stm */
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {
void globalCriticalSectionEnterForward(void);
void globalCriticalSectionLeaveForward(void);
void FUN_001963e0(void);

/* Queues a blit record (coordinates in 1/16 pixels) and wakes the renderer when this list is the current one. */
void FUN_0017ced4(u32 source, s32 sourceX, s32 sourceY, u32 target, s32 targetX, s32 targetY, u32 flags)
{
    AsdCmdBuffer *list = g_asdGfxContext.cmdBuffer;
    /* The slot holds a blit record. */
    AsdCmdBlitRecord *command = (AsdCmdBlitRecord *)&list->entries[list->listCount];
    command->kind = 4;
    command->source = source;
    command->target = target;
    command->flags = flags;
    command->sourceY = sourceY >> 4;
    command->sourceX = sourceX >> 4;
    command->targetY = targetY >> 4;
    command->targetX = targetX >> 4;
    globalCriticalSectionEnterForward();
    list->listCount++;
    if (g_asdGfxContext.activeBuffer == list && g_asdGfxContext.submitEnabled != 0 && g_asdGfxContext.submitPending == 0) {
        g_asdGfxContext.submitPending = 1;
        FUN_001963e0();
    }
    globalCriticalSectionLeaveForward();
}
}
