/* The random encounters: data table 2, battle/EncountData.tbb (the table ids follow the game's
 * data-file list, NKMBaseTable.tbb = 0). Section 0 holds one or more encounter records per
 * (map, area): the first whose flag (and, in Apocalypse, level) conditions hold applies
 * (aocEntryFind, dataTable02FindConditionalMapRecord), add-on content first. The record differs
 * between the games (IV 0xA0 bytes, Apocalypse 0xA4); a per-(map, area) roll state
 * (gameDataGetTableEntry) caches the encounter table it chose and is reset when the applying record
 * changes. Section 1 holds the encounter tables (weighted encounter groups), section 2 the
 * encounter groups (up to six enemies, nkmEnemyFindById); add-on content can override both.
 * Section 3 lists the (map, area) pairs that have a roll state. */
#ifndef GAMEDATA_ENCOUNTDATA_H
#define GAMEDATA_ENCOUNTDATA_H

#include "gamedata/DataTable.h"
#include <stddef.h>

/* One encounter table an encounter record can roll in a phase (weightedTableRollNextValue), both
 * games. */
struct EncountSlot {
    /* 0x00 */ u16 tableId;               /* row of section 1; 0 = keep the current one */
    /* 0x02 */ u16 weight;                /* below 1000 a percentage chance; from 1000 on, group
                                           * (weight / 1000) shares the remainders; 0: see the roller */
    /* 0x04 */ u16 holdFrames;            /* rolls the chosen table is kept for */
};
typedef EncountSlot EncountSlotA;

/* IV: one 0xA0-byte row of EncountData.tbb table 0 (data table 2, section 0). */
struct EncountRecord {
    /* 0x00 */ u8 map;
    /* 0x01 */ u8 area;
    /* 0x02 */ u8 unk02[8];
    /* 0x0A */ u16 requiredFlag;          /* 0 = none; else a game flag that must be set */
    /* 0x0C */ u16 excludedFlag;          /* 0 = none; else a game flag that must be clear */
    /* 0x0E */ u16 initialTableId;        /* the roll state's initial encounter table */
    /* 0x10 */ EncountSlot slots[24];
};

/* Apocalypse: one 0xA4-byte row of EncountData.tbb table 0 (data table 2, section 0). */
struct EncountRecordA {
    /* 0x00 */ u8 map;
    /* 0x01 */ u8 area;
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ u16 levelThreshold;        /* party average level that stops the area's prompts */
    /* 0x0A */ u16 minimumLevel;          /* 0 = any; else the player level needed (and the level
                                           * past which the roll state is reset) */
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u16 requiredFlag;          /* 0 = none; else a game flag that must be set */
    /* 0x10 */ u16 excludedFlag;          /* 0 = none; else a game flag that must be clear */
    /* 0x12 */ u16 initialTableId;        /* the roll state's initial encounter table */
    /* 0x14 */ EncountSlotA slots[24];
};

typedef char EncountRecordLayoutCheck[
    sizeof(EncountRecord) == 0xA0 &&
    offsetof(EncountRecord, requiredFlag) == 0x0A &&
    offsetof(EncountRecord, initialTableId) == 0x0E &&
    offsetof(EncountRecord, slots) == 0x10 &&
    sizeof(EncountSlot) == 6 &&
    sizeof(EncountRecordA) == 0xA4 &&
    offsetof(EncountRecordA, levelThreshold) == 0x08 &&
    offsetof(EncountRecordA, requiredFlag) == 0x0E &&
    offsetof(EncountRecordA, initialTableId) == 0x12 &&
    offsetof(EncountRecordA, slots) == 0x14 ? 1 : -1];

/* One weighted choice of an encounter table: an encounter group (section 2) and its weight. */
struct EncountChoice {
    /* 0x00 */ u16 groupId;
    /* 0x02 */ u16 weight;
};

/* IV: one 0x3C-byte row of EncountData.tbb table 1 (data table 2, section 1). */
struct EncountTableRecord {
    /* 0x00 */ EncountChoice choices[15];
};

/* Apocalypse: one 0x78-byte row of EncountData.tbb table 1 (data table 2, section 1). */
struct EncountTableRecordA {
    /* 0x00 */ EncountChoice choices[30];
};

/* IV: one 0x1C-byte row of EncountData.tbb table 2 (data table 2, section 2). */
struct EncountGroupRecord {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u16 enemyIds[6];           /* 0 = empty */
    /* 0x18 */ u8 unk18[4];
};

/* Apocalypse: one 0x28-byte row of EncountData.tbb table 2 (data table 2, section 2). */
struct EncountGroupRecordA {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u16 enemyIds[6];           /* 0 = empty */
    /* 0x20 */ u8 unk20[8];
};

typedef char EncountTableRecordLayoutCheck[
    sizeof(EncountTableRecord) == 0x3C &&
    sizeof(EncountTableRecordA) == 0x78 &&
    sizeof(EncountGroupRecord) == 0x1C &&
    offsetof(EncountGroupRecord, enemyIds) == 0x0C &&
    sizeof(EncountGroupRecordA) == 0x28 &&
    offsetof(EncountGroupRecordA, enemyIds) == 0x14 ? 1 : -1];

/* One 2-byte row of EncountData.tbb table 3 (data table 2, section 3): a (map, area) with an
 * encounter roll state; the row index is the state's slot (gameDataGetTableEntry, the save's
 * roll states). Same in both games. */
struct EncountAreaKey {
    /* 0x00 */ u8 map;
    /* 0x01 */ u8 area;
};

typedef char EncountAreaKeyLayoutCheck[sizeof(EncountAreaKey) == 2 ? 1 : -1];

struct AocSystem;

#ifdef __cplusplus
extern "C" {
#endif

/* IV: the encounter record that applies to (map, area); the section's first row if none does. */
EncountRecord *aocEntryFind(u32 map, u32 area);
/* IV: the `occurrence`th row (from 0) for (map, area), or NULL. */
EncountRecord *FUN_003bc0ac(u32 map, u32 area, s32 occurrence);

/* IV: encounter group `index` (an add-on one first); the section's first row for a bad index. */
EncountGroupRecord *dataTable02GetEntryByIndex(s32 index);
/* IV: the add-on encounter group keyed `key`, or NULL. */
EncountGroupRecord *aocFindSpriteTemplateByKey(AocSystem *system, u32 key);

/* Apocalypse: the encounter record that applies to (map, area); the section's first row if none
 * does. */
EncountRecordA *dataTable02FindConditionalMapRecord(u32 map, u32 area);
/* Apocalypse: the `occurrence`th row (from 0) for (map, area), or NULL. */
EncountRecordA *dataTableFindEntryOccurrenceByBytePair(u32 map, u32 area, s32 occurrence);
/* Apocalypse: encounter group `index` (an add-on one first); the section's first row for a bad
 * index. */
EncountGroupRecordA *dataTable02GetRecordWithAocPackage(s32 index);

#ifdef __cplusplus
}

/* IV: the rows of section 0 of `table` (dataTableGet(2, 0)). */
static inline EncountRecord *encountRecords(void *table)
{
    return static_cast<EncountRecord *>(dataTableGetEntries(table));
}

/* Apocalypse: the rows of section 0 of `table` (dataTableGet(2, 0)). */
static inline EncountRecordA *encountRecordsA(void *table)
{
    return static_cast<EncountRecordA *>(dataTableGetEntries(table));
}

/* dataTableGetRecord02 (encounter table `index`, an add-on one first) exists in both games with
 * each game's record type; its units declare it. */

/* IV: the rows of section 1 / 2 of `table` (dataTableGet(2, 1) / dataTableGet(2, 2)). */
static inline EncountTableRecord *encountTableRecords(void *table)
{
    return static_cast<EncountTableRecord *>(dataTableGetEntries(table));
}

static inline EncountGroupRecord *encountGroupRecords(void *table)
{
    return static_cast<EncountGroupRecord *>(dataTableGetEntries(table));
}

/* The rows of section 3 of `table` (dataTableGet(2, 3)), both games. */
static inline EncountAreaKey *encountAreaKeys(void *table)
{
    return static_cast<EncountAreaKey *>(dataTableGetEntries(table));
}

/* Apocalypse: the rows of section 1 / 2 of `table`. */
static inline EncountTableRecordA *encountTableRecordsA(void *table)
{
    return static_cast<EncountTableRecordA *>(dataTableGetEntries(table));
}

static inline EncountGroupRecordA *encountGroupRecordsA(void *table)
{
    return static_cast<EncountGroupRecordA *>(dataTableGetEntries(table));
}
#endif

#endif
