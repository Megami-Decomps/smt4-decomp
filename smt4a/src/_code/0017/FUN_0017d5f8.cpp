/* NON_MATCHING: command-pair STM versus STRD selection, cursor lifetime and record-index scratch registers differ. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
extern u32 *g_commandBufferCursor;
extern u32 g_commandBufferEnd;
extern AsdGfxContext g_asdGfxContext;
void globalCriticalSectionEnterForward();
void globalCriticalSectionLeaveForward();
void FUN_001963e0();

void FUN_0017d5f8(u32 parameter)
{
    AsdCmdBuffer *buffer = g_asdGfxContext.cmdBuffer;
    u32 *cursor = g_commandBufferCursor;
    u32 offset = reinterpret_cast<u32>(cursor) - reinterpret_cast<u32>(buffer->start);
    buffer->writeOffset = offset;
    if (buffer->committedOffset == offset)
        return;
    if (offset & 8) {
        buffer->writeOffset = offset + 0x18;
    } else {
        buffer->writeOffset = offset + 0x20;
        if (reinterpret_cast<u32>(cursor) < g_commandBufferEnd) {
            g_commandBufferCursor = cursor + 2;
            cursor[1] = 0x8025E;
            cursor[0] = 0;
        }
    }
    if (reinterpret_cast<u32>(g_commandBufferCursor) < g_commandBufferEnd) {
        g_commandBufferCursor[0] = 1;
        g_commandBufferCursor[1] = 0xF0111;
        g_commandBufferCursor += 2;
    }
    if (reinterpret_cast<u32>(g_commandBufferCursor) < g_commandBufferEnd) {
        g_commandBufferCursor[0] = 1;
        g_commandBufferCursor[1] = 0xF0110;
        g_commandBufferCursor += 2;
    }
    if (reinterpret_cast<u32>(g_commandBufferCursor) < g_commandBufferEnd) {
        g_commandBufferCursor[1] = 0xF0010;
        g_commandBufferCursor[0] = 0x12345678;
        g_commandBufferCursor += 2;
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
    if (g_asdGfxContext.activeBuffer == buffer && g_asdGfxContext.submission.enabled && !g_asdGfxContext.submission.pending) {
        g_asdGfxContext.submission.pending = 1;
        FUN_001963e0();
    }
    globalCriticalSectionLeaveForward();
}
}
