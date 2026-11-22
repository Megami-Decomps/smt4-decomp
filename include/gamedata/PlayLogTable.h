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
    /* 0x37 */ char suffix[8];            /* unit shown after the value, "0" = none */
    /* 0x3F */ u8 kind;                   /* PLAY_LOG_KIND_TIME: the value is seconds, shown as hours and minutes */
};

enum {
    PLAY_LOG_KIND_TIME = 1
};

typedef char PlayLogRecordLayoutCheck[
    sizeof(PlayLogRecord) == 0x40 &&
    offsetof(PlayLogRecord, name) == 0x02 &&
    offsetof(PlayLogRecord, suffix) == 0x37 &&
    offsetof(PlayLogRecord, kind) == 0x3F ? 1 : -1];

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

/* Row `index`, or NULL past the end: dataTableGetEntry37's body, which the play log's page builder and row
 * drawing inline. */
static __inline PlayLogRecord *playLogRowAt(u32 index)
{
    void *table;
    PlayLogRecord *entries;
    u32 count;

    table = dataTableGet(0x37, 0);
    entries = (PlayLogRecord *)dataTableGetEntries(table);
    count = dataTableGetCount(table);
    if (index >= count) {
        entries = NULL;
    } else {
        entries = entries + index;
    }
    return entries;
}

/* Row `index`, or NULL past the end. */
static inline PlayLogRecord *playLogRecordAt(u32 index)
{
    PlayLogRecord *records;

    return index < playLogRecords(&records) ? &records[index] : NULL;
}
#endif

#endif
