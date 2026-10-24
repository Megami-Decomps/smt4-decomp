/* NON_MATCHING: retail keeps the two command-word stores separate and uses another register split; we get an stm */
#include "common.h"

/* The parts of the command pool and of the graphics context (g_asdGfxContext) this function touches. */
struct CommandPool {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 start;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ s32 used;
    /* 0x10 */ u8 unk10[0x10];
    /* 0x20 */ u32 entryCount;
};

struct GfxContextView {
    /* 0x000 */ u8 unk000[0x13];
    /* 0x013 */ u8 bufferTerminated;
    /* 0x014 */ u8 unk014[0x88];
    /* 0x09C */ CommandPool *pool;
    /* 0x0A0 */ u8 unk0A0[0xC8];
    /* 0x168 */ s32 commandBytes;
    /* 0x16C */ u32 commandEntries;
};

struct NoOpCommand {
    u32 header;
    u32 id;
};

extern "C" {

extern GfxContextView g_asdGfxContext;
extern NoOpCommand *g_commandBufferCursor;
extern NoOpCommand *g_commandBufferEnd;

/* Pads the command buffer to a 16-byte boundary with a no-op command, then records the buffer's size and entry count in the context. */
void FUN_0017df1c(void)
{
    GfxContextView *context = &g_asdGfxContext;
    NoOpCommand *cursor = g_commandBufferCursor;

    context->pool->used = (s32)cursor - context->pool->start;
    if (((context->pool->used & 8) != 0) && cursor < g_commandBufferEnd) {
        cursor->id = 0x8025E;
        cursor->header = 0;
        g_commandBufferCursor = cursor + 1;
    }
    context->bufferTerminated = 1;
    context->commandBytes = (s32)g_commandBufferCursor - context->pool->start;
    context->commandEntries = context->pool->entryCount;
}

} /* extern "C" */
