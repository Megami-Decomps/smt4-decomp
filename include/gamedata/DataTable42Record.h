/* A row of data table 42 section 1 (0xC bytes); add-on packages add rows in their '$' files, which
 * dataArchiveGetMergedRecord walks after the base table. */
#ifndef GAMEDATA_DATATABLE42RECORD_H
#define GAMEDATA_DATATABLE42RECORD_H

#include "common.h"

typedef struct DataTable42Record {
    /* 0x00 */ u8 unk00[0xC];
} DataTable42Record;

typedef char DataTable42RecordSizeCheck[sizeof(DataTable42Record) == 0xC ? 1 : -1];

#endif
