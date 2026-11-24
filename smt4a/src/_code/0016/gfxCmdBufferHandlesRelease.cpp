/* NON_MATCHING: retail loads the graphics context before the loop (built: inside the handle test, so its pool word follows the allocator's) and compares the next-handle update the other way (retail cmp r0,r1; strcc, built cmp r1,r0; strhi). */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "gfx/HandleRegistry.h"

extern "C" {
extern GfxHandleAllocator g_gfxAllocateCallback;
extern u8 *g_commandBufferCursor;
extern u8 *g_commandBufferEnd;

// Delete named command buffers from the sorted hash buckets, releasing bound buffers as needed.
void gfxCmdBufferHandlesRelease(s32 count, const u32 *handles)
{
    for (s32 index = 0; index < count; ++index) {
        u32 handle = handles[index];
        if (handle != 0) {
            AsdGfxContext *ctx = &g_asdGfxContext;
            CommandBufferHandleNode *previous = NULL;
            CommandBufferHandleNode *node = ctx->buffers[handle & 31];
            while (node != NULL) {
                if (handle <= node->buffer.unk00) {
                    break;
                }
                previous = node;
                node = node->next;
            }
            if (node != NULL && node->buffer.unk00 == handle) {
                if (ctx->activeBuffer == &node->buffer) {
                    ctx->activeBuffer = NULL;
                    ctx->submitEnabled = 0;
                }
                if (ctx->cmdBuffer == &node->buffer) {
                    g_commandBufferEnd = NULL;
                    g_commandBufferCursor = NULL;
                    ctx->cmdBuffer = NULL;
                }
                if (node->buffer.start != NULL && g_gfxAllocateCallback.release != NULL) {
                    g_gfxAllocateCallback.release(0x10000, 0x105, node->buffer.unk00, node->buffer.start);
                }
                handle = handles[index];
                if (handle < g_gfxAllocateCallback.nextBufferId) {
                    g_gfxAllocateCallback.nextBufferId = handles[index];
                }
                if (previous == NULL) {
                    ctx->buffers[handle & 31] = ctx->buffers[handle & 31]->next;
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
