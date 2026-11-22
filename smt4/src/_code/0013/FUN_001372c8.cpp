/* NON_MATCHING: command fields recovered; retail copies all three payload words with STM, while armcc copies the final word through VFP and allocates different registers. */
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {
void nngxLockEnter(void);
void nngxLockLeave(void);
void gfxReplayRecordedCommands(void);

// Queue a rectangle transfer, converting fixed-point coordinates to pixels.
void FUN_001372c8(u32 source, s32 sourceX, s32 sourceY, u32 target,
                  s32 targetX, s32 targetY, u32 flags)
{
    AsdCmdBuffer *pool = g_asdGfxContext.cmdBuffer;
    /* The slot holds a blit record. */
    AsdCmdBlitRecord *command = (AsdCmdBlitRecord *)&pool->entries[pool->listCount];
    command->kind = 4;
    command->source = source;
    command->target = target;
    command->flags = flags;
    command->sourceY = sourceY >> 4;
    command->sourceX = sourceX >> 4;
    command->targetY = targetY >> 4;
    command->targetX = targetX >> 4;
    nngxLockEnter();
    ++pool->listCount;
    if (g_asdGfxContext.activeBuffer == pool && g_asdGfxContext.submitEnabled &&
        !g_asdGfxContext.submitPending) {
        g_asdGfxContext.submitPending = 1;
        gfxReplayRecordedCommands();
    }
    nngxLockLeave();
}
}
