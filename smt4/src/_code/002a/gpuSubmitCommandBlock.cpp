#include <string.h>
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"
#include "shard/W6_W6Match8_LightUniforms.h"

extern "C" {
void asdGxCommandBufferTerminateAndSubmit(void);
void nngxLockEnter(void);
void nngxLockLeave(void);
void gfxReplayRecordedCommands(void);

/* Copies command words into the current buffer, or queues the caller's aligned block directly. */
void gpuSubmitCommandBlock(const void *commands, u32 byteCount, s32 copyCommands)
{
    enum { COMMAND_LIST = 1, COMMANDS_BORROWED = 2 };
    AsdGfxContext *context = &g_asdGfxContext;
    AsdCmdBuffer *list = context->cmdBuffer;
    list->writeOffset = (u8 *)g_commandBufferCursor - list->start;
    if (copyCommands != 0) {
        memcpy(g_commandBufferCursor, (const u32 *)commands, byteCount);
        g_commandBufferCursor += byteCount / sizeof(*g_commandBufferCursor);
    } else {
        if (list->committedOffset != list->writeOffset) {
            asdGxCommandBufferTerminateAndSubmit();
        }
        if (list->committedOffset == list->writeOffset) {
            AsdCmdRecord *entry = &list->entries[list->listCount];
            entry->kind = COMMAND_LIST;
            entry->byteCount = byteCount;
            entry->commands = commands;
            entry->flags |= COMMANDS_BORROWED;
            nngxLockEnter();
            ++list->listCount;
            if (context->activeBuffer == list && context->submitEnabled && !context->submitPending) {
                context->submitPending = 1;
                gfxReplayRecordedCommands();
            }
            nngxLockLeave();
        }
    }
}

} /* extern "C" */
