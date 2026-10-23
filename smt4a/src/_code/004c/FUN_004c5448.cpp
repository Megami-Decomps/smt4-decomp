/* NON_MATCHING: mask word loads, native ID getter instructions and shared zero-modifier branches differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/Table04Record.h"
#include "gamedata/DevilRecordA.h"
#include "shard/W9_W9Match7_ModifierLists.h"
struct IdOwner;
/* Modifier lists lie beyond the common skill-table prefix. */
union BattleModifierSkillView {
    Table04Record skill;
    AttributeModifierLists modifiers;
    struct {
        u8 unk00[0x26];
        u16 category;
    } classification;
};
struct BattleModifierCategoryMasks {
    u8 unk00[8];
    u64 pad;
    u8 unk10[8];
    u64 equipment;
    u64 innate;
};
extern "C" {
extern BattleModifierCategoryMasks DAT_005713f0;
BtlMainStateA *btlGetMainState(void);
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, u32 id);
BattleModifierSkillView *dataTable04FindById(u32 id);
s32 padGetMappedValue(s32 id);
s32 FUN_002efc44(const AttributeModifierLists *record, s32 count, s32 kind);
s32 FUN_0034a304(const AttributeModifierLists *record, s32 count, s32 kind);
s32 FUN_004bd098(IdOwner *owner, u32 id);
DevilRecordA *FUN_00184310(u32 id);
}
static inline s32 nativeCategoryModifier(const BtlCombatantEntryA *entry, const BattleModifierSkillView *skill)
{
    u16 category = skill->classification.category;
    if (category < 18) {
        const DevilTableRecordA *record = reinterpret_cast<const DevilTableRecordA *>(FUN_00184310(entry->id));
        if (record)
            return record->categoryModifiers.values[category];
    }
    return 0;
}
extern "C" s32 FUN_004c5448(u32 entryId, u32 skillId)
{
    BtlCombatantEntryA *entry = FUN_003f0e20(btlGetMainState(), entryId);
    u64 flags = entry->flags;
    if (flags & DAT_005713f0.pad) {
        const BattleModifierSkillView *skill = dataTable04FindById(skillId);
        if (skill)
            return FUN_002efc44(&skill->modifiers, padGetMappedValue(skillId), 1);
    } else if (flags & DAT_005713f0.equipment) {
        const BattleModifierSkillView *skill = dataTable04FindById(skillId);
        if (skill) {
            s32 first = FUN_0034a304(&skill->modifiers, FUN_004bd098(reinterpret_cast<IdOwner *>(entry->secondaryRecord), skillId), 1);
            s32 second = FUN_0034a304(&skill->modifiers, FUN_004bd098(reinterpret_cast<IdOwner *>(entry->secondaryRecord), skillId), 5);
            return first + second;
        }
    } else if (flags & DAT_005713f0.innate) {
        const BattleModifierSkillView *skill = dataTable04FindById(skillId);
        if (skill) {
            s32 first = FUN_0034a304(&skill->modifiers, nativeCategoryModifier(entry, skill), 1);
            s32 second = FUN_0034a304(&skill->modifiers, nativeCategoryModifier(entry, skill), 5);
            return first + second;
        }
    }
    return 0;
}
