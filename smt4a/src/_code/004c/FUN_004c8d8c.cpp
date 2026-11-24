/* NON_MATCHING: retail splits the first mask load and loads the fallback category before choosing its override. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlHelp.h"

extern "C" {
extern BtlHelpGlobalsA g_btlHelp;

/* Submits a help message only while no blocking battle state or transition is active. */
u32 FUN_004c8d8c(s32 message, const void *combatant, u32 options)
{
    BtlMainStateA *battle = btlGetMainState();
    const BtlHelpGlobalsA *help = &g_btlHelp;
    if ((battle->stateFlags64.bits & help->blockedStates) ||
        (battle->stateFlags64.bits & help->blockedTransitions)) {
        return 0;
    }
    s32 category = combatant != NULL ? 13 : -1;
    return (u32)FUN_00200a68(3, message, 0, 0, combatant, 0, category, options);
}
} /* extern "C" */
