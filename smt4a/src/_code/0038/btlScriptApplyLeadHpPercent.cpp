/* NON_MATCHING: the battle-mask high word and the lead combatant's low flag word use swapped registers
 * (a cached reference to the lead entry matches, but it is a single-use local). */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "script/ScriptArgs.h"
#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {
u32 btlRecoverHpMpByPercent(s32, u32, u32, BattleRosterRecordA *, u32, s32, s32, u32,
                 u32, s32, s32, s32, u32, u32, s32);

/* Applies the scripted HP percentage to the lead combatant when the active mask is clear. */
u32 btlScriptApplyLeadHpPercent()
{
    s32 percent = scrGetArg(0);
    if (!(btlGetMainState()->entries[0].flags & g_battleMaskPresets.eligibility.active)) {
        btlRecoverHpMpByPercent(0, 0, 0, btlGetMainState()->roster, 0, percent,
                     -1, -1, 2, -1, -1, -1, 0, 0, 0);
    }
    return 1;
}
} /* extern "C" */
