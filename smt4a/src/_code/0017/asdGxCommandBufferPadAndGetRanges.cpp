/* NON_MATCHING: Retail mov r7, #0 differs from recovered mov r8, #0. */
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {
extern u32* g_commandBufferCursor;
extern u32 g_commandBufferEnd;

// Finish the current command range, append padding if needed, and report both ranges.
void asdGxCommandBufferPadAndGetRanges(u32* commandOffset, u32* commandSize,
                  u32* secondaryOffset, u32* secondarySize)
{
    g_asdGfxContext.bufferFinished = 0;

    AsdCmdBuffer *state = g_asdGfxContext.cmdBuffer;
    u32* cursor = g_commandBufferCursor;
    u32 usedBytes = reinterpret_cast<u32>(cursor) - reinterpret_cast<u32>(state->start);
    state->writeOffset = usedBytes;

    if ((usedBytes & 8) != 0 &&
        reinterpret_cast<u32>(cursor) < g_commandBufferEnd) {
        cursor[0] = 0;
        cursor[1] = 0x0008025E;
        g_commandBufferCursor = cursor + 2;
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
