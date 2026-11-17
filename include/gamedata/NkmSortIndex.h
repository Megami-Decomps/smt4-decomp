/* The demon races' names: data table 1 section 0, battle/NKMSortIndex.tbb table 0 by the game's
 * data-file list (NKMBaseTable.tbb = 0, NKMSortIndex.tbb = 1), indexed by the race id
 * (NkmBaseRecord::race); add-on content can supply a race's text first (entryListFindById). The row
 * differs between the games (IV 0x28 bytes, Apocalypse 0x30). */
#ifndef GAMEDATA_NKMSORTINDEX_H
#define GAMEDATA_NKMSORTINDEX_H

#include "gamedata/DataTable.h"
#include <stddef.h>

/* IV: one 0x28-byte row of NKMSortIndex.tbb table 0 (data table 1, section 0). */
struct NkmRaceNameRecord {
    /* 0x00 */ char name[0x10];
    /* 0x10 */ char alternateName[0x18]; /* the callers' `alternate` (second) form */
};

/* Apocalypse: one 0x30-byte row of NKMSortIndex.tbb table 0 (data table 1, section 0). */
struct NkmRaceNameRecordA {
    /* 0x00 */ char name[0x10];
    /* 0x10 */ char alternateName[0x20];
};

typedef char NkmRaceNameRecordLayoutCheck[
    sizeof(NkmRaceNameRecord) == 0x28 &&
    sizeof(NkmRaceNameRecordA) == 0x30 &&
    offsetof(NkmRaceNameRecordA, alternateName) == 0x10 ? 1 : -1];

#ifdef __cplusplus
/* IV: the rows of section 0 of `table` (dataTableGet(1, 0)). */
static inline NkmRaceNameRecord *nkmRaceNameRecords(void *table)
{
    return static_cast<NkmRaceNameRecord *>(dataTableGetEntries(table));
}

/* Apocalypse: the rows of section 0 of `table` (dataTableGet(1, 0)). */
static inline NkmRaceNameRecordA *nkmRaceNameRecordsA(void *table)
{
    return static_cast<NkmRaceNameRecordA *>(dataTableGetEntries(table));
}
#endif

#endif
