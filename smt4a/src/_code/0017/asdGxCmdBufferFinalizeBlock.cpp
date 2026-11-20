/* NON_MATCHING: only r2 and r3 are swapped in the head (retail keeps the written byte count in r2 and the committed
 * offset in r3, then g_commandBufferEnd in r3); the rest matches. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
extern "C" {
extern u32 *g_commandBufferCursor;
extern u32 *g_commandBufferEnd;
void globalCriticalSectionEnterForward(void);
void globalCriticalSectionLeaveForward(void);
void heapCloseOpenBlock(AsdCmdBuffer *buffer, AsdCmdRecord *record);
void FUN_001963e0(void);

void asdGxCmdBufferFinalizeBlock(void)
{
    AsdCmdBuffer *buffer = g_asdGfxContext.cmdBuffer;
    u32 bytes = (u8 *)g_commandBufferCursor - buffer->start;
    buffer->writeOffset = bytes;
    if (buffer->committedOffset == bytes)
        return;
    if (bytes & 8) {
        buffer->writeOffset = bytes + 24;
    } else {
        buffer->writeOffset = bytes + 32;
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
    if (buffer->unk34)
        heapCloseOpenBlock(buffer, record);
    record->flags &= ~2;
    if (buffer->flag3d)
        record->flags |= 1;
    buffer->committedOffset = buffer->writeOffset;
    globalCriticalSectionEnterForward();
    ++buffer->listCount;
    if (g_asdGfxContext.activeBuffer == buffer && g_asdGfxContext.submitEnabled &&
            !g_asdGfxContext.submitPending) {
        g_asdGfxContext.submitPending = 1;
        FUN_001963e0();
    }
    globalCriticalSectionLeaveForward();
}
}
