/* NON_MATCHING: Command pairs use a shared constant table, and cursor/zero registers and saved-register allocation differ. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

struct CommandSegmentLink {
    u32 header[2];
    u32 commandCount;
};
struct CommandSegmentPair {
    u32 value;
    u32 header;
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
            const CommandSegmentPair padding = {0, 0x8025E};
            *(CommandSegmentPair *)cursor = padding;
            g_commandBufferCursor = cursor + 2;
        }
    }
    if ((u32)g_commandBufferCursor < g_commandBufferEnd) {
        const CommandSegmentPair flush = {1, 0xF0111};
        *(CommandSegmentPair *)g_commandBufferCursor = flush;
        g_commandBufferCursor += 2;
    }
    if ((u32)g_commandBufferCursor < g_commandBufferEnd) {
        const CommandSegmentPair invalidate = {1, 0xF0110};
        *(CommandSegmentPair *)g_commandBufferCursor = invalidate;
        g_commandBufferCursor += 2;
    }
    if ((u32)g_commandBufferCursor < g_commandBufferEnd) {
        const CommandSegmentPair marker = {0x12345678, 0xF0010};
        *(CommandSegmentPair *)g_commandBufferCursor = marker;
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
