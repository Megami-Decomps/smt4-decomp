/* NON_MATCHING: register allocation: retail computes the entry address in a separate register (r2) and keeps the arguments in r7/r8 */
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {

extern s32 g_commandBufferCursor;

void asdGxCommandBufferTerminateAndSubmit(void);
void globalCriticalSectionEnterForward(void);
void globalCriticalSectionLeaveForward(void);
void FUN_001963e0(void);

/* Appends a record to the command pool's entry array (after flushing when the pool and the buffer disagree) and kicks the submission once. */
void FUN_0017cdcc(const void *commands, u32 byteCount)
{
    AsdCmdBuffer *pool = g_asdGfxContext.cmdBuffer;
    AsdCmdRecord *entry;

    pool->writeOffset = g_commandBufferCursor - (s32)pool->start;
    if (pool->committedOffset != pool->writeOffset) {
        asdGxCommandBufferTerminateAndSubmit();
    }
    if (pool->committedOffset != pool->writeOffset) {
        return;
    }
    entry = &pool->entries[pool->listCount];
    entry->kind = 1;
    entry->commands = commands;
    entry->byteCount = byteCount;
    entry->flags |= 6;
    globalCriticalSectionEnterForward();
    pool->listCount++;
    if (g_asdGfxContext.activeBuffer == pool && g_asdGfxContext.submitEnabled != 0
        && g_asdGfxContext.submitPending == 0) {
        g_asdGfxContext.submitPending = 1;
        FUN_001963e0();
    }
    globalCriticalSectionLeaveForward();
}

} /* extern "C" */
