/* NON_MATCHING: same calls and flow (including the shared `mov r0, #0` argument); retail lays the FUN_002b89a4 retry block out after the frame-0 code (jumping back to it), armcc here keeps it inline. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

s32 scrGetCommandFrame(void);
u32 scrGetArg(u32 index);
s32 FUN_002b89a4(u32 arg);
s32 FUN_002c1d5c(void);
void FUN_002a03d8(s32 mode, u32 value);

/* Script command: waits on the fade; on the first frame (no fade running) applies arg 0. */
u32 FUN_002f4a74(void)
{
    if (scrGetCommandFrame() != 0) {
        if (FUN_002c1d5c() != 0) {
            FUN_00287728(0);
            return 1;
        }
        if (FUN_002b89a4(0) != 0) {
            return 1;
        }
    }
    if (FUN_002c1d5c() != 0) {
        return 1;
    }
    FUN_002a03d8(0, scrGetArg(0));
    return 0;
}

} /* extern "C" */
