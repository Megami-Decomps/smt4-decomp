/* NON_MATCHING: battle-state flag/context loads use different addressing and dispatch registers. */
#include "battle/btlHelp.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;
void *btlGetMainState(void);
u32 FUN_00200a68(s32, s32, u32, u32, s32, u32, u32, s32);
u32 FUN_004c8e30(u32, s32, u32);

// Dispatch a selected help request or use the immediate path when no mode is specified.
u32 FUN_004c909c(u32 request, s32 mode, s32 index, u32 argument)
{
    struct HelpDispatchStateView {
        u8 unk0000[0x2268];
        u32 context; // 0x2268
        u8 unk226c[0x2334];
        u32 flags[2]; // 0x45a0
    };
    HelpDispatchStateView *state = static_cast<HelpDispatchStateView *>(btlGetMainState());
    if (((g_btlHelp.blockedStates[0] & state->flags[0]) |
         (g_btlHelp.blockedStates[1] & state->flags[1])) != 0 ||
        ((state->flags[0] & g_btlHelp.blockedTransitions[0]) |
         (state->flags[1] & g_btlHelp.blockedTransitions[1])) != 0)
        return 0;
    if (mode != 0)
        return FUN_00200a68(4, static_cast<s16>(index), request, state->context, mode, argument, 7, 0);
    return FUN_004c8e30(request, 0, argument);
}
}
