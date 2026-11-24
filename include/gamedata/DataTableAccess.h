#pragma once
#include "common.h"

struct PlaceTextTableCursor;
struct PlaceTextRecord;
struct QuestUnlockConditions;

/* Data-table accessors. */
extern "C" {

/* The record of table 11 keyed `id` (a built-in override record for a few ids, else a search of the
 * table's entries). The record layout depends on the caller's use. */
const void *dataFindKeyedRecordWithOverrides(u32 id);

u32 dataTable05Sub9GetCount(void);

/* Data table 0x17 (Apocalypse): the place records of section 1 and each place's stock rows. The accessors take a
 * scratch cursor their callers pass and they ignore. */
const PlaceTextRecord *dataTable17Type1GetEntry(PlaceTextTableCursor *cursor, s32 index);
s32 dataTable17Count(PlaceTextTableCursor *cursor);
const QuestUnlockConditions *dataTable17Sub1ChildGetEntries(PlaceTextTableCursor *cursor, s32 index);
s32 dataTable17Sub1ChildGetCount(PlaceTextTableCursor *cursor, s32 index);

u32 dataTable18Sub0GetCount(void);

u32 dataTable9EntryOrZero(s32 index);

} /* extern "C" */
