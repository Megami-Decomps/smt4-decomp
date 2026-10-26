#pragma once
#include "common.h"

/* Data-table accessors. */
extern "C" {

/* The record of table 11 keyed `id` (a built-in override record for a few ids, else a search of the
 * table's entries). The record layout depends on the caller's use. */
const void *dataFindKeyedRecordWithOverrides(u32 id);

u32 dataTable05Sub9GetCount(void);

void dataTable17Count(void);

u32 dataTable18Sub0GetCount(void);

u32 dataTable9EntryOrZero(s32 index);

} /* extern "C" */
