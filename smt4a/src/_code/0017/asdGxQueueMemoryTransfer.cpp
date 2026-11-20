/* NON_MATCHING: only the registers of the context and queue pointers are swapped (retail r4=context, r5=queue). */
#include "shard/W6_W6Match5_DisplayMode.h"

extern "C" {

s32 globalCriticalSectionLeaveForward(void);
void FUN_001963e0(void);

// Queue a memory transfer on the write queue, then start submission if the queue is the active one and idle.
void asdGxQueueMemoryTransfer(const void *source, void *destination, u32 bytes)
{
    AsdCmdBuffer *queue = g_asdGfxContext.cmdBuffer;
    /* The slot holds a transfer record rather than a command list. */
    AsdCmdTransferRecord *entry = (AsdCmdTransferRecord *)&queue->entries[queue->listCount];
    entry->kind = 0;
    entry->source = source;
    entry->destination = destination;
    entry->bytes = bytes;
    globalCriticalSectionEnterForward();
    queue->listCount++;
    if (g_asdGfxContext.activeBuffer == queue && g_asdGfxContext.submitEnabled != 0 &&
        g_asdGfxContext.submitPending == 0) {
        g_asdGfxContext.submitPending = 1;
        FUN_001963e0();
    }
    globalCriticalSectionLeaveForward();
}

} /* extern "C" */
