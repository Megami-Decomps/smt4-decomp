/* NON_MATCHING: the next-handle store is predicated but compares the other way (retail cmp r0,r1; strcc, built cmp r1,r0; strhi) and two saved registers (handles r9/context r8) are swapped. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "gfx/HandleRegistry.h"

extern "C" {
extern AsdGfxContext g_asdGfxContext;
extern GfxHandleAllocator g_gfxAllocateCallback;
extern u8 *g_commandBufferCursor;
extern u8 *g_commandBufferEnd;

// Delete named command buffers from the sorted hash buckets, releasing bound buffers as needed.
void FUN_00123254(s32 count, const u32 *handles)
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
                    g_commandBufferEnd = NULL;
                    g_commandBufferCursor = NULL;
                    g_asdGfxContext.cmdBuffer = NULL;
                }
                if (node->buffer.start != NULL && g_gfxAllocateCallback.release != NULL) {
                    g_gfxAllocateCallback.release(0x10000, 0x105, node->buffer.unk00, node->buffer.start);
                }
                handle = handles[index];
                if (handle < g_gfxAllocateCallback.nextBufferId) {
                    g_gfxAllocateCallback.nextBufferId = handles[index];
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
