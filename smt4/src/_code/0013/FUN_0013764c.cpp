/* NON_MATCHING: retail stores the two padding words separately (str [r0,#4]; str [r0]) and keeps the context base in r3 first; built merges them into stm and orders the pool differently */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

/* g_asdGfxContext as this function sees it: the context proper (0x128 bytes) followed by the submit bookkeeping. */
struct GfxContextTail {
    u8 unk00[0x13];             // 0x00
    u8 submitted;               // 0x13
    u8 unk14[0x88];             // 0x14
    AsdCmdBuffer *cmdBuffer;    // 0x9C
    u8 unkA0[0xC8];             // 0xA0
    u32 submittedBytes;         // 0x168
    u32 submittedListCount;     // 0x16C
};

extern "C" {

extern GfxContextTail g_asdGfxContext;
extern u32 *g_commandBufferCursor;
extern u32 *g_commandBufferEnd;

/* Pads the command buffer to a 16-byte boundary with a dummy command, then records how much was submitted. */
void FUN_0013764c(void)
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
    g_asdGfxContext.submitted = 1;
    g_asdGfxContext.submittedBytes = (u8 *)g_commandBufferCursor - g_asdGfxContext.cmdBuffer->start;
    g_asdGfxContext.submittedListCount = g_asdGfxContext.cmdBuffer->listCount;
}

} /* extern "C" */
