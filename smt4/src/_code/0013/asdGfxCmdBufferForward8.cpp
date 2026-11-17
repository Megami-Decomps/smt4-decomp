#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

void asdCmdBufferAppendCopyTransfer(AsdCmdBuffer *buf, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);


/* Forwards eight arguments to the command buffer handler with the active command buffer. */
void asdGfxCmdBufferForward8(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h)
{
    asdCmdBufferAppendCopyTransfer(g_asdGfxContext.cmdBuffer, a, b, c, d, e, f, g, h);
}

} /* extern "C" */
