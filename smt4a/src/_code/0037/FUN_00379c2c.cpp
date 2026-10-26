#include "script/ScriptArgs.h"

extern "C" {

s32 FUN_00203d74(void);
s32 FUN_00162ea4(void);
void FUN_00212204(u32 channel);
void FUN_003d54f8(u32 channel, s32 steps);

// Script command: fade channel 0, 1 or both (steps clamped to 4 while FUN_00203d74 is true).
u32 FUN_00379c2c(void)
{
    s32 steps = scrGetArg(1);
    if (FUN_00203d74() != 0 && steps > 4) {
        steps = 4;
    }
    s32 mode = scrGetArg(0);
    if (mode == 0 || mode == 1) {
        if (FUN_00162ea4() != 0) {
            FUN_00212204(0);
            FUN_00212204(1);
        } else {
            FUN_003d54f8(0, steps);
            FUN_003d54f8(1, steps);
        }
    }
    return 1;
}

} /* extern "C" */
