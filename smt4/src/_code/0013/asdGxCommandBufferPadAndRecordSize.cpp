/* NON_MATCHING: retail stores the two padding words separately (str [r0,#4]; str [r0]) and keeps the context base in r3 first; built merges them into stm and orders the pool differently */
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {

extern u32 *g_commandBufferCursor;
extern u32 *g_commandBufferEnd;

/* Pads the command buffer to a 16-byte boundary with a dummy command, then records how much was submitted. */
void asdGxCommandBufferPadAndRecordSize(void)
{
    AsdCmdBuffer *buffer = g_asdGfxContext.cmdBuffer;
    u32 *cursor = g_commandBufferCursor;
    u32 offset = (u8 *)cursor - buffer->start;

    buffer->writeOffset = offset;
    if ((offset & 8) != 0 && cursor < g_commandBufferEnd) {
        cursor[1] = 0x8025E;
        cursor[0] = 0;
        g_commandBufferCursor = cursor + 2;
    }
    g_asdGfxContext.bufferFinished = 1;
    g_asdGfxContext.submittedBytes = (u8 *)g_commandBufferCursor - g_asdGfxContext.cmdBuffer->start;
    g_asdGfxContext.submittedListCount = g_asdGfxContext.cmdBuffer->listCount;
}

} /* extern "C" */
