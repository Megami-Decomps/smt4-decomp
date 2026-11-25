/* NON_MATCHING: the VFP-enabled build interleaves the final command-pair stores. With --fpu=softvfp the unit is IDENTICAL. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "shard/W6_W6Match5_DisplayMode.h"


extern "C" {
void globalCriticalSectionLeaveForward();
void FUN_001963e0();

// Terminate the pending GPU commands and enqueue the command-list submission.
void gfxCommandBufferSubmit(AsdCmdBuffer *buffer, u32 size)
{
    if (buffer->committedOffset == buffer->writeOffset) {
        return;
    }
    u32 cursor = buffer->writeOffset;
    u32 *commands = (u32 *)(buffer->start + cursor);
    if ((cursor & 8) != 0) {
        buffer->writeOffset += 0x18;
    } else {
        buffer->writeOffset += 0x20;
        *commands++ = 0;
        *commands++ = 0x8025e;
    }
    *commands++ = 1;
    *commands++ = 0xf0111;
    *commands++ = 1;
    *commands++ = 0xf0110;
    *commands++ = 0x12345678;
    *commands++ = 0xf0010;

    AsdCmdRecord *submission = &buffer->entries[buffer->listCount];
    submission->kind = 1;
    submission->commands = buffer->start + buffer->committedOffset;
    if (buffer->unk34 != 0) {
        submission->byteCount = buffer->writeOffset - buffer->committedOffset;
        reinterpret_cast<u32 *>(buffer->unk34)[2] = (submission->byteCount + reinterpret_cast<u32>(submission->commands) - buffer->unk34 - 0x18) >> 3;
        submission->byteCount = buffer->unk30;
        buffer->unk34 = 0;
        buffer->unk30 = 0;
    }
    submission->byteCount = size;
    submission->flags = (submission->flags & ~2u) | 4;
    if (buffer->flag3d) {
        submission->flags |= 1;
    }
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
