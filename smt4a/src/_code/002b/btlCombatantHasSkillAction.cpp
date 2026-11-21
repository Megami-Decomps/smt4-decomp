/* NON_MATCHING: the list loop now matches retail's compact form; remaining: the mask tests' register choice (retail
   reads the flags with ldm into r4/ip and the second mask as two word loads, the build uses ldrd). */
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
/* Checks the combatant's single action or available action list for a matching skill. */
u32 btlCombatantHasSkillAction(const BtlCombatantEntryA* combatant, s32 skill)
{
    if ((combatant->flags & g_btlCandidateMasks.unavailable) != 0 ||
        (combatant->flags & g_btlCandidateMasks.singleAction) != 0) {
        s16 kind = combatant->data.actionList.single.kind;
        if ((kind == 2 || kind == 3) && combatant->data.actionList.single.id == skill) {
            return 1;
        }
    } else {
        for (s32 i = 0; i < 10; ++i) {
            s16 kind = combatant->data.actionList.available[i].kind;
            if ((kind == 2 || kind == 3) && combatant->data.actionList.available[i].id == skill) {
                return 1;
            }
        }
    }
    return 0;
}
}
