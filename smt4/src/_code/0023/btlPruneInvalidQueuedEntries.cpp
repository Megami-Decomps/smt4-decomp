/* NON_MATCHING: the control flow and instructions match; retail keeps the entries-pointer address in ip and the turn's entry index in r4, the build swaps them (r4/ip) and so renumbers the flag registers. */
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"

extern "C" {

/* Empties every turn-order slot whose entry is no longer active or is blocked. */
void btlPruneInvalidQueuedEntries(BtlMainState *state)
{
    for (s32 i = 0; i < 12; i++) {
        s32 entry = state->turnOrder.order[i];
        if (entry >= 0) {
            u32 flags = state->entries[entry].flags;
            if ((flags & BTL_ENTRY_FLAG_ACTIVE) == 0) {
                state->turnOrder.order[i] = -1;
            } else if (flags & BTL_ENTRY_FLAG_BLOCKED) {
                state->turnOrder.order[i] = -1;
            }
        }
    }
}

} /* extern "C" */
