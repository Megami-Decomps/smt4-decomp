/* Where a demon's death effect is placed: data table 0x3B, battle/devil/DeadEffectOffset.tbb, in both
 * games (the table ids follow the game's data-file list, NKMBaseTable.tbb = 0). */
#ifndef GAMEDATA_DEADEFFECTOFFSET_H
#define GAMEDATA_DEADEFFECTOFFSET_H

#include "gamedata/DataTable.h"
#include <stddef.h>

/* One 8-byte row of DeadEffectOffset.tbb table 0 (data table 0x3B, section 0), keyed by `id`. */
struct DeadEffectOffsetRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ s16 positionX;             /* wanted position of the effect's centre */
    /* 0x04 */ s16 positionY;
    /* 0x06 */ u16 unk06;
};

typedef char DeadEffectOffsetRecordLayoutCheck[
    sizeof(DeadEffectOffsetRecord) == 8 &&
    offsetof(DeadEffectOffsetRecord, positionY) == 4 ? 1 : -1];

#ifdef __cplusplus
/* The rows of section 0 of `table` (dataTableGet(0x3B, 0)). */
static inline DeadEffectOffsetRecord *deadEffectOffsetRecords(void *table)
{
    return static_cast<DeadEffectOffsetRecord *>(dataTableGetEntries(table));
}
#endif

#endif
