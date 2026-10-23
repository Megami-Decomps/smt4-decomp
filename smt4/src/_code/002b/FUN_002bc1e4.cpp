/* NON_MATCHING: command writer uses different scratch registers and paired stores in its termination commands. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
extern "C" {
extern AsdGfxContext g_asdGfxContext;
extern u32 *g_commandBufferCursor;
extern u32 *g_commandBufferEnd;
void nngxLockEnter(void);
void nngxLockLeave(void);
void FUN_002aa624(AsdCmdBuffer *buffer, AsdCmdRecord *record);
void FUN_002ba2b8(void);

void FUN_002bc1e4(void)
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
            u32 *cursor = g_commandBufferCursor;
            g_commandBufferCursor += 2;
            cursor[1] = 0x8025E;
            cursor[0] = 0;
        }
    }
    if (g_commandBufferCursor < g_commandBufferEnd) {
        g_commandBufferCursor[0] = 1;
        g_commandBufferCursor[1] = 0xF0111;
        g_commandBufferCursor += 2;
    }
    if (g_commandBufferCursor < g_commandBufferEnd) {
        g_commandBufferCursor[0] = 1;
        g_commandBufferCursor[1] = 0xF0110;
        g_commandBufferCursor += 2;
    }
    if (g_commandBufferCursor < g_commandBufferEnd) {
        g_commandBufferCursor[0] = 0x12345678;
        g_commandBufferCursor[1] = 0xF0010;
        g_commandBufferCursor += 2;
    }
    AsdCmdRecord *record = &buffer->entries[buffer->listCount];
    record->kind = 1;
    record->commands = buffer->start + buffer->committedOffset;
    record->byteCount = buffer->writeOffset - buffer->committedOffset;
    if (buffer->unk34)
        FUN_002aa624(buffer, record);
    record->flags &= ~2;
    if (buffer->flag3d)
        record->flags |= 1;
    buffer->committedOffset = buffer->writeOffset;
    nngxLockEnter();
    ++buffer->listCount;
    if (g_asdGfxContext.activeBuffer == buffer && g_asdGfxContext.submission.enabled &&
            !g_asdGfxContext.submission.pending) {
        g_asdGfxContext.submission.pending = 1;
        FUN_002ba2b8();
    }
    nngxLockLeave();
}
}
