/* NON_MATCHING: identical instruction sequence to retail except for register numbering (retail keeps the result in r6, the reward record in r7 and the loop counter in r1; the build uses r8/r6/r2 and reorders the parameter moves). */
#include "gamedata/SubQuestLootTable.h"
#include "quest_center/QuestRecordA.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"
#include "addon/AocSystemA.h"
#include "gamedata/GamePlayerData.h"
#include "result/ResultSpoils.h"

// An entry that comes from the add-on content: its id followed by the body.
struct AocDropEntry {
    u32 id;
    SubQuestLootRecordA body;  // 0x04
};

extern "C" {

s32 randRange(u16 maximum);
u32 gameGetUnlockedCountLimit(void);
u32 levelGetExpRequirement(u32 level);

// The drop table entry `id`: from the add-on content when it provides one, else from the base game's table.
static __inline SubQuestLootRecordA *findDropEntry(u16 id)
{
    AocDropEntry *aoc = (AocDropEntry *)g_aocSystem->entries;
    if (aoc != NULL) {
        for (u32 i = 0; i < g_aocSystem->entryCount; i++, aoc++) {
            if (aoc->id == id) {
                return reinterpret_cast<SubQuestLootRecordA *>(&aoc->id + 1);
            }
        }
    }
    void *table = dataTableGet(0x1c, 1);
    SubQuestLootRecordA *entries = subQuestLootRecordsA(table);
    dataTableGetCount(table);
    return &entries[id];
}

// Rolls the reward of encounter `index` into `result`.
void FUN_003df168(ResultSpoilsA *result, s32 index)
{
    QuestRecordA *encounter = questDataGetRecord(index);
    if (encounter == NULL) {
        return;
    }
    gameFlagBlockGetEntry(index);
    QuestRewardA *record = &encounter->reward;
    if (record->kind == 1) {
        result->items[0] = record->id;
        result->counts[0] = record->count;
    } else if (record->kind == 3) {
        result->money = record->count;
    } else if (record->kind == 4) {
        SubQuestLootRecordA *entry = findDropEntry(record->id);

        s32 total = 0;
        for (s32 j = 0; j < 8; j++) {
            if (entry->slots[j].weight != 0) {
                total += entry->slots[j].weight;
            }
        }

        s32 added = 0;
        for (u32 roll = record->count; roll != 0; roll--) {
            s32 remaining = randRange(total - 1);
            for (s32 j = 0; j < 8; j++) {
                u32 weight = entry->slots[j].weight;
                if (weight != 0 && (remaining -= weight) < 0) {
                    if (added < 6 && entry->slots[j].item != 0) {
                        result->items[added] = entry->slots[j].item;
                        result->counts[added] = 1;
                        added++;
                    }
                    break;
                }
            }
        }
    }

    if (record->percent == 0) {
        result->value = record->base;
    } else {
        PlayerDataA *player = gameGetPlayerData();
        u32 scaled;
        scaled = gameGetUnlockedCountLimit() > player->level
            ? levelGetExpRequirement(player->level)
            : levelGetExpRequirement(gameGetUnlockedCountLimit() - 1);
        result->value = scaled;
        result->value = scaled * record->percent / 100;
    }
    result->source = index;
}
}
