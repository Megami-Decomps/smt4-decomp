/* NON_MATCHING: retail keeps the two command-word stores separate and uses another register split; we get an stm */
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

struct NoOpCommand {
    u32 header;
    u32 id;
};

extern "C" {

extern NoOpCommand *g_commandBufferCursor;
extern NoOpCommand *g_commandBufferEnd;

/* Pads the command buffer to a 16-byte boundary with a no-op command, then records the buffer's size and entry count in the context. */
void asdGxCommandBufferPadAndRecordSize(void)
{
    AsdGfxContext *context = &g_asdGfxContext;
    NoOpCommand *cursor = g_commandBufferCursor;

    context->cmdBuffer->writeOffset = (u32)cursor - (u32)context->cmdBuffer->start;
    if (((context->cmdBuffer->writeOffset & 8) != 0) && cursor < g_commandBufferEnd) {
        cursor->id = 0x8025E;
        cursor->header = 0;
        g_commandBufferCursor = cursor + 1;
    }
    context->bufferFinished = 1;
    context->submittedBytes = (u32)g_commandBufferCursor - (u32)context->cmdBuffer->start;
    context->submittedListCount = context->cmdBuffer->listCount;
}

} /* extern "C" */
