/* NON_MATCHING: saved-register assignment differs from retail (retail: global context r6, cursor r7, first-record flag r8; ours r7/r8/r6); the instruction sequence is otherwise the same (148 rows each). */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

/* A recorded command chunk: raw command bytes followed by their records. */
struct AsdCmdChunk {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 dataBytes;
    /* 0x0C */ u32 recordCount;
    /* 0x10 */ u8 data[1];     /* dataBytes of commands, then recordCount AsdCmdRecords */
};

extern "C" {
extern AsdGfxContext g_asdGfxContext;
extern u32 *g_commandBufferCursor;
extern u32 *g_commandBufferEnd;

void rt_memcpy_w(void *destination, const void *source, u32 size);
void rt_memcpy(void *destination, const void *source, u32 size);
void globalCriticalSectionEnterForward(void);
void globalCriticalSectionLeaveForward(void);
void heapCloseOpenBlock(AsdCmdBuffer *buffer, AsdCmdRecord *records);
void FUN_001963e0(void);

/* Appends a recorded command chunk to the command buffer named `handle`: copies its records into the
 * buffer's list, places the commands after the data written so far (padding to keep copy records
 * 8-byte aligned) and, for the active buffer, advances the write cursor and wakes the submitter. */
void FUN_0017db14(u32 handle, AsdCmdChunk *chunk)
{
    // The linked-list pointer follows the shared buffer prefix; do not grow that prefix.
    struct BufferNode { AsdCmdBuffer buffer; BufferNode *next; };
    bool first = true;
    BufferNode *node = reinterpret_cast<BufferNode *>(g_asdGfxContext.bufferRegistry.buckets[handle & 31]);
    AsdCmdBuffer *buffer;
    u32 i;

    if (node != NULL) {
        u32 id;
        do {
            id = node->buffer.unk00;
            if (id != handle) {
                node = node->next;
            }
        } while (id != handle && node != NULL);
    }
    buffer = &node->buffer;
    if (g_asdGfxContext.cmdBuffer == buffer) {
        buffer->writeOffset = (u8 *)g_commandBufferCursor - buffer->start;
    }
    rt_memcpy_w(&buffer->entries[buffer->listCount], chunk->data + chunk->dataBytes, chunk->recordCount * sizeof(AsdCmdRecord));
    for (i = 0; i < chunk->recordCount; i++) {
        AsdCmdRecord *record = &buffer->entries[buffer->listCount + i];

        if (record->kind == 1) {
            if (first) {
                if ((record->byteCount & 8) != (buffer->writeOffset & 8)) {
                    if (g_asdGfxContext.cmdBuffer == buffer) {
                        if (g_commandBufferCursor < g_commandBufferEnd) {
                            g_commandBufferCursor[0] = 0;
                            g_commandBufferCursor[1] = 0x8025E;
                            g_commandBufferCursor += 2;
                        }
                    } else {
                        u32 *padding = (u32 *)(buffer->start + buffer->writeOffset);

                        padding[0] = 0;
                        padding[1] = 0x25E;
                    }
                    buffer->writeOffset += 8;
                }
                record->byteCount = (buffer->writeOffset - buffer->committedOffset) + record->byteCount;
                first = false;
            }
            record->commands = buffer->start + buffer->committedOffset;
            buffer->committedOffset += record->byteCount;
        }
    }
    rt_memcpy(buffer->start + buffer->writeOffset, chunk->data, chunk->dataBytes);
    buffer->writeOffset += chunk->dataBytes;
    if (buffer->unk34 != 0 && chunk->recordCount != 0) {
        heapCloseOpenBlock(buffer, &buffer->entries[buffer->listCount]);
    }
    if (g_asdGfxContext.cmdBuffer == buffer) {
        g_commandBufferCursor = (u32 *)((u8 *)g_commandBufferCursor + (chunk->dataBytes & ~3u));
        if (chunk->recordCount != 0) {
            globalCriticalSectionEnterForward();
            buffer->listCount += chunk->recordCount;
            if (g_asdGfxContext.activeBuffer == buffer && g_asdGfxContext.submission.enabled != 0 &&
                g_asdGfxContext.submission.pending == 0) {
                g_asdGfxContext.submission.pending = 1;
                FUN_001963e0();
            }
            globalCriticalSectionLeaveForward();
        }
    } else {
        buffer->listCount += chunk->recordCount;
    }
}

} /* extern "C" */
