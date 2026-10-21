#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
u32 FUN_00203d74(void);
void FUN_00318174(s32 portrait, s32 transition, s32 duration);

// Clamp bustup transition duration in the fast mode before applying the request.
u32 bustupSetTransitionScriptCommand(void)
{
    s32 portrait = scrGetArg(0);
    s32 transition = scrGetArg(1);
    s32 duration = scrGetArg(2);
    if (FUN_00203d74() != 0 && duration > 4) {
        duration = 4;
    }
    FUN_00318174(portrait, transition, duration);
    return 1;
}
}
