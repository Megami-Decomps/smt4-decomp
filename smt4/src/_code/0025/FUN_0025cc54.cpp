#include "shard/PadState.h"

extern "C" {

extern PadState *FUN_002b63ac(void);
extern int FUN_002c09d0(u32 id);

u32 FUN_0025cc54(void)
{
    PadState *pad;

    if (FUN_002c09d0(0x410) != 0) {
        pad = FUN_002b63ac();
        if (pad->unk02 != 0 && pad->unk04 != 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
