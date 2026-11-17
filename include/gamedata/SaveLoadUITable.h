/* The save/load screen's texts: data table 0x3D, saveLoadUI/SaveLoadUITable.tbb, in both games (the
 * table ids follow the game's data-file list, NKMBaseTable.tbb = 0). */
#ifndef GAMEDATA_SAVELOADUITABLE_H
#define GAMEDATA_SAVELOADUITABLE_H

#include "gamedata/DataTable.h"
#include <stddef.h>

/* One 0x54-byte row of SaveLoadUITable.tbb table 0 (data table 0x3D, section 0), one per screen mode. */
struct SaveLoadUIRecord {
    /* 0x00 */ char caption[0x14];        /* drawn centred over the caption sprite */
    /* 0x14 */ char help[0x40];           /* button help text (buttonHelpSetText) */
};

typedef char SaveLoadUIRecordLayoutCheck[
    sizeof(SaveLoadUIRecord) == 0x54 &&
    offsetof(SaveLoadUIRecord, help) == 0x14 ? 1 : -1];

#ifdef __cplusplus
/* The section's rows. */
static inline SaveLoadUIRecord *saveLoadUIRecords(void)
{
    return static_cast<SaveLoadUIRecord *>(dataTableGetEntries(dataTableGet(0x3D, 0)));
}
#endif

#endif
