#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

extern AsdGfxContext g_asdGfxContext;

/* Sets unk38 of the active command buffer, if there is one. */
void asdGfxSetCmdBufferUnk38(u32 value)
{
    if (g_asdGfxContext.cmdBuffer != NULL) {
        g_asdGfxContext.cmdBuffer->unk38 = value;
    }
}

} /* extern "C" */
