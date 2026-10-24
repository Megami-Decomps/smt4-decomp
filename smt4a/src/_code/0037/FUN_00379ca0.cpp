/* NON_MATCHING: same calls and flow (including the shared `mov r0, #0` argument); retail lays the FUN_00163e84 retry block out after the frame-0 code (jumping back to it), armcc here keeps it inline. */
#include "common.h"

extern "C" {

s32 scrGetCommandFrame(void);
u32 scrGetArg(u32 index);
s32 FUN_00163e84(u32 arg);
s32 FUN_00162ea4(void);
void FUN_00212204(s32 arg);
void FUN_003d54f8(s32 mode, u32 value);

/* Script command: waits on the fade; on the first frame (no fade running) applies arg 0. */
u32 FUN_00379ca0(void)
{
    if (scrGetCommandFrame() != 0) {
        if (FUN_00162ea4() != 0) {
            FUN_00212204(0);
            return 1;
        }
        if (FUN_00163e84(0) != 0) {
            return 1;
        }
    }
    if (FUN_00162ea4() != 0) {
        return 1;
    }
    FUN_003d54f8(0, scrGetArg(0));
    return 0;
}

} /* extern "C" */
