#include "common.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 FUN_002c1d5c(void);
void FUN_00282bfc(u32, u32);
void slotSetRequest(u32, u32, u32);

// Begin a slot request on the first frame and wait for completion on later frames.
u32 scrSlotRequestByArg(void)
{
    u32 value = scrGetArg(1);
    if (scrGetCommandFrame() == 0) {
        switch (scrGetArg(0)) {
        case 0:
            slotSetRequest(0, value, 0xff);
            break;
        case 1:
            slotSetRequest(0, value, ~0u);
            break;
        default:
            return 1;
        }
    } else {
        if (FUN_002b89a4(0) != 0) {
            return 1;
        }
        if (FUN_002c1d5c() != 0) {
            switch (scrGetArg(0)) {
            case 0:
                FUN_00282bfc(0, 0xff);
                break;
            case 1:
                FUN_00282bfc(0, ~0u);
                break;
            }
        }
    }
    return 0;
}
}
