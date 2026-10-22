/* NON_MATCHING: compiler hoists global mask loads and spills them, and the redundant retail final mask OR is omitted; 68 built versus 62 retail rows. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

extern "C" BtlMainGlobalsA g_btlMain;

extern "C" u32 FUN_003f0254(BtlMainStateA *state, const BattleRosterRecordA *subject)
{
    if (subject) {
        const BtlCombatantEntryA *selected = &state->entries[subject->motion.unitIndex];
        for (s32 index = 4; index < 54; ++index) {
            const BtlCombatantEntryA *candidate = &state->entries[index];
            if (candidate) {
                u64 flags = candidate->flags;
                if ((flags & g_btlMain.combatantMasks.required) &&
                    !(flags & g_btlMain.exclusionMask) &&
                    (flags & g_btlMain.actorCategories[2]) &&
                    candidate->indexView.selectionIndex != selected->indexView.selectionIndex &&
                    !(flags & g_btlMain.compatibility.excluded) &&
                    candidate->id == selected->id) {
                    return 0;
                }
            }
        }
    }
    return 1;
}
