/* NON_MATCHING: reward-list/section registers are exchanged, pipelined loot-weight temporaries differ, and gold multiply operands are reversed. */
#include "common.h"
#include "quest_center/QuestRecord.h"
#include <stddef.h>
#include "gamedata/SubQuestLootTable.h"
#include "util/Random.h"
#include "gamedata/DataTableAccess.h"
#include "addon/AocSystem.h"
#include "gamedata/GamePlayerData.h"
#include "result/ResultSpoils.h"

extern "C" {

typedef struct QuestRuntimeStatus {
    u8 flags;                  /* bit 3: use the second reward slot set */
} QuestRuntimeStatus;

/* The aoc system's loot table cache: entries of 0x54 bytes (a key, then the table). */
typedef struct LootCacheEntry {
    u32 key;
    u8 table[0x50];
} LootCacheEntry;

typedef char QuestRewardLayouts[
    sizeof(LootCacheEntry) == 0x54 && offsetof(LootCacheEntry, table) == 4 ? 1 : -1];

QuestRuntimeStatus *questGetRuntimeStatus(u32 questId); // declcheck: local (QuestStatus.h returns the record as an int)

static __inline SubQuestLootRecord *questRewardFindLootTable(u16 tableId)
{
    if (g_aocSystem->entries != NULL) {
        LootCacheEntry *entry = (LootCacheEntry *)g_aocSystem->entries;
        u32 count = g_aocSystem->entryCount;
        for (u32 index = 0; index < count; ++index, ++entry) {
            if (entry->key == tableId) {
                return reinterpret_cast<SubQuestLootRecord *>(entry->table);
            }
        }
    }
    void *section = dataTableGet(0x1C, 1);
    SubQuestLootRecord *tables = subQuestLootRecords(section);
    dataTableGetCount(section);
    return &tables[tableId];
}

/* Fills the reward list for a quest: a fixed item, a set value, or 3-7 rolls on a loot table, and
 * its gold (a fixed amount, or a percent of the player's level base). */
void questBuildRewardSpoils(ResultSpoils *list, u32 questId)
{
    QuestRecord *record = questDataGetRecord(questId);

    if (record == NULL) {
        return;
    }
    u8 flags = questGetRuntimeStatus(questId)->flags;
    QuestReward *slot = &record->rewards[(flags >> 3) & 1];

    if ((flags & 8) != 0 && slot->kind == 0) {
        slot = &record->rewards[0];
    }
    if (slot->kind == 1) {
        list->itemId[0] = slot->arg;
        list->itemCount[0] = slot->amount;
    } else if (slot->kind == 3) {
        list->gold = slot->amount;
    } else if (slot->kind == 4) {
        SubQuestLootRecord *table = questRewardFindLootTable(slot->arg);
        s32 total = 0;
        for (s32 i = 0; i < 8; i++) {
            if (table->slots[i].weight != 0) {
                total += table->slots[i].weight;
            }
        }
        s32 rolls = randNextInRange(5) + 3;
        s32 added = 0;

        for (; rolls != 0; rolls--) {
            s32 pick = randNextInRange((u16)(total - 1));

            for (s32 i = 0; i < 8; i++) {
                if (table->slots[i].weight == 0) {
                    continue;
                }
                pick -= table->slots[i].weight;
                if (pick < 0) {
                    if (added < 6 && table->slots[i].item != 0) {
                        list->itemId[added] = table->slots[i].item;
                        list->itemCount[added] = 1;
                        added++;
                    }
                    break;
                }
            }
        }
    }
    /* The reward slot's last two fields give the experience: a fixed amount, or a percent of the
     * level's base. */
    u32 experience;
    if (slot->percent == 0) {
        experience = slot->gold;
    } else {
        u32 base;
        u32 level = gameGetPlayerData()->level;

        if (level >= 99) {
            base = dataTable9EntryOrZero(98);
            list->experience = base;
        } else {
            base = dataTable9EntryOrZero(level);
            list->experience = base;
        }
        experience = base * slot->percent / 100;
    }
    list->experience = experience;
    list->sourceId = (u16)questId;
}

}
