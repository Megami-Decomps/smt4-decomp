/* NON_MATCHING: the unlink block is now out of line as in retail (head unlink written as the `previous == NULL` arm) and the command-buffer stores are in retail's order; armcc turns the next-handle update into a min with an unconditional store (retail predicates the store) and swaps the registers of the handle array and the graphics context (r8/r9). */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "gfx/HandleRegistry.h"

extern "C" {
extern AsdGfxContext g_asdGfxContext;
extern GfxHandleAllocator g_gfxAllocateCallback;
extern u8 *g_commandBufferCursor;
extern u8 *g_commandBufferEnd;

// Delete named command buffers from the sorted hash buckets, releasing bound buffers as needed.
void FUN_001612f4(s32 count, const u32 *handles)
{
    // The linked-list pointer follows the shared buffer prefix; do not grow that prefix.
    struct BufferNode { AsdCmdBuffer buffer; AsdCmdBuffer *next; };
    for (s32 index = 0; index < count; ++index) {
        u32 handle = handles[index];
        if (handle != 0) {
            BufferNode *previous = NULL;
            BufferNode *node = reinterpret_cast<BufferNode *>(g_asdGfxContext.bufferRegistry.buckets[handle & 31]);
            while (node != NULL) {
                if (handle <= node->buffer.unk00) {
                    break;
                }
                previous = node;
                node = reinterpret_cast<BufferNode *>(node->next);
            }
            if (node != NULL && node->buffer.unk00 == handle) {
                if (g_asdGfxContext.activeBuffer == &node->buffer) {
                    g_asdGfxContext.activeBuffer = NULL;
                    g_asdGfxContext.submission.enabled = 0;
                }
                if (g_asdGfxContext.cmdBuffer == &node->buffer) {
                    g_commandBufferCursor = NULL;
                    g_commandBufferEnd = NULL;
                    g_asdGfxContext.cmdBuffer = NULL;
                }
                if (node->buffer.start != NULL && g_gfxAllocateCallback.release != NULL) {
                    g_gfxAllocateCallback.release(0x10000, 0x105, node->buffer.unk00, node->buffer.start);
                }
                handle = handles[index];
                if (handle < g_gfxAllocateCallback.nextBufferId) {
                    g_gfxAllocateCallback.nextBufferId = handle;
                }
                if (previous == NULL) {
                    BufferNode *head = reinterpret_cast<BufferNode *>(g_asdGfxContext.bufferRegistry.buckets[handle & 31]);
                    g_asdGfxContext.bufferRegistry.buckets[handle & 31] = head->next;
                } else {
                    previous->next = node->next;
                }
                if (g_gfxAllocateCallback.release != NULL) {
                    g_gfxAllocateCallback.release(0x10000, 0x100, 0, node);
                }
            }
        }
    }
}
}
