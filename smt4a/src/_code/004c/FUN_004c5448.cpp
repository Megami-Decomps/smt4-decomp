/* NON_MATCHING: only the first mask test differs: retail tests the mapped-kind mask in r3/ip where the build uses ip/r5 (6 lines). */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/NkmBaseRecordA.h"
#include "battle/BtlSkillModifiers.h"
#include "shard/W9_W9Match7_ModifierLists.h"
#include "code/Code0019_Smt4a.h"
#include "battle/BtlGlobals.h"
#include "battle/BattleSkillResponseMasks.h"
struct IdOwner;
/* Modifier lists lie beyond the common skill-table prefix. */
union BattleModifierSkillView {
    SkillDataRecordA skill;
    AttributeModifierLists modifiers;
    struct {
        u8 unk00[0x26];
        u16 category;
    } classification;
};
extern "C" {
s32 FUN_002efc44(const AttributeModifierLists *record, s32 count, s32 kind);
s32 FUN_0034a304(const AttributeModifierLists *record, s32 count, s32 kind);
s32 FUN_004bd098(IdOwner *owner, u32 id);
}
/* The combatant's id as retail reads it: a signed halfword at 0x166. */
struct BtlCombatantIdView {
    u8 unk000[0x166];
    s16 id;
};
extern "C" s32 FUN_004c5448(u32 entryId, u32 skillId)
{
    BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), entryId);
    if (entry->flags & g_btlSkillResponseMasks.mappedKind) {
        const BattleModifierSkillView *skill = (const BattleModifierSkillView *)skillDataFindById(skillId);
        if (skill)
            return FUN_002efc44(&skill->modifiers, padGetMappedValue(skillId), 1);
    } else if (entry->flags & g_btlSkillResponseMasks.sourceKind) {
        const BattleModifierSkillView *skill = (const BattleModifierSkillView *)skillDataFindById(skillId);
        if (skill) {
            s32 first = FUN_0034a304(&skill->modifiers, FUN_004bd098(reinterpret_cast<IdOwner *>(entry->data.secondaryRecord), skillId), 1);
            s32 second = FUN_0034a304(&skill->modifiers, FUN_004bd098(reinterpret_cast<IdOwner *>(entry->data.secondaryRecord), skillId), 5);
            return first + second;
        }
    } else if (g_btlSkillResponseMasks.demonKind & entry->flags) {
        const BattleModifierSkillView *skill = (const BattleModifierSkillView *)skillDataFindById(skillId);
        if (skill) {
            s32 first = FUN_0034a304(&skill->modifiers, demonCategoryModifier(reinterpret_cast<const BtlCombatantIdView *>(entry)->id, &skill->skill), 1);
            s32 second = FUN_0034a304(&skill->modifiers, demonCategoryModifier(reinterpret_cast<const BtlCombatantIdView *>(entry)->id, &skill->skill), 5);
            return first + second;
        }
    }
    return 0;
}
