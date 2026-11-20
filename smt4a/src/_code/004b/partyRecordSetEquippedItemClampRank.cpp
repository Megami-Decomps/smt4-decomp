#include "shard/Shard004B.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/GameSaveDataA.h"

extern "C" {
s32 partyRecordClampEquippedRankUp(u32 item);
s32 partyRecordClampEquippedRankDown(u32 item);
}

/* Set one equipped item and clamp its inherited category rank to the item limits. */
extern "C" void partyRecordSetEquippedItemClampRank(SlotRecordA *record, u32 item, s32 slot)
{
    if (record == NULL || slot >= 8) {
        return;
    }
    record->skills[slot] = (u16)item;
    ItemRankDefinition *definition = (ItemRankDefinition *)skillDataFindById(item);
    s8 rank = 0;
    if (definition != NULL && definition->category < 18) {
        u32 category = definition->category;
        rank = record->categoryRanks[category];
    }
    s32 maximum = partyRecordClampEquippedRankUp(item);
    s32 minimum = partyRecordClampEquippedRankDown(item);
    if (rank > maximum) {
        rank = (s8)maximum;
    } else if (minimum > rank) {
        rank = (s8)minimum;
    }
    record->skillRanks[slot] = rank;
}
