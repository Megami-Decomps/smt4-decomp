#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

void asdCmdBufferAppendTextureTransfer(AsdCmdBuffer *buf, u32 a, u32 b, u32 c, u32 d, u32 e);

extern AsdGfxContext g_asdGfxContext;

/* Forwards five arguments to the command buffer handler with the active command buffer. */
void asdGfxCmdBufferForward5(u32 a, u32 b, u32 c, u32 d, u32 e)
{
    asdCmdBufferAppendTextureTransfer(g_asdGfxContext.cmdBuffer, a, b, c, d, e);
}

} /* extern "C" */
