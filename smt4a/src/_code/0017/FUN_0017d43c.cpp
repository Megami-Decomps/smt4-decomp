/* NON_MATCHING: the command words are now stored as literals like retail (no constant table); retail merges each word pair into one stm with the zero/one constants hoisted into ip/r6 and pushes r7/r8, where this build emits separate stores. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

struct CommandSegmentLink {
    u32 header[2];
    u32 commandCount;
};
extern "C" {
extern AsdGfxContext g_asdGfxContext;
extern u32 *g_commandBufferCursor;
extern u32 g_commandBufferEnd;
void globalCriticalSectionEnterForward(void);
void globalCriticalSectionLeaveForward(void);
void FUN_001963e0(void);

/* Terminates the current GPU command segment, queues its descriptor and wakes the submitter when needed. */
void FUN_0017d43c(void)
{
    AsdCmdBuffer *buffer = g_asdGfxContext.cmdBuffer;
    u32 *cursor = g_commandBufferCursor;
    u32 used = (u32)cursor - (u32)buffer->start;
    buffer->writeOffset = used;
    if (buffer->committedOffset == used) {
        return;
    }
    if ((used & 8) != 0) {
        buffer->writeOffset = used + 24;
    } else {
        buffer->writeOffset = used + 32;
        if ((u32)cursor < g_commandBufferEnd) {
            cursor[0] = 0;
            cursor[1] = 0x8025E;
            g_commandBufferCursor = cursor + 2;
        }
    }
    if ((u32)g_commandBufferCursor < g_commandBufferEnd) {
        g_commandBufferCursor[0] = 1;
        g_commandBufferCursor[1] = 0xF0111;
        g_commandBufferCursor += 2;
    }
    if ((u32)g_commandBufferCursor < g_commandBufferEnd) {
        g_commandBufferCursor[0] = 1;
        g_commandBufferCursor[1] = 0xF0110;
        g_commandBufferCursor += 2;
    }
    if ((u32)g_commandBufferCursor < g_commandBufferEnd) {
        g_commandBufferCursor[0] = 0x12345678;
        g_commandBufferCursor[1] = 0xF0010;
        g_commandBufferCursor += 2;
    }
    AsdCmdRecord *entry = &buffer->entries[buffer->listCount];
    entry->kind = 1;
    entry->commands = buffer->start + buffer->committedOffset;
    entry->byteCount = buffer->writeOffset - buffer->committedOffset;
    CommandSegmentLink *link = (CommandSegmentLink *)buffer->unk34;
    if (link != NULL) {
        link->commandCount = ((u32)entry->commands + entry->byteCount - (u32)link - 24) >> 3;
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
    if (g_asdGfxContext.activeBuffer == buffer && g_asdGfxContext.submission.enabled != 0 &&
        g_asdGfxContext.submission.pending == 0) {
        g_asdGfxContext.submission.pending = 1;
        FUN_001963e0();
    }
    globalCriticalSectionLeaveForward();
}
}
