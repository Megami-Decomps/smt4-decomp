#include "battle/BtlEntryA.h"
#include "gamedata/BattleUnitSkills.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/ConsumableRecordA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

enum {
    ACTION_ATTACK = 1,
    ACTION_SKILL = 2,
    ACTION_SKILL_ALTERNATE = 3,
    ACTION_ITEM = 8,
    ATTACK_GUN = 2,
    SKILL_ATTRIBUTE_SHIFT = 11,
    SKILL_ATTRIBUTE_MASK = 31,
};

/* Counts candidate actions of one attribute, or only the selected action when restricted. */
extern "C" s32 battleCountActionsByAttribute(const BtlCombatantEntryA *combatant, u32 attribute)
{
    s32 count = 0;
    if ((combatant->flags & g_btlCandidateMasks.unavailable) != 0 ||
        hasSingleAction(g_btlCandidateMasks, *combatant)) {
        if (combatant->data.actionList.single.kind == ACTION_SKILL ||
            combatant->data.actionList.single.kind == ACTION_SKILL_ALTERNATE) {
            const SkillDataRecordA *skill = skillDataFindById(combatant->data.actionList.single.id);
            if (skill != NULL && attribute == ((skill->properties >> SKILL_ATTRIBUTE_SHIFT) & SKILL_ATTRIBUTE_MASK)) {
                ++count;
            }
        }
        if (combatant->data.actionList.single.kind == ACTION_ITEM) {
            const ConsumableRecordA *item = itemTableGetItemRecord(combatant->data.actionList.single.id);
            if (item != NULL && item->skillId != 0) {
                const SkillDataRecordA *skill = skillDataFindById(item->skillId);
                if (skill != NULL && attribute == ((skill->properties >> SKILL_ATTRIBUTE_SHIFT) & SKILL_ATTRIBUTE_MASK)) {
                    ++count;
                }
            }
        }
    } else {
        for (s32 index = 0; index < 10; ++index) {
            if (combatant->data.actionList.available[index].kind == ACTION_SKILL ||
                combatant->data.actionList.available[index].kind == ACTION_SKILL_ALTERNATE) {
                const SkillDataRecordA *skill = skillDataFindById(combatant->data.actionList.available[index].id);
                if (skill != NULL && attribute == ((skill->properties >> SKILL_ATTRIBUTE_SHIFT) & SKILL_ATTRIBUTE_MASK)) {
                    ++count;
                }
            }
            if (combatant->data.actionList.available[index].kind == ACTION_ITEM) {
                const ConsumableRecordA *item = itemTableGetItemRecord(combatant->data.actionList.available[index].id);
                if (item != NULL && item->skillId != 0) {
                    const SkillDataRecordA *skill = skillDataFindById(item->skillId);
                    if (skill != NULL && attribute == ((skill->properties >> SKILL_ATTRIBUTE_SHIFT) & SKILL_ATTRIBUTE_MASK)) {
                        ++count;
                    }
                }
            }
            if (combatant->data.actionList.available[index].kind == ACTION_ATTACK &&
                combatant->data.actionList.available[index].id == ATTACK_GUN && combatant->data.record != NULL) {
                const EquipmentRecordA *entry = itemTableGetEquipmentRecord(combatant->data.record->equipment.gunRounds);
                if (entry != NULL && attribute == entry->traitBits.attribute) {
                    ++count;
                }
            }
        }
    }
    return count;
}
