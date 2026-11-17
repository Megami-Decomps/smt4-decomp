/* The guests' parameters: data table 0x0A, battle/GuestParamData.tbb (the table ids follow the game's
 * data-file list, NKMBaseTable.tbb = 0). */
#ifndef GAMEDATA_GUESTPARAMTABLE_H
#define GAMEDATA_GUESTPARAMTABLE_H

#include "gamedata/DataTable.h"
#include <stddef.h>

/* One 8-byte row of GuestParamData.tbb table 0 (data table 0x0A, section 0), keyed by the guest id. */
struct GuestParamRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 demonId;               /* the guest's demon record (nkmBaseGetRecord) */
    /* 0x04 */ u16 parentId;              /* the demon it is linked to (FUN_004bd410) */
    /* 0x06 */ u16 unk06;                 /* dataTable0aSub0GetValueById */
};

typedef char GuestParamRecordLayoutCheck[
    sizeof(GuestParamRecord) == 8 &&
    offsetof(GuestParamRecord, demonId) == 2 &&
    offsetof(GuestParamRecord, unk06) == 6 ? 1 : -1];

#ifdef __cplusplus
/* The rows of section 0 of `table` (dataTableGet(0x0A, 0)). */
static inline GuestParamRecord *guestParamRecords(void *table)
{
    return static_cast<GuestParamRecord *>(dataTableGetEntries(table));
}
#endif

#endif
