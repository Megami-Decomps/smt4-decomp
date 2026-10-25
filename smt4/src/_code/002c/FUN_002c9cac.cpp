/* NON_MATCHING: first-frame and resumed-frame wait branches are laid out differently. */
#include "common.h"
#include "shard/FUN_002b89a4.h"

extern "C" {
u32 scrGetArg(u32);
s32 scrGetCommandFrame(void);
s32 FUN_002c1d5c(void);
void FUN_00282bfc(u32, u32);
void slotSetRequest(u32, u32, u32);

// Begin a slot request on the first frame and wait for completion on later frames.
u32 FUN_002c9cac(u32 argument)
{
    u32 value = scrGetArg(argument);
    if (scrGetCommandFrame() != 0) {
        if (FUN_002b89a4(0))
            return 1;
        if (FUN_002c1d5c()) {
            u32 mode = scrGetArg(0);
            if (mode == 0)
                FUN_00282bfc(0, 0xff);
            else if (mode == 1)
                FUN_00282bfc(0, ~0u);
        }
    } else {
        u32 mode = scrGetArg(0);
        if (mode == 0)
            slotSetRequest(0, value, 0xff);
        else if (mode == 1)
            slotSetRequest(0, value, ~0u);
        else
            return 1;
    }
    return 0;
}
}
