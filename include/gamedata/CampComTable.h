/* The camp menu's commands: data table 0x15, camp/CampComTable.tbb, in both games (the table ids
 * follow the game's data-file list, NKMBaseTable.tbb = 0). Each row is one command of a camp menu
 * group, keyed by its id byte: its help text, the flags that make it available and the flags that
 * hide it (camp/CampMenuEntry.h). */
#ifndef GAMEDATA_CAMPCOMTABLE_H
#define GAMEDATA_CAMPCOMTABLE_H

#include "gamedata/DataTable.h"
#include <stddef.h>

/* One 0x64-byte row of CampComTable.tbb table 0 (data table 0x15, section 0). */
struct CampComRecord {
    /* 0x00 */ u8 id;
    /* 0x01 */ u8 group;                  /* the camp menu group listing it */
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ char text[0x52];           /* help text */
    /* 0x56 */ u16 requiredFlag;          /* 0 = none */
    /* 0x58 */ u16 requiredDataBit;       /* 0 = none */
    /* 0x5A */ u16 hideFlags[5];          /* 0 = unused */
};

typedef char CampComRecordLayoutCheck[
    sizeof(CampComRecord) == 0x64 &&
    offsetof(CampComRecord, text) == 0x04 &&
    offsetof(CampComRecord, requiredFlag) == 0x56 &&
    offsetof(CampComRecord, hideFlags) == 0x5A ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

/* The row keyed `id`, or NULL (IV FUN_00292844, Apocalypse FUN_002e26c4). */
CampComRecord *FUN_00292844(u32 id);
CampComRecord *FUN_002e26c4(u32 id);
/* Row `index`, no range check (IV dataTable15Sub0GetEntries, Apocalypse dataTable15GetEntry). */
CampComRecord *dataTable15Sub0GetEntries(u32 index);
CampComRecord *dataTable15GetEntry(u32 index);

#ifdef __cplusplus
}

/* The rows of section 0 of `table` (dataTableGet(0x15, 0)). */
static inline CampComRecord *campComRecords(void *table)
{
    return static_cast<CampComRecord *>(dataTableGetEntries(table));
}
#endif

#endif
