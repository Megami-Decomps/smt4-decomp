#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
u32 inputFastForwardActive(void);
void bustupCutAnimStartTransition(s32 portrait, s32 transition, s32 duration);

// Clamp bustup transition duration in the fast mode before applying the request.
u32 bustupSetTransitionScriptCommand(void)
{
    s32 portrait = scrGetArg(0);
    s32 transition = scrGetArg(1);
    s32 duration = scrGetArg(2);
    if (inputFastForwardActive() != 0 && duration > 4) {
        duration = 4;
    }
    bustupCutAnimStartTransition(portrait, transition, duration);
    return 1;
}
}
