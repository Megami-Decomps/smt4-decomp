/* NON_MATCHING: GPU terminator constant synthesis and command-store scheduling differ from retail. */
#include "common.h"
#include "shard/Block61a470.h"

struct CommandSubmission {
    u8 type;         /* 0x00 */
    u8 unk01[3];
    u32 address;     /* 0x04 */
    u32 size;        /* 0x08 */
    u32 flags;       /* 0x0c */
    u8 unk10[0xc];
};

extern "C" {
void globalCriticalSectionEnterForward();
void globalCriticalSectionLeaveForward();
void FUN_001963e0();

// Terminate the pending GPU commands and enqueue the command-list submission.
void gfxCommandBufferSubmit(Pool *buffer, u32 size)
{
    u32 cursor = buffer->unk0C;
    if (buffer->unk14 == cursor) {
        return;
    }
    u32 *commands = reinterpret_cast<u32 *>(buffer->start + cursor);
    if ((cursor & 8) != 0) {
        buffer->unk0C = cursor + 0x18;
    } else {
        buffer->unk0C = cursor + 0x20;
        *commands++ = 0;
        *commands++ = 0x8025e;
    }
    commands[0] = 1;
    commands[1] = 0xf0111;
    commands[4] = 0x12345678;
    commands[5] = 0xf0010;
    commands[2] = 1;
    commands[3] = 0xf0110;

    CommandSubmission *submission = &static_cast<CommandSubmission *>(buffer->entries)[buffer->entryCount];
    submission->type = 1;
    u32 address = buffer->start + buffer->unk14;
    submission->address = address;
    if (buffer->unk34 != 0) {
        u32 byteCount = buffer->unk0C - buffer->unk14;
        submission->size = byteCount;
        reinterpret_cast<u32 *>(buffer->unk34)[2] = (byteCount + address - buffer->unk34 - 0x18) >> 3;
        submission->size = buffer->unk30;
        buffer->unk34 = 0;
        buffer->unk30 = 0;
    }
    submission->size = size;
    submission->flags = (submission->flags & ~2u) | 4;
    if (buffer->unk3D) {
        submission->flags |= 1;
    }
    buffer->unk14 = buffer->unk0C;
    globalCriticalSectionEnterForward();
    ++buffer->entryCount;
    if (g_asdGfxContext.activePool == buffer && g_asdGfxContext.submission.submitEnabled && !g_asdGfxContext.submission.submitPending) {
        g_asdGfxContext.submission.submitPending = 1;
        FUN_001963e0();
    }
    globalCriticalSectionLeaveForward();
}
}
