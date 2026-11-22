#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlHelp.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;

// Submit the immediate help request only when neither blocking mask is active.
u32 FUN_004c8e30(u32 request, s32 last, u32 argument)
{
    BtlMainStateA *state = btlGetMainState();
    if ((state->stateFlags64.bits & g_btlHelp.blockedStates) ||
        (state->stateFlags64.bits & g_btlHelp.blockedTransitions))
        return 0;
    u32 context = state->helpMessages.context;
    return (u32)FUN_00200a68(0, 0, request, context, NULL, argument, ~0u, last);
}
}
