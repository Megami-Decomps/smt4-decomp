#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
extern u32 *g_commandBufferCursor;
extern u32 *g_commandBufferEnd;
void globalCriticalSectionEnterForward(void);
void globalCriticalSectionLeaveForward(void);
void heapCloseOpenBlock(AsdCmdBuffer *buffer, AsdCmdRecord *record);
void FUN_001963e0(void);

/* Terminates the buffered GPU commands, enqueues a submission record and requests submission. */
void asdGxCommandBufferTerminateAndSubmit(void)
{
    AsdCmdBuffer *buffer = g_asdGfxContext.cmdBuffer;
    u32 offset = reinterpret_cast<u8 *>(g_commandBufferCursor) - buffer->start;
    buffer->writeOffset = offset;
    if (offset & 8) {
        buffer->writeOffset = offset + 0x18;
    } else {
        buffer->writeOffset = offset + 0x20;
        if (g_commandBufferCursor < g_commandBufferEnd) {
            *g_commandBufferCursor++ = 0;
            *g_commandBufferCursor++ = 0x8025E;
        }
    }
    if (g_commandBufferCursor < g_commandBufferEnd) {
        *g_commandBufferCursor++ = 1;
        *g_commandBufferCursor++ = 0xF0111;
    }
    if (g_commandBufferCursor < g_commandBufferEnd) {
        *g_commandBufferCursor++ = 1;
        *g_commandBufferCursor++ = 0xF0110;
    }
    if (g_commandBufferCursor < g_commandBufferEnd) {
        *g_commandBufferCursor++ = 0x12345678;
        *g_commandBufferCursor++ = 0xF0010;
    }
    AsdCmdRecord *record = &buffer->entries[buffer->listCount];
    record->kind = 1;
    record->commands = buffer->start + buffer->committedOffset;
    record->byteCount = buffer->writeOffset - buffer->committedOffset;
    if (buffer->unk34 != 0)
        heapCloseOpenBlock(buffer, record);
    record->flags &= ~2u;
    if (buffer->flag3d != 0)
        record->flags |= 1;
    buffer->committedOffset = buffer->writeOffset;
    globalCriticalSectionEnterForward();
    ++buffer->listCount;
    if (g_asdGfxContext.activeBuffer == buffer &&
        g_asdGfxContext.submitEnabled != 0 && g_asdGfxContext.submitPending == 0) {
        g_asdGfxContext.submitPending = 1;
        FUN_001963e0();
    }
    globalCriticalSectionLeaveForward();
}
}
