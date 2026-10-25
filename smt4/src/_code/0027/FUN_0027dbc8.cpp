/* NON_MATCHING: only scheduling of the target load / constant setup before the call differs (flag tests and the u8 option now match). */
#include "common.h"
#include "battle/btlHelp.h"

struct BattleRequestState {
    u8 unk0000[0x2230]; // 0x0000
    u32 target;          // 0x2230
    u8 unk2234[0x226c]; // 0x2234
    u32 flags;           // 0x44a0
};

extern "C" {
BattleRequestState* btlGetMainState();

// Submit a request for the current target unless either battle guard flag is set.
u32 FUN_0027dbc8(u32 request, u8 value)
{
    BattleRequestState* state = btlGetMainState();
    u32 flags = state->flags;

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
