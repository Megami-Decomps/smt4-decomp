/* NON_MATCHING: battle-state flag/context loads use different addressing and dispatch registers. */
#include "battle/BtlMainAccess.h"
#include "battle/btlHelp.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
u32 FUN_00200a68(s32, s32, u32, u32, s32, u32, u32, s32);
u32 FUN_004c8e30(u32, s32, u32);

// Dispatch a selected help request or use the immediate path when no mode is specified.
u32 FUN_004c909c(u32 request, s32 mode, s32 index, u32 argument)
{
    BtlMainStateA *state = btlGetMainState();
    if (((g_btlHelp.blockedStates[0] & state->stateFlags.words[0]) |
         (g_btlHelp.blockedStates[1] & state->stateFlags.words[1])) != 0 ||
        ((state->stateFlags.words[0] & g_btlHelp.blockedTransitions[0]) |
         (state->stateFlags.words[1] & g_btlHelp.blockedTransitions[1])) != 0)
        return 0;
    if (mode != 0)
        return FUN_00200a68(4, static_cast<s16>(index), request, state->helpMessages.context, mode, argument, 7, 0);
    return FUN_004c8e30(request, 0, argument);
}
}
