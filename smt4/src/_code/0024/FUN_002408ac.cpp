/* NON_MATCHING: action completion counting and cleanup branches are shared differently. */
/* Counts outstanding battle actions before advancing the cleanup state machine. */
#include "battle/btlAction.h"
#include "shard/W4_Match6_BtlEntry.h"

extern "C" {
void FUN_0023f410(BtlMainState *state, u32 first, u32 second, ...);
void FUN_0023f500(u32 *phase, BtlMainState *state);
void FUN_0023f79c(BtlMainState *state, u32 flags);
u32 FUN_0023fae0(BtlMainState *state, u32 mode);

void FUN_002408ac(u32 *phase, BtlMainState *state)
{
    if (state->battleFlags & 0x20) {
        FUN_0023f410(state, 1, 1, 0);
    } else {
        FUN_0023f410(state, 1, 1);
    }
    *phase = 8;
    if (FUN_0023fae0(state, 1)) {
        FUN_0023f79c(state, 0x400);
        for (u32 i = 4; i < 0x36; ++i) {
            u32 status = state->actions.records[i].status;
            if ((status & 1) && (status & 0x80) && (status & 0x400)) {
                ++state->actions.completedCount;
            }
        }
        *phase = 10;
        FUN_0023f500(phase, state);
    }
}
}
