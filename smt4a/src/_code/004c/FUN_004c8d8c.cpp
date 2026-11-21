/* NON_MATCHING: u64 masks and the early return match retail except the second mask pair: retail reads it with add #40 + ldm and ANDs high-word first; armcc here uses two ldr. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlHelp.h"

extern "C" {
u32 FUN_00200a68(s32 kind, s32 message, s32 arg2, s32 arg3, s32 mode, s32 arg5, s32 category, u32 options);
extern BtlHelpGlobalsA g_btlHelp;

// Submit a help message only while no blocking battle state or transition is active.
u32 FUN_004c8d8c(s32 message, s32 mode, u32 options)
{
    BtlMainStateA *battle = btlGetMainState();
    if ((battle->stateFlags64.bits & g_btlHelp.blockedStates) ||
        (battle->stateFlags64.bits & g_btlHelp.blockedTransitions)) {
        return 0;
    }
    s32 category = -1;
    if (mode) {
        category = 13;
    }
    return FUN_00200a68(3, (s16)message, 0, 0, mode, 0, category, options);
}
}
