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
    /* 0x04 */ char title[0x28];          /* the page's name in the how-to list */
    /* 0x2C */ u16 order;                 /* list position (FUN_0049ebf0 sorts by it) */
    /* 0x2E */ u16 rowCount;
    /* 0x30 */ u16 imageARow;             /* one-based row, 0 = not shown */
    /* 0x32 */ u16 imageAHeight;
    /* 0x34 */ u16 imageAColumn;
    /* 0x36 */ u16 imageA;                /* texture of table 0x33 shown with the page, 0 = none */
    /* 0x38 */ u8 unk38[2];
    /* 0x3A */ u16 imageBRow;
    /* 0x3C */ u16 imageBHeight;
    /* 0x3E */ u16 imageBColumn;
    /* 0x40 */ u16 imageB;                /* second texture of table 0x33, 0 = none */
    /* 0x42 */ u8 unk42[2];
};

typedef char HowToRecordLayoutCheck[
    sizeof(HowToRecord) == 0x44 &&
    offsetof(HowToRecord, order) == 0x2C &&
    offsetof(HowToRecord, rowCount) == 0x2E &&
    offsetof(HowToRecord, imageARow) == 0x30 &&
    offsetof(HowToRecord, imageA) == 0x36 &&
    offsetof(HowToRecord, imageBRow) == 0x3A &&
    offsetof(HowToRecord, imageB) == 0x40 ? 1 : -1];

/* The table section loaded by the how-to list and entry screens. */
struct HowToRecordSection {
    /* 0x00 */ HowToRecord *entries;
    /* 0x04 */ u32 count;
};
typedef char HowToRecordSectionSizeCheck[sizeof(HowToRecordSection) == 8 ? 1 : -1];

#ifdef __cplusplus
/* The section's rows; their number is dataTableGetCount of the same section. */
static inline HowToRecord *howToRecords(void *table)
{
    return static_cast<HowToRecord *>(dataTableGetEntries(table));
}

/* Loads the entries and count of HowToTable.tbb's tutorial section. */
static __inline void howToLoadRecordSection(HowToRecordSection *section)
{
    void *table = dataTableGet(0x46, 0);
    section->entries = howToRecords(table);
    section->count = dataTableGetCount(table);
}
#endif

#endif
