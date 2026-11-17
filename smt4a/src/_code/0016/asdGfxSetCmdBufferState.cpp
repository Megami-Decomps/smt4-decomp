#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

extern "C" {

/* Sets a pool option: 0x200 stores `value` at 0x2C, 0x20F stores whether it is nonzero at 0x3D. Does nothing without a pool. */
void asdGfxSetCmdBufferState(s32 option, s32 value)
{
    if (g_asdGfxContext.cmdBuffer != NULL) {
        switch (option) {
        case 0x200:
            g_asdGfxContext.cmdBuffer->unk2c = value;
            break;
        case 0x20F:
            g_asdGfxContext.cmdBuffer->flag3d = value != 0;
            break;
        }
    }
}

} /* extern "C" */
