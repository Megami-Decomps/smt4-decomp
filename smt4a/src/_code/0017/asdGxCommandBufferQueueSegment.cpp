#include "AsdSDK/Source/Gfx/AsdGxCommandRecord.h"

/* unit-local: the prior segment's GPU link command, whose size word the queue patches. */
struct CommandSegmentLink {
    /* 0x00 */ u32 header[2];
    /* 0x08 */ u32 commandCount;
};

enum { COMMAND_SEGMENT_LINK_TRAILER_SIZE = 0x18 };
extern "C" {
extern u32 *g_commandBufferCursor;
extern u32 *g_commandBufferEnd;
void globalCriticalSectionEnterForward(void);
void globalCriticalSectionLeaveForward(void);
void FUN_001963e0(void);

/* Terminates the current GPU command segment, queues its descriptor and wakes the submitter when needed. */
void asdGxCommandBufferQueueSegment(void)
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
    AsdCmdRecord *entry = asdGxDescribeCommandSegment(buffer);
    if (buffer->unk34 != 0) {
        ((CommandSegmentLink *)buffer->unk34)->commandCount =
            ((u32)entry->commands + entry->byteCount - buffer->unk34 - COMMAND_SEGMENT_LINK_TRAILER_SIZE) >> 3;
        entry->byteCount = buffer->unk30;
        buffer->unk34 = 0;
        buffer->unk30 = 0;
    }
    u32 flags = (entry->flags & ~2) | 4;
    entry->flags = flags;
    if (buffer->flag3d != 0) {
        entry->flags = flags | 1;
    }
    buffer->committedOffset = buffer->writeOffset;
    globalCriticalSectionEnterForward();
    ++buffer->listCount;
    if (g_asdGfxContext.activeBuffer == buffer && g_asdGfxContext.submitEnabled != 0 &&
        g_asdGfxContext.submitPending == 0) {
        g_asdGfxContext.submitPending = 1;
        FUN_001963e0();
    }
    globalCriticalSectionLeaveForward();
}
} /* extern "C" */
