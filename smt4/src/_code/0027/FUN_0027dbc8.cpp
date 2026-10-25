/* NON_MATCHING: compiler merges the two flag tests into one mask and changes the outgoing stack-argument setup. */
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
u32 FUN_0027dbc8(u32 request, u32 value)
{
    BattleRequestState* state = btlGetMainState();
    if ((state->flags & 0x40) == 0 && (state->flags & 0x100) == 0) {
        return (u32)FUN_0022a4ac(0, 0, request, state->target, NULL, value, -1);
    }
    return 0;
}
}
