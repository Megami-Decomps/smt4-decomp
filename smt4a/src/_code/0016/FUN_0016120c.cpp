/* NON_MATCHING: allocator callback and command-buffer bases use different registers and literal-pool positions. */
/* Reallocates the active graphics command buffer and its trailing record list. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "shard/W6_W6Match7_DefaultTextureWork.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern AsdGfxContext g_asdGfxContext;
extern DriverMemoryCallbacks g_gfxAllocateCallback;
extern u8 *g_commandBufferCursor;
extern u8 *g_commandBufferEnd;
void sysMemClear(void *block, s32 size);

void FUN_0016120c(s32 bytes, s32 records)
{
    AsdCmdBuffer *buffer = g_asdGfxContext.cmdBuffer;
    if (buffer != NULL) {
        if (buffer->start != NULL && g_gfxAllocateCallback.release != NULL) {
            g_gfxAllocateCallback.release(ASD_HEAP_EXTRA, 0x105, buffer->unk00, buffer->start);
        }
        u8 *storage = NULL;
        if (g_gfxAllocateCallback.allocate != NULL) {
            storage = (u8 *)g_gfxAllocateCallback.allocate(ASD_HEAP_EXTRA, 0x105, buffer->unk00,
                                                          bytes + records * 0x1C);
        }
        buffer->size = bytes;
        buffer->unk0c = 0;
        buffer->listCount = 0;
        buffer->unk10 = 0;
        buffer->unk28 = 0;
        buffer->unk24 = 0;
        buffer->unk34 = 0;
        buffer->start = storage;
        buffer->unk30 = 0;
        buffer->list = storage + bytes;
        buffer->unk1c = records;
        sysMemClear(buffer->list, records * 0x1C);
        g_commandBufferCursor = buffer->start;
        g_commandBufferEnd = g_commandBufferCursor + buffer->size;
    }
}
}
