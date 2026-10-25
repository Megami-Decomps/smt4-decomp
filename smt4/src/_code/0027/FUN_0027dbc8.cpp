/* NON_MATCHING: only scheduling of the target load / constant setup before the call differs (flag tests and the u8 option now match). */
#include "battle/btlHelp.h"
#include "battle/BtlMainAccess.h"

extern "C" {
// Submit a request for the current target unless either battle guard flag is set.
u32 FUN_0027dbc8(u32 request, u8 value)
{
    BtlMainStateExt* state = btlGetMainStateExt();
    u32 flags = state->flags44A0;

    if ((flags & 0x40) != 0) {
        return 0;
    }
    if ((flags & 0x100) != 0) {
        return 0;
    }
    u32 target = state->target;
    return (u32)FUN_0022a4ac(0, 0, request, target, NULL, value, -1);
}
}
