/* NON_MATCHING: retail reads the combatant id as ldrsh (add r7,r4,#256; ldrsh [r7,#102]) then uxth because FUN_00184310 takes a u16; the shared DevilRecordA.h declares u32 (194 users) so the build loads ldrh via a pooled offset; mask loads (ldr pair vs ldm) and shared zero-modifier branches also differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/Table04Record.h"
#include "gamedata/DevilRecordA.h"
#include "shard/W9_W9Match7_ModifierLists.h"
#include "code/Code0019_Smt4a.h"
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
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, u32 id);
s32 FUN_002efc44(const AttributeModifierLists *record, s32 count, s32 kind);
s32 FUN_0034a304(const AttributeModifierLists *record, s32 count, s32 kind);
s32 FUN_004bd098(IdOwner *owner, u32 id);
DevilRecordA *FUN_00184310(u32 id);
}
/* The combatant's id as retail reads it: a signed halfword at 0x166, passed on as a u16. */
struct BtlCombatantIdView {
    u8 unk000[0x166];
    s16 id;
};
static inline s32 nativeCategoryModifier(const BtlCombatantEntryA *entry, const BattleModifierSkillView *skill)
{
    u16 category = skill->classification.category;
    if (category < 18) {
        const DevilTableRecordA *record = reinterpret_cast<const DevilTableRecordA *>(
            FUN_00184310((u16)reinterpret_cast<const BtlCombatantIdView *>(entry)->id));
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
        const BattleModifierSkillView *skill = (const BattleModifierSkillView *)dataTable04FindById(skillId);
        if (skill)
            return FUN_002efc44(&skill->modifiers, padGetMappedValue(skillId), 1);
    } else if (flags & DAT_005713f0.equipment) {
        const BattleModifierSkillView *skill = (const BattleModifierSkillView *)dataTable04FindById(skillId);
        if (skill) {
            s32 first = FUN_0034a304(&skill->modifiers, FUN_004bd098(reinterpret_cast<IdOwner *>(entry->secondaryRecord), skillId), 1);
            s32 second = FUN_0034a304(&skill->modifiers, FUN_004bd098(reinterpret_cast<IdOwner *>(entry->secondaryRecord), skillId), 5);
            return first + second;
        }
    } else if (flags & DAT_005713f0.innate) {
        const BattleModifierSkillView *skill = (const BattleModifierSkillView *)dataTable04FindById(skillId);
        if (skill) {
            s32 first = FUN_0034a304(&skill->modifiers, nativeCategoryModifier(entry, skill), 1);
            s32 second = FUN_0034a304(&skill->modifiers, nativeCategoryModifier(entry, skill), 5);
            return first + second;
        }
    }
    return 0;
}
