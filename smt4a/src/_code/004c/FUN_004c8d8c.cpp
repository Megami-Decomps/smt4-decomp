/* NON_MATCHING: compiler materializes the stateFlags address and mask halves differently, and folds the category assignment into conditional moves. */
#include "battle/btlMain.h"
#include "battle/btlHelp.h"

extern "C" {
BtlMainStateA *btlGetMainState();
u32 FUN_00200a68(s32 kind, s32 message, s32 arg2, s32 arg3, s32 mode, s32 arg5, s32 category, u32 options);
extern BtlHelpGlobalsA g_btlHelp;

// Submit a help message only while no blocking battle state or transition is active.
u32 FUN_004c8d8c(s16 message, s32 mode, u32 options)
{
    BtlMainStateA *battle = btlGetMainState();
    if (((g_btlHelp.blockedStates[0] & battle->stateFlags.words[0]) |
         (g_btlHelp.blockedStates[1] & battle->stateFlags.words[1])) == 0 &&
        ((g_btlHelp.blockedTransitions[1] & battle->stateFlags.words[1]) |
         (g_btlHelp.blockedTransitions[0] & battle->stateFlags.words[0])) == 0) {
        s32 category = mode ? 13 : -1;
        return FUN_00200a68(3, message, 0, 0, mode, 0, category, options);
    }
    return 0;
}
}
