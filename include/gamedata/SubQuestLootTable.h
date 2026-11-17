/* The quests' loot tables: data table 0x1C section 1, event/quest/SubQuestData.tbb (the table ids
 * follow the game's data-file list, NKMBaseTable.tbb = 0; section 0 holds the sub-quest records,
 * quest_center/QuestRecord.h). A quest reward of kind 4 rolls on the loot table its `arg` names (the
 * row index); add-on content can override a table (aocGetEntryData). The row differs between the
 * games: IV 0x50 bytes, Apocalypse 0x40. */
#ifndef GAMEDATA_SUBQUESTLOOTTABLE_H
#define GAMEDATA_SUBQUESTLOOTTABLE_H

#include "gamedata/DataTable.h"
#include <stddef.h>

/* One weighted item of a loot table. */
struct SubQuestLootSlot {
    /* 0x00 */ u16 item;
    /* 0x02 */ u16 weight;
};

/* IV: one 0x50-byte row of SubQuestData.tbb table 1 (data table 0x1C, section 1). */
struct SubQuestLootRecord {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ SubQuestLootSlot slots[8];
};

/* Apocalypse: one 0x40-byte row of SubQuestData.tbb table 1 (data table 0x1C, section 1). */
struct SubQuestLootRecordA {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ SubQuestLootSlot slots[8];
};

typedef char SubQuestLootRecordLayoutCheck[
    sizeof(SubQuestLootRecord) == 0x50 &&
    offsetof(SubQuestLootRecord, slots) == 0x30 &&
    sizeof(SubQuestLootRecordA) == 0x40 &&
    offsetof(SubQuestLootRecordA, slots) == 0x20 ? 1 : -1];

#ifdef __cplusplus
/* IV: the rows of section 1 of `table` (dataTableGet(0x1C, 1)). */
static inline SubQuestLootRecord *subQuestLootRecords(void *table)
{
    return static_cast<SubQuestLootRecord *>(dataTableGetEntries(table));
}

/* Apocalypse: the rows of section 1 of `table` (dataTableGet(0x1C, 1)). */
static inline SubQuestLootRecordA *subQuestLootRecordsA(void *table)
{
    return static_cast<SubQuestLootRecordA *>(dataTableGetEntries(table));
}
#endif

#endif
