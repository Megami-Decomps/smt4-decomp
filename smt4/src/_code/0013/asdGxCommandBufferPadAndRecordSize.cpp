#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {

extern u32 *g_commandBufferCursor;
extern u32 *g_commandBufferEnd;

/* Pads the command buffer to a 16-byte boundary with a no-op command, then records how much was submitted. */
void asdGxCommandBufferPadAndRecordSize(void)
{
    g_asdGfxContext.cmdBuffer->writeOffset = (u8 *)g_commandBufferCursor - g_asdGfxContext.cmdBuffer->start;
    if ((g_asdGfxContext.cmdBuffer->writeOffset & 8) != 0 && g_commandBufferCursor < g_commandBufferEnd) {
        *g_commandBufferCursor++ = 0;
        *g_commandBufferCursor++ = 0x8025E;
    }
    g_asdGfxContext.bufferFinished = 1;
    g_asdGfxContext.submittedBytes = (u8 *)g_commandBufferCursor - g_asdGfxContext.cmdBuffer->start;
    g_asdGfxContext.submittedListCount = g_asdGfxContext.cmdBuffer->listCount;
}

} /* extern "C" */
