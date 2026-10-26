/* NON_MATCHING: mask-word load grouping (retail: two ldr for the first pair, ldm for the second) and call-argument scheduling differ; u64 state flags, s16 message cast and category default match */
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
    u64 flags = battle->stateFlags64.bits;
    u32 low = (u32)flags;
    u32 high = (u32)(flags >> 32);
    if (((g_btlHelp.blockedStates[0] & low) | (g_btlHelp.blockedStates[1] & high)) == 0 &&
        ((g_btlHelp.blockedTransitions[0] & low) | (g_btlHelp.blockedTransitions[1] & high)) == 0) {
        s32 category = -1;
        if (mode) {
            category = 13;
        }
        return FUN_00200a68(3, (s16)message, 0, 0, mode, 0, category, options);
    }
    return 0;
}
}
