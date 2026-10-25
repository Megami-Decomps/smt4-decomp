/* NON_MATCHING: state/global mask pair-load selection and global-base relocation addend differ from retail. */
#include "battle/BtlMainAccess.h"

extern "C" {
extern BtlMainA g_btlMain;

// Activity is present when either state index or a currently enabled mask bit is set.
s32 FUN_003e7adc(BtlMainStateA *state)
{
    if (state->activity.first < 0) {
        u64 mask = state->stateFlags64.bits;
        u64 enabled = (u64)g_btlMain.activeMask.words[0] |
                      ((u64)g_btlMain.activeMask.words[1] << 32);
        if ((mask & enabled) == 0 && state->activity.second < 0) {
            return 0;
        }
    }
    return 1;
}
}
