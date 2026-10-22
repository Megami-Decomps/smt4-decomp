/* NON_MATCHING: retail zeroes the loop index before calling btlGetMainState (only an index declared ahead of the call reproduces it). */
#include "battle/btlMain.h"
#include "battle/btlAction.h"

extern "C" {

void FUN_002451c4(s32 a, s32 b, BtlActionRecord *action, s32 alpha, s32 frames, s32 c);
BtlMainState *btlGetMainState(void);
s32 scrGetArg(u32 index);

/* Script command: fades (alpha 0xff when argument 0 is set, else 0, over 20 frames) every active
 * action record with status bits 0x1/0x80/0x400 that is not held by status 0x10 with state 2. */
u32 FUN_00312730(void)
{
    s32 show = scrGetArg(0);
    BtlMainState *state = btlGetMainState();

    for (s32 i = 0; i < 109; i++) {
        BtlActionRecord *action = &state->actions[i];
        if ((action->status & 0x1) && (action->status & 0x80) && (action->status & 0x400) &&
            (!(action->status & 0x10) || !(action->stateFlags & 2))) {
            if (!show) {
                FUN_002451c4(0, 0, action, 0, 20, 0);
            } else {
                FUN_002451c4(0, 0, action, 0xff, 20, 0);
            }
        }
    }
    return 1;
}

} /* extern "C" */
