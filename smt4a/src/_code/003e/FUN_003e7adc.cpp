#include "battle/BtlMainAccess.h"

extern "C" {
extern BtlMainGlobalsA g_btlMain;

// Activity is present when either state index or a currently enabled mask bit is set.
s32 FUN_003e7adc(BtlMainStateA *state)
{
    if (state->activity.first < 0) {
        if (!(state->stateFlags64.bits & g_btlMain.fixedScore.mask) && state->activity.second < 0) {
            return 0;
        }
    }
    return 1;
}
}
