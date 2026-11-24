/* NON_MATCHING: the tail keeps the tab in r2 and its bit in r0 in retail (r0 and r2 in the build).
 * Retail merges the flag before the built-tab test, and its additional moveq shifts two branches. */
#include "quest_center/qcUtility.h"
#include "util/Random.h"

extern "C" {

/* Exhaust all four choices before restarting, without repeating the previous choice. */
u32 qcTabListPickRandomTab(QcTabListState *state)
{
    if (state->flags == 0xf)
        state->flags = 0;
    s32 skip = randNextInRange(3);
    u8 used = state->flags;
    bool searching = true;
    while (searching) {
        for (s32 i = 0; i < 4; i++) {
            if (!(used & (1 << i))) {
                if (skip == 0) {
                    if (state->tab != i) {
                        state->tab = i;
                        searching = false;
                        break;
                    }
                } else {
                    --skip;
                }
            }
        }
    }
    u32 choice = state->tab;
    u32 bit = 1u << choice;
    if (bit & state->builtTabs)
        choice = 5;
    state->flags = used | bit;
    return choice;
}

} /* extern "C" */
