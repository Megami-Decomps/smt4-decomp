/* NON_MATCHING: the loot-weight sum is accumulated by retail in two interleaved running totals with software-pipelined loads, and the quest-record slot address is built with different shifts; the reward logic is the same. */
#include "common.h"

extern "C" {

/* One reward slot of a quest record (12 bytes). */
typedef struct RewardSlot {
    /* 0x00 */ u16 kind;       /* 1: fixed item, 3: set value, 4: loot table */
    /* 0x02 */ u16 arg;        /* item id, or the loot table id */
    /* 0x04 */ u16 amount;     /* item count, or the value for kind 3 */
    /* 0x06 */ u16 percent;    /* nonzero: the gold is this percent of the level's base */
    /* 0x08 */ u32 gold;
} RewardSlot;

/* The quest record: three reward slots at 0x154. */
typedef struct QuestRewardRecord {
    /* 0x000 */ u8 unk000[0x154];
    /* 0x154 */ RewardSlot slots[3];
} QuestRewardRecord;

typedef struct QuestRuntimeStatus {
    u8 flags;                  /* bit 3: use the second reward slot set */
} QuestRuntimeStatus;

/* A loot table (0x50 bytes): eight (id, weight) pairs and a last extra weight. */
typedef struct LootTable {
    /* 0x00 */ u8 unk00[0x30];
    struct {
        /* 0x30 */ u16 id;
        /* 0x32 */ u16 weight;
    } pairs[8];
    /* 0x50 */ u8 unk50[0x4];
} LootTable;

/* The reward list being filled (only the fields written here). */
typedef struct RewardList {
    /* 0x00 */ u32 items[6];
    /* 0x18 */ u32 counts[6];
    /* 0x30 */ u32 value;
    /* 0x34 */ u32 gold;
    /* 0x38 */ u16 quest;
} RewardList;

/* The aoc system's loot table cache: entries of 0x54 bytes (a key, then the table). */
typedef struct LootCacheEntry {
    u32 key;
    u8 table[0x50];
} LootCacheEntry;

typedef struct AocSystem {
    u8 unk000[0x38C];
    u32 lootCount;
    LootCacheEntry *loot;
} AocSystem;

typedef struct PlayerLevelView {
    u8 unk00[0x76];
    u8 level;
} PlayerLevelView;

extern AocSystem *g_aocSystem;

QuestRewardRecord *dataTable1bOr1cGetRecord(void *quest);
QuestRuntimeStatus *questGetRuntimeStatus(void *quest);
PlayerLevelView *gameGetPlayerData(void);
u32 dataTable9EntryOrZero(u32 level);
void *dataTableGet(u32 table, u32 section);
void *dataTableGetEntries(void *section);
u32 dataTableGetCount(void *section);
s32 randNextInRange(s32 limit);

/* Fills the reward list for a quest: a fixed item, a set value, or 3-7 rolls on a loot table, and
 * its gold (a fixed amount, or a percent of the player's level base). */
void FUN_00333b74(RewardList *list, void *quest)
{
    QuestRewardRecord *record = dataTable1bOr1cGetRecord(quest);

    if (record == NULL) {
        return;
    }
    RewardSlot *slot = &record->slots[(questGetRuntimeStatus(quest)->flags >> 3) & 1];

    if ((questGetRuntimeStatus(quest)->flags & 8) != 0 && slot->kind == 0) {
        slot = &record->slots[0];
    }
    if (slot->kind == 1) {
        list->items[0] = slot->arg;
        list->counts[0] = slot->amount;
    } else if (slot->kind == 3) {
        list->value = slot->amount;
    } else if (slot->kind == 4) {
        u16 tableId = slot->arg;
        LootTable *table = NULL;

        if (g_aocSystem->loot != NULL) {
            LootCacheEntry *entry = g_aocSystem->loot;

            for (u32 i = 0; i < g_aocSystem->lootCount; i++, entry++) {
                if (entry->key == tableId) {
                    table = (LootTable *)entry->table;
                    break;
                }
            }
        }
        if (table == NULL) {
            void *section = dataTableGet(0x1C, 1);
            LootTable *tables = (LootTable *)dataTableGetEntries(section);

            dataTableGetCount(section);
            table = &tables[tableId];
        }
        s32 total = 0;
        for (s32 i = 0; i < 8; i++) {
            if (table->pairs[i].weight != 0) {
                total += table->pairs[i].weight;
            }
        }
        s32 rolls = randNextInRange(5) + 3;
        s32 added = 0;

        for (; rolls != 0; rolls--) {
            s32 pick = randNextInRange(total - 1);

            for (s32 i = 0; i < 8; i++) {
                if (table->pairs[i].weight == 0) {
                    continue;
                }
                pick -= table->pairs[i].weight;
                if (pick < 0) {
                    if (added < 6 && table->pairs[i].id != 0) {
                        list->items[added] = table->pairs[i].id;
                        list->counts[added] = 1;
                        added++;
                    }
                    break;
                }
            }
        }
    }
    u32 gold;
    if (slot->percent == 0) {
        gold = slot->gold;
    } else {
        u32 base;

        if (gameGetPlayerData()->level >= 99) {
            base = dataTable9EntryOrZero(98);
        } else {
            base = dataTable9EntryOrZero(gameGetPlayerData()->level);
        }
        list->gold = base;
        gold = base * slot->percent / 100;
    }
    list->gold = gold;
    list->quest = (u16)(u32)quest;
}

}
