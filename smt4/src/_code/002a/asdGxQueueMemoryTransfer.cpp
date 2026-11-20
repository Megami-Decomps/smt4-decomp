/* NON_MATCHING: only the registers of the context and queue pointers are swapped (retail r4=context, r5=queue). */
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {

s32 nngxLockEnter(void);
s32 nngxLockLeave(void);
void FUN_002ba2b8(void);

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
    nngxLockEnter();
    queue->listCount++;
    if (g_asdGfxContext.activeBuffer == queue && g_asdGfxContext.submitEnabled != 0 &&
        g_asdGfxContext.submitPending == 0) {
        g_asdGfxContext.submitPending = 1;
        FUN_002ba2b8();
    }
    nngxLockLeave();
}

} /* extern "C" */
