#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
extern u32 *g_commandBufferCursor;
extern u32 *g_commandBufferEnd;
void globalCriticalSectionEnterForward();
void globalCriticalSectionLeaveForward();
void FUN_001963e0();

/* Terminates the buffered GPU commands and enqueues them as a submission record of `parameter` bytes, then
 * requests submission. */
void FUN_0017d5f8(u32 parameter)
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
    if (buffer->unk34) {
        record->byteCount = buffer->writeOffset - buffer->committedOffset;
        u32 *jump = reinterpret_cast<u32 *>(buffer->unk34);
        jump[2] = ((reinterpret_cast<u32>(record->commands) + record->byteCount - reinterpret_cast<u32>(jump)) - 0x18) >> 3;
        record->byteCount = buffer->unk30;
        buffer->unk34 = 0;
        buffer->unk30 = 0;
    }
    record->byteCount = parameter;
    record->flags = (record->flags & ~2U) | 4;
    if (buffer->flag3d)
        record->flags |= 1;
    buffer->committedOffset = buffer->writeOffset;
    globalCriticalSectionEnterForward();
    ++buffer->listCount;
    if (g_asdGfxContext.activeBuffer == buffer && g_asdGfxContext.submitEnabled && !g_asdGfxContext.submitPending) {
        g_asdGfxContext.submitPending = 1;
        FUN_001963e0();
    }
    globalCriticalSectionLeaveForward();
}
}
