#include "shard/Block61a470.h"

extern "C" {

/* Sets a pool option: 0x200 stores `value` at 0x2C, 0x20F stores whether it is nonzero at 0x3D. Does nothing without a pool. */
void asdGfxSetCmdBufferState(s32 option, s32 value)
{
    if (DAT_0061a470.pool != NULL) {
        switch (option) {
        case 0x200:
            DAT_0061a470.pool->unk2C = value;
            break;
        case 0x20F:
            DAT_0061a470.pool->unk3D = value != 0;
            break;
        }
    }
}

} /* extern "C" */
