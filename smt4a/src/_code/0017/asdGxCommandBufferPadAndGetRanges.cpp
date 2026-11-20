#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {
extern u32* g_commandBufferCursor;
extern u32 g_commandBufferEnd;

/* Finishes the current command range, pads it if needed, and reports both ranges. */
void asdGxCommandBufferPadAndGetRanges(u32* commandOffset, u32* commandSize,
                  u32* secondaryOffset, u32* secondarySize)
{
    g_asdGfxContext.bufferFinished = 0;

    g_asdGfxContext.cmdBuffer->writeOffset =
        reinterpret_cast<u32>(g_commandBufferCursor) - reinterpret_cast<u32>(g_asdGfxContext.cmdBuffer->start);

    /* Pad to a 16-byte boundary with a no-op command. */
    if ((g_asdGfxContext.cmdBuffer->writeOffset & 8) != 0 &&
        reinterpret_cast<u32>(g_commandBufferCursor) < g_commandBufferEnd) {
        *g_commandBufferCursor++ = 0;
        *g_commandBufferCursor++ = 0x0008025E;
    }

    *commandOffset = g_asdGfxContext.submittedBytes;
    *commandSize = reinterpret_cast<u32>(g_commandBufferCursor)
                 - reinterpret_cast<u32>(g_asdGfxContext.cmdBuffer->start)
                 - g_asdGfxContext.submittedBytes;
    *secondaryOffset = g_asdGfxContext.submittedListCount;
    *secondarySize = g_asdGfxContext.cmdBuffer->listCount
                   - g_asdGfxContext.submittedListCount;
}
}
