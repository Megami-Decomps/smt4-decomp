#include "shard/W6_W6Match2_StatusBytes.h"

// Decode the active, alternate, and pending status bytes.
extern "C" u32 statusDecodeActivityState(const StatusBytes* status)
{
    const StatusFields *state = &status->state;
    u8 pending = state->pending;
    s8 active = state->active;
    if (pending != 0) {
        if (active == 0) {
            return 0;
        }
    } else if (active == 0) {
        return 3;
    }
    return state->alternate != 0 ? 2 : 1;
}
