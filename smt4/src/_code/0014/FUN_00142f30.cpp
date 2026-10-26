/* NON_MATCHING: the 7th argument (4th word on the stack; the 6th is unused) is passed through VFP (vldr/vstr) in the build but through r7 (ldr, stm sp, {r5, r7}) in retail, which shifts the allocation of index, loop id and the context pointer; the hash chain walk and the rest match. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
extern AsdGfxContext g_asdGfxContext;
extern u8 *g_commandBufferCursor;

void FUN_0014d8c8(AsdCmdBuffer *buffer, u32 first, AsdCmdRecord *entries, u32 second, s32 index, u32 third);

/* Finds the command buffer named `handle`, records how much of it has been written when it is the active one,
 * then passes on the command record entries[index]; returns the address of that record's copy target. */
void *FUN_00142f30(u32 handle, u32 first, AsdCmdRecord *entries, u32 second, s32 index, u32 unused, u32 third)
{
    AsdGfxContext *asdGfxContextPtr = &g_asdGfxContext;
    // The linked-list pointer follows the shared buffer prefix; do not grow that prefix.
    struct BufferNode { AsdCmdBuffer buffer; BufferNode *next; };
    void *copyTarget = &entries[index].unk10;
    BufferNode *node = reinterpret_cast<BufferNode *>(asdGfxContextPtr->bufferRegistry.buckets[handle & 31]);

    if (node != NULL) {
        u32 id;
        do {
            id = node->buffer.unk00;
            if (id != handle) {
                node = node->next;
            }
        } while (id != handle && node != NULL);
    }
    if (asdGfxContextPtr->cmdBuffer == &node->buffer) {
        node->buffer.writeOffset = g_commandBufferCursor - node->buffer.start;
    }
    FUN_0014d8c8(&node->buffer, first, entries, second, index, third);
    return copyTarget;
}

} /* extern "C" */
