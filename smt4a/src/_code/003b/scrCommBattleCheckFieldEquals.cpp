#include "common.h"
#include "battle/BtlMainAccess.h"

extern "C" {

extern s32 scrGetArg(u32 index);
extern void scrSetResult(s32 value);

/* Script command: pushes whether the battle state's field 0xec (argument 0 non-zero) or 0xf0 equals argument 1; returns 1. */
u32 scrCommBattleCheckFieldEquals(void)
{
    s32 which = scrGetArg(0);
    s32 value = scrGetArg(1);
    BtlMainStateA *state = btlGetMainState();

    if (which == 0) {
        if (state->activity.currentAction == value) {
            scrSetResult(1);
            return 1;
        }
    } else if (state->activity.first == value) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
