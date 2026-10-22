/* NON_MATCHING: retail loads the two mask words from the module base; this source uses a paired load from mask +0x58. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" BtlActionGlobals g_btlAction;

// Remove the action module's transient flag mask from every combatant.
extern "C" void FUN_004e8454(BtlMainStateA **battle)
{
    const u64 mask = g_btlAction.clearedFlags.mask;
    for (s32 i = 0; i < 109; ++i)
        (*battle)->entries[i].flags &= ~mask;
}
