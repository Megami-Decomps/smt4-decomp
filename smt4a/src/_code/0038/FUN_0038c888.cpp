/* NON_MATCHING: register allocation of the mask AND/ORR chain differs (the active-entry byte already folds with the s8 flag). */
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "gamedata/BattleUnitSkills.h"
#include "gamedata/Table00.h"
#include "gamedata/Table04Record.h"
#include "util/SlotRangeSelect.h"

extern "C" {
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);
u32 FUN_0027281c(BtlCombatantEntryA *unit);
s32 btlResolveEntryChoice(s32 choice);
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
Table00Record *dataTable00FindById(u32 id);
Table04Record *dataTable04FindById(u32 id);
}

/* Whether any of the unit's skill sources lists a category-three skill. */
static inline u32 unitHasCategoryThreeSkill(BtlCombatantEntryA *unit)
{
    if (unit->record != NULL) {
        for (s32 i = 0; i < 8; ++i) {
            Table04Record *skill = dataTable04FindById(unit->record->skills[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    if (unit->secondaryRecord != NULL) {
        for (s32 i = 0; i < 8; ++i) {
            Table04Record *skill = dataTable04FindById(unit->secondaryRecord->skills[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    if (unit->candidate.record != NULL) {
        Table00Record *record = dataTable00FindById(unit->id);
        for (s32 i = 0; i < 8; ++i) {
            Table04Record *skill = dataTable04FindById(record->skillList.ids[i]);
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

    FUN_00301a08(btlResolveEntryChoice(scrGetArg(1)), &first, &count);
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
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && entry->id == id && FUN_0027281c(entry) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

}
