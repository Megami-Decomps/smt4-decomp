#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

void FUN_0014302c(AsdCmdBuffer *buf, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);

extern AsdGfxContext g_asdGfxContext;

/* Forwards eight arguments to the command buffer handler with the active command buffer. */
void asdGfxCmdBufferForward8(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h)
{
    FUN_0014302c(g_asdGfxContext.cmdBuffer, a, b, c, d, e, f, g, h);
}

} /* extern "C" */
