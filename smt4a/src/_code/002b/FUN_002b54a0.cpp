/* NON_MATCHING: action records recovered; armcc combines the 64-bit mask loads and peels the first list iteration, unlike retail's scalar loads and compact loop. */
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {
// Check the combatant's single action or available action list for a matching skill.
u32 FUN_002b54a0(const BtlCombatantEntryA* combatant, s32 skill)
{
    if ((combatant->flags & g_btlCandidateMasks.unavailable) != 0 ||
        (g_btlCandidateMasks.singleAction & combatant->flags) != 0) {
        s16 kind = combatant->actionList.single.kind;
        if ((kind == 2 || kind == 3) && combatant->actionList.single.id == skill) {
            return 1;
        }
    } else {
        s32 i = 0;
        do {
            s16 kind = combatant->actionList.available[i].kind;
            if ((kind == 2 || kind == 3) && combatant->actionList.available[i].id == skill) {
                return 1;
            }
            ++i;
        } while (i < 10);
    }
    return 0;
}
}
