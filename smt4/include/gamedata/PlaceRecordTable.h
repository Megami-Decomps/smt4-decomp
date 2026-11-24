/* Data table 0x17, section 1 (smt4): the place records and each place's stock rows. Apocalypse's counterpart is
 * ui/PlaceTextTransition.h (PlaceTextRecord). */
#ifndef SMT4_GAMEDATA_PLACERECORDTABLE_H
#define SMT4_GAMEDATA_PLACERECORDTABLE_H

#include "common.h"
#include "quest_center/QuestUnlockConditions.h"
#include <stddef.h>

/* A record of data table 0x17/1 (0x68 bytes): one place of a town. */
struct PlaceRecord {
    /* 0x00 */ u8 text[0x20];
    /* 0x20 */ s32 key;
    /* 0x24 */ u16 kind;
    /* 0x26 */ u16 stockSection;  /* the place's stock rows are section stockSection + 2 of table 0x17 */
    /* 0x28 */ u8 unk28[0x40];
};

/* The scratch object the data table 0x17/1 accessors take (and ignore) as their first argument. */
struct Table17Handle {
    u32 unused;
};

typedef char PlaceRecordLayoutCheck[
    sizeof(PlaceRecord) == 0x68 && offsetof(PlaceRecord, key) == 0x20 && offsetof(PlaceRecord, kind) == 0x24 &&
    offsetof(PlaceRecord, stockSection) == 0x26 ? 1 : -1];

extern "C" {

PlaceRecord *dataTable17Sub1GetRecord(Table17Handle *ignored, s32 index);
s32 dataTable17Sub1GetCount(Table17Handle *ignored);
const QuestUnlockConditions *dataTable17Sub1ChildGetEntries(Table17Handle *ignored, s32 index);
s32 dataTable17Sub1ChildGetCount(Table17Handle *ignored, s32 index);

} /* extern "C" */

#endif
