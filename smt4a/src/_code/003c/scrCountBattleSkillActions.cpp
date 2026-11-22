/* NON_MATCHING: the loop, the mask tests and the inlined FUN_003249c0 body follow retail's shape; retail's frame is 60 bytes with the slot count at sp and the first slot at sp+12 (reloaded every iteration), here 12 bytes, and it loads the entry's flags with ldm and keeps them in r0/r2 where this build uses ldrd into r2/r3. */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/SlotRangeSelect.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 btlResolveEntryChoice(s32);
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *);
s32 FUN_003249c0(const BtlCombatantEntryA *entry, s32 id);
void scrSetResult(s32);
}

/* FUN_003249c0's body, inlined here: counts the entry's kind-two or kind-three actions with the id, from its
 * single action when it is masked, otherwise from its ten available ones. */
static __inline s32 countMatchingActions(const BtlCombatantEntryA *entry, s32 id)
{
    s32 count = 0;
    if ((entry->flags & g_btlCandidateMasks.unavailable) != 0 ||
        (entry->flags & g_btlCandidateMasks.singleAction) != 0) {
        if ((entry->data.actionList.single.kind == 2 || entry->data.actionList.single.kind == 3) &&
            entry->data.actionList.single.id == id)
            return 1;
    } else {
        for (s32 i = 0; i < 10; ++i) {
            if ((entry->data.actionList.available[i].kind == 2 || entry->data.actionList.available[i].kind == 3) &&
                entry->data.actionList.available[i].id == id)
                ++count;
        }
    }
    return count;
}

/* Counts the skill's queued actions over the requested eligible combatants and the auxiliary unit. */
extern "C" u32 scrCountBattleSkillActions()
{
    s32 skill = scrGetArg(0);
    s32 total = 0;
    s32 first, count;
    btlGetEntryChoiceRange(btlResolveEntryChoice(scrGetArg(1)), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if (!(entry->flags & g_btlCandidateMasks.unavailable) && (entry->flags & g_btlCandidateMasks.required) &&
            !(entry->flags & g_btlCandidateMasks.excluded)) {
            total += countMatchingActions(entry, skill);
        }
    }
    if (btlGetMainState()->unk4cd1) {
        BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry)
            total += FUN_003249c0(entry, skill);
    }
    scrSetResult(total);
    return 1;
}
