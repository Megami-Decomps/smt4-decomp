/* NON_MATCHING: 45 lines (62 vs 61 rows); btlRosterGroupRange (as sibling btlHasDuplicateEnemyDemonId), loop index r0, second half (actorCategories/selectionIndex/excluded/id/orrseq) and epilogue match retail, remaining: initial r1/r0 setup and first two 64-bit mask loads use ldm instead of two ldrs. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "battle/BtlGlobals.h"
#include "util/SlotRangeSelect.h"

extern "C" u32 FUN_003f0254(BtlMainStateA *state, const BattleRosterRecordA *subject)
{
    if (subject != NULL) {
        const BtlCombatantEntryA *selected = &state->entries[subject->motion.unitIndex];
        const BtlMainGlobalsA *btl = &g_btlMain;
        s32 first = 0;
        s32 count = 0;
        btlRosterGroupRange(1, first, count);
        for (s32 i = first; i < first + count; ++i) {
            const BtlCombatantEntryA *candidate = &state->entries[i];
            if (candidate != NULL &&
                (btl->combatantMasks.required & candidate->flags) != 0 &&
                (candidate->flags & btl->exclusionMask) == 0 &&
                (candidate->flags & btl->actorCategories[2]) != 0 &&
                candidate->selectionIndex != selected->selectionIndex &&
                (candidate->flags & btl->compatibility.excluded) == 0 &&
                candidate->data.id == selected->data.id &&
                (candidate->flags & btl->compatibility.excluded) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
