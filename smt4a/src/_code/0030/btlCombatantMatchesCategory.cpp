/* NON_MATCHING: the two action-mode mask tests use different scratch registers; the action scan matches. */
#include "battle/BtlEntryA.h"
#include "gamedata/ConsumableRecordA.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/SkillDataLookup.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

/* Tests the selected (or any available) action for the requested skill category. */
extern "C" u32 btlCombatantMatchesCategory(BtlCombatantEntryA *entry, u32 category)
{
    const BattleCandidateMasks *masks = &g_btlCandidateMasks;
    if ((entry->flags & masks->unavailable) || (entry->flags & masks->singleAction)) {
        if (entry->data.actionList.single.kind == 2 || entry->data.actionList.single.kind == 3) {
            const SkillDataRecordA *skill = skillDataFindById(entry->data.actionList.single.id);
            if (skill && category == skill->skillProperties.category)
                return 1;
        }
        if (entry->data.actionList.single.kind == 8) {
            const ConsumableRecordA *item = itemTableGetItemRecord(entry->data.actionList.single.id);
            if (item && item->skillId) {
                const SkillDataRecordA *skill = skillDataFindById(item->skillId);
                if (skill && category == skill->skillProperties.category)
                    return 1;
            }
        }
    } else {
        for (s32 i = 0; i < 10; ++i) {
            if (entry->data.actionList.available[i].kind == 2 || entry->data.actionList.available[i].kind == 3) {
                const SkillDataRecordA *skill = skillDataFindById(entry->data.actionList.available[i].id);
                if (skill && category == skill->skillProperties.category)
                    return 1;
            }
            if (entry->data.actionList.available[i].kind == 8) {
                const ConsumableRecordA *item = itemTableGetItemRecord(entry->data.actionList.available[i].id);
                if (item && item->skillId) {
                    const SkillDataRecordA *skill = skillDataFindById(item->skillId);
                    if (skill && category == skill->skillProperties.category)
                        return 1;
                }
            }
            if (entry->data.actionList.available[i].kind == 1 && entry->data.actionList.available[i].id == 2 && entry->data.record) {
                const PlayerDataA *player = (const PlayerDataA *)entry->data.record;
                const EquipmentRecordA *bullets = itemTableGetEquipmentRecord(player->equipped.bullets);
                if (bullets && category == bullets->traits >> 20)
                    return 1;
            }
        }
    }
    return 0;
}
