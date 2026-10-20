#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

extern AsdGfxContext g_asdGfxContext;

/* Sets a state value of the active command buffer: 0x200 stores `value` in unk2c, 0x20f stores
 * whether it is non-zero in flag3d. */
void asdGfxSetCmdBufferState(s32 state, s32 value)
{
    if (g_asdGfxContext.cmdBuffer != NULL) {
        switch (state) {
        case 0x200:
            g_asdGfxContext.cmdBuffer->unk2c = value;
            break;
        case 0x20f:
            g_asdGfxContext.cmdBuffer->flag3d = value != 0;
            break;
        }
    }
}

} /* extern "C" */
