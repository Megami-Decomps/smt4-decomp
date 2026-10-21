/* NON_MATCHING: compiler computes the state base twice and hoists its signed active-byte load. */
#include "shard/W6_W6Match2_StatusBytes.h"

// Decode the active, alternate, and pending status bytes.
extern "C" u32 FUN_0039411c(const StatusBytes* status)
{
    const StatusFields& state = status->state;
    if (state.pending != 0) {
        if (state.active == 0) {
            return 0;
        }
    } else if (state.active == 0) {
        return 3;
    }
    return state.alternate != 0 ? 2 : 1;
}
