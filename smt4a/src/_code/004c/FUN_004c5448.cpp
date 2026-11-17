/* NON_MATCHING: retail reads the combatant id as ldrsh (add r7,r4,#256; ldrsh [r7,#102]) then uxth because nkmBaseGetRecord takes a u16; the shared NkmBaseRecordA.h declares u32 (194 users) so the build loads ldrh via a pooled offset; mask loads (ldr pair vs ldm) and shared zero-modifier branches also differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/NkmBaseRecordA.h"
#include "shard/W9_W9Match7_ModifierLists.h"
#include "code/Code0019_Smt4a.h"
#include "battle/BtlGlobals.h"
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
struct BattleModifierCategoryMasks {
    u8 unk00[8];
    u64 pad;
    u8 unk10[8];
    u64 equipment;
    u64 innate;
};
extern "C" {
extern BattleModifierCategoryMasks g_btlSkillResponseMasks;
s32 FUN_002efc44(const AttributeModifierLists *record, s32 count, s32 kind);
s32 FUN_0034a304(const AttributeModifierLists *record, s32 count, s32 kind);
s32 FUN_004bd098(IdOwner *owner, u32 id);
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
        const NkmBaseRecordA *record = reinterpret_cast<const NkmBaseRecordA *>(
            nkmBaseGetRecord((u16)reinterpret_cast<const BtlCombatantIdView *>(entry)->id));
        if (record)
            return record->categoryModifiers[category];
    }
    return 0;
}
extern "C" s32 FUN_004c5448(u32 entryId, u32 skillId)
{
    BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), entryId);
    u64 flags = entry->flags;
    if (flags & g_btlSkillResponseMasks.pad) {
        const BattleModifierSkillView *skill = (const BattleModifierSkillView *)skillDataFindById(skillId);
        if (skill)
            return FUN_002efc44(&skill->modifiers, padGetMappedValue(skillId), 1);
    } else if (flags & g_btlSkillResponseMasks.equipment) {
        const BattleModifierSkillView *skill = (const BattleModifierSkillView *)skillDataFindById(skillId);
        if (skill) {
            s32 first = FUN_0034a304(&skill->modifiers, FUN_004bd098(reinterpret_cast<IdOwner *>(entry->data.secondaryRecord), skillId), 1);
            s32 second = FUN_0034a304(&skill->modifiers, FUN_004bd098(reinterpret_cast<IdOwner *>(entry->data.secondaryRecord), skillId), 5);
            return first + second;
        }
    } else if (flags & g_btlSkillResponseMasks.innate) {
        const BattleModifierSkillView *skill = (const BattleModifierSkillView *)skillDataFindById(skillId);
        if (skill) {
            s32 first = FUN_0034a304(&skill->modifiers, nativeCategoryModifier(entry, skill), 1);
            s32 second = FUN_0034a304(&skill->modifiers, nativeCategoryModifier(entry, skill), 5);
            return first + second;
        }
    }
    return 0;
}
