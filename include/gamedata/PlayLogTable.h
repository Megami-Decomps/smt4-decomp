/* The play log's rows: data table 0x37, camp/PlayLogTable.tbb, in both games (the table ids follow the
 * game's data-file list, NKMBaseTable.tbb = 0). Each row shows one play counter with its label. */
#ifndef GAMEDATA_PLAYLOGTABLE_H
#define GAMEDATA_PLAYLOGTABLE_H

#include "gamedata/DataTable.h"
#include <stddef.h>

/* One 0x40-byte row of PlayLogTable.tbb table 0 (data table 0x37, section 0). */
struct PlayLogRecord {
    /* 0x00 */ s16 counter;               /* game counter shown (low byte, gameCountersGetWord);
                                           * negative = the play time; 0x2E and 0x2C are computed */
    /* 0x02 */ char name[0x35];           /* the row's label */
    /* 0x37 */ char suffix[9];            /* unit shown after the value, "0" = none */
};

typedef char PlayLogRecordLayoutCheck[
    sizeof(PlayLogRecord) == 0x40 &&
    offsetof(PlayLogRecord, name) == 0x02 &&
    offsetof(PlayLogRecord, suffix) == 0x37 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

/* Apocalypse: row `index`, or NULL past the end. */
PlayLogRecord *dataTableGetEntry37(u32 index);

#ifdef __cplusplus
}

/* Stores the rows in `records` and returns their number. */
static inline u32 playLogRecords(PlayLogRecord **records)
{
    void *table = dataTableGet(0x37, 0);

    *records = static_cast<PlayLogRecord *>(dataTableGetEntries(table));
    return dataTableGetCount(table);
}

/* Row `index`, or NULL past the end. */
static inline PlayLogRecord *playLogRecordAt(u32 index)
{
    PlayLogRecord *records;

    return index < playLogRecords(&records) ? &records[index] : NULL;
}
#endif

#endif
