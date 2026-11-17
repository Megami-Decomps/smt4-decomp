/* Apocalypse's tutorial ("how to") pages: data table 0x46, event/HowTo/HowToTable.tbb (the table ids
 * follow the game's data-file list, NKMBaseTable.tbb = 0). The how-to menu lists the rows whose
 * unlock flag is set, sorted by `order`. */
#ifndef GAMEDATA_HOWTOTABLE_H
#define GAMEDATA_HOWTOTABLE_H

#include "gamedata/DataTable.h"
#include <stddef.h>

/* One 0x44-byte row of HowToTable.tbb table 0 (data table 0x46, section 0). */
struct HowToRecord {
    /* 0x00 */ u16 id;                    /* 0 = unused row; also the row's seen-flag id */
    /* 0x02 */ u16 unlockFlag;            /* game flag that makes the page available */
    /* 0x04 */ u8 unk04[0x28];
    /* 0x2C */ u16 order;                 /* list position (FUN_0049ebf0 sorts by it) */
    /* 0x2E */ u8 unk2E[8];
    /* 0x36 */ u16 imageA;                /* texture of table 0x33 shown with the page, 0 = none */
    /* 0x38 */ u8 unk38[8];
    /* 0x40 */ u16 imageB;                /* second texture of table 0x33, 0 = none */
    /* 0x42 */ u8 unk42[2];
};

typedef char HowToRecordLayoutCheck[
    sizeof(HowToRecord) == 0x44 &&
    offsetof(HowToRecord, order) == 0x2C &&
    offsetof(HowToRecord, imageA) == 0x36 &&
    offsetof(HowToRecord, imageB) == 0x40 ? 1 : -1];

#ifdef __cplusplus
/* The section's rows; their number is dataTableGetCount of the same section. */
static inline HowToRecord *howToRecords(void *table)
{
    return static_cast<HowToRecord *>(dataTableGetEntries(table));
}
#endif

#endif
