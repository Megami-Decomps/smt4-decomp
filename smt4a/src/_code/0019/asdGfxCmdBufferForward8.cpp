#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {

void asdCmdBufferAppendCopyTransfer(AsdCmdBuffer *pool, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);

/* Forwards its eight arguments to asdCmdBufferAppendCopyTransfer together with the global pool. */
void asdGfxCmdBufferForward8(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h)
{
    asdCmdBufferAppendCopyTransfer(g_asdGfxContext.cmdBuffer, a, b, c, d, e, f, g, h);
}

} /* extern "C" */
