/* The unite (fusion) menu's options: data table 0x24, unite/SearchTable.tbb (the table ids follow the
 * game's data-file list, NKMBaseTable.tbb = 0). Section 0 lists the menu entries; the row differs
 * between the games (IV 0x90 bytes, Apocalypse 0x94 with an unlock flag). */
#ifndef GAMEDATA_SEARCHTABLE_H
#define GAMEDATA_SEARCHTABLE_H

#include "gamedata/DataTable.h"
#include <stddef.h>

/* IV: one 0x90-byte row of SearchTable.tbb table 0 (data table 0x24, section 0). */
struct SearchTableRecord {
    /* 0x00 */ u8 option;                 /* the option it toggles (saveOptionIsEnabled) */
    /* 0x01 */ u8 kind;                   /* 2 = listed in the unite menu */
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ char name[0x8C];
};

/* Apocalypse: one 0x94-byte row of SearchTable.tbb table 0 (data table 0x24, section 0). */
struct SearchTableRecordA {
    /* 0x00 */ u8 option;                 /* the option it toggles (saveOptionIsEnabled) */
    /* 0x01 */ u8 kind;                   /* 2 = listed in the unite menu */
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u16 flagId;                /* packed game flag that unlocks it */
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ char name[0x8C];
};

typedef char SearchTableRecordLayoutCheck[
    sizeof(SearchTableRecord) == 0x90 &&
    offsetof(SearchTableRecord, name) == 0x04 &&
    sizeof(SearchTableRecordA) == 0x94 &&
    offsetof(SearchTableRecordA, flagId) == 0x04 &&
    offsetof(SearchTableRecordA, name) == 0x08 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

/* IV: row `index`'s kind, its name and its option; -1 (NULL) past the end. */
u32 dataTable24Sub0GetRecord(u32 index);
char *dataTable24Sub0GetRecordS90(u32 index);
u32 dataTable24Sub0GetRecordS90X(u32 index);

/* Apocalypse: row `index`'s option, its kind and its name; -1 (NULL) past the end. */
u32 dataTableGetEntry24Byte0(u32 index);
u32 dataTableGetEntry24Byte1(u32 index);
char *dataTableGetEntry24Member(u32 index);

#ifdef __cplusplus
}

/* IV: the rows of section 0 of `table` (dataTableGet(0x24, 0)). */
static inline SearchTableRecord *searchTableRecords(void *table)
{
    return static_cast<SearchTableRecord *>(dataTableGetEntries(table));
}

/* Apocalypse: the rows of section 0 of `table` (dataTableGet(0x24, 0)). */
static inline SearchTableRecordA *searchTableRecordsA(void *table)
{
    return static_cast<SearchTableRecordA *>(dataTableGetEntries(table));
}
#endif

#endif
