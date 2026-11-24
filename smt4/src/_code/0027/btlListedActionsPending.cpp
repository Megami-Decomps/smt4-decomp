/* NON_MATCHING: the kind and the units base trade r4/r0, and the kind-5 branch is inverted. */
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"

extern "C" {
/* Checks for an eligible action: kind 5 after the result, or an action whose unit isn't barred from acting. */
u32 btlListedActionsPending(BtlMainState *state)
{
    if (state->listedActions.count <= 0)
        return 0;
    for (s32 index = 0; index < state->listedActions.count; ++index) {
        s32 kind = state->listedActions.actions[index].kind;
        if (state->core.result == 0) {
            if (kind != 4 || (state->entries[state->listedActions.actions[index].unitIndex].data.statusFlags & 0x1C0) == 0) {
                return 1;
            }
        } else if (kind == 5) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
