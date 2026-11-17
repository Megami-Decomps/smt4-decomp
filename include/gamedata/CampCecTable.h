/* Apocalypse's earnable titles: data table 0x4A, camp/CampCecTable.tbb (the table ids follow the game's
 * data-file list, NKMBaseTable.tbb = 0). Section 0 lists the titles (CampCecRecord): each is earned
 * once its play counter reaches `minimum` (progressConditionsUpdateUnlocks), and the save keeps one
 * earned bit per row (GameBlock2830C::unlocks). */
#ifndef GAMEDATA_CAMPCECTABLE_H
#define GAMEDATA_CAMPCECTABLE_H

#include "gamedata/DataTable.h"
#include <stddef.h>

/* One 0x2C-byte row of CampCecTable.tbb table 0 (data table 0x4A, section 0). */
struct CampCecRecord {
    /* 0x00 */ char title[0x20];          /* the title's text, shown on the character panel */
    /* 0x20 */ u16 value;
    /* 0x22 */ u16 counter;               /* play counter that earns it: < 0x40 countersGetA, else a
                                           * countersGetB slot or a computed count */
    /* 0x24 */ u32 minimum;               /* counter value at which the title is earned */
    /* 0x28 */ u32 requiredFlag;          /* 0 = none; else a game flag that must be set */
};

typedef char CampCecRecordLayoutCheck[
    sizeof(CampCecRecord) == 0x2C &&
    offsetof(CampCecRecord, value) == 0x20 &&
    offsetof(CampCecRecord, counter) == 0x22 &&
    offsetof(CampCecRecord, requiredFlag) == 0x28 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

/* Row `index` of section 0 (no bounds check). */
CampCecRecord *dataTable4AGetEntry2C(s32 index);

#ifdef __cplusplus
}

/* The section's rows. */
static inline CampCecRecord *campCecRecords(void)
{
    return static_cast<CampCecRecord *>(dataTableGetEntries(dataTableGet(0x4A, 0)));
}

/* Row `index` (no bounds check). */
static inline CampCecRecord *campCecRecordAt(u32 index)
{
    CampCecRecord *records = campCecRecords();
    return &records[index];
}

/* The number of rows. */
static inline u32 campCecCount(void)
{
    return dataTableGetCount(dataTableGet(0x4A, 0));
}
#endif

#endif
