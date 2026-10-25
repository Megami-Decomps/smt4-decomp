#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
extern AsdGfxContext g_asdGfxContext;
extern u8 *g_commandBufferCursor;
void nngxLockEnter(void);
void nngxLockLeave(void);
void FUN_002bdb48(u32 committedOffset, u32 writeOffset);
void FUN_002ba2b8(void);
void *__aeabi_memcpy4(void *destination, const void *source, u32 byteCount);

// Append copied GPU words or enqueue an external command block for submission.
void FUN_002adba8(const void *commands, u32 byteCount, s32 copyCommands)
{
    AsdCmdBuffer *list = g_asdGfxContext.cmdBuffer;
    list->writeOffset = g_commandBufferCursor - list->start;
    if (copyCommands != 0) {
        __aeabi_memcpy4(g_commandBufferCursor, commands, byteCount);
        g_commandBufferCursor += byteCount & ~3u;
    } else {
        if (list->committedOffset != list->writeOffset) {
            FUN_002bdb48(list->committedOffset, list->writeOffset);
        }
        if (list->committedOffset == list->writeOffset) {
            AsdCmdRecord *entry = &list->entries[list->listCount];
            entry->kind = 1;
            entry->byteCount = byteCount;
            entry->commands = commands;
            entry->flags |= 2;
            nngxLockEnter();
            ++list->listCount;
            if (g_asdGfxContext.activeBuffer == list &&
                g_asdGfxContext.submission.enabled && !g_asdGfxContext.submission.pending) {
                g_asdGfxContext.submission.pending = 1;
                FUN_002ba2b8();
            }
            nngxLockLeave();
        }
    }
}
}
