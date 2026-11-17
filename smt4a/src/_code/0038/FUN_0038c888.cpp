#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "gamedata/BattleUnitSkills.h"
#include "gamedata/NkmEnemyRecord.h"
#include "gamedata/SkillDataRecord.h"
#include "util/SlotRangeSelect.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *state);
u32 btlEntryHasCategoryThreeSkill(BtlCombatantEntryA *unit);
s32 btlResolveEntryChoice(s32 choice);
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
}

/* Whether any of the unit's skill sources lists a category-three skill. */
static inline u32 unitHasCategoryThreeSkill(BtlCombatantEntryA *unit)
{
    if (unit->record != NULL) {
        for (s32 i = 0; i < 8; ++i) {
            SkillDataRecordA *skill = skillDataFindById(unit->record->skills[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    if (unit->secondaryRecord != NULL) {
        for (s32 i = 0; i < 8; ++i) {
            SkillDataRecordA *skill = skillDataFindById(unit->secondaryRecord->skills[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    if (unit->candidate.record != NULL) {
        NkmEnemyRecordA *record = nkmEnemyFindById(unit->id);
        for (s32 i = 0; i < 8; ++i) {
            SkillDataRecordA *skill = skillDataFindById(record->skills[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    return 0;
}

extern "C" {

/* Script query: whether an eligible battle entry with id argument 0 (in the group chosen by argument 1)
 * has a category-three skill, or the special active entry does. */
u32 FUN_0038c888(void)
{
    u32 id = scrGetArg(0);
    s32 first;
    s32 count;

    btlGetEntryChoiceRange(btlResolveEntryChoice(scrGetArg(1)), &first, &count);
    for (s32 index = first; index < first + count; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & g_btlCandidateMasks.unavailable) == 0 &&
            (entry->flags & g_btlCandidateMasks.required) != 0 &&
            (entry->flags & g_btlCandidateMasks.excluded) == 0 && entry->id == id &&
            unitHasCategoryThreeSkill(entry)) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(btlGetMainState());
        if (entry != NULL && entry->id == id && btlEntryHasCategoryThreeSkill(entry) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

}
