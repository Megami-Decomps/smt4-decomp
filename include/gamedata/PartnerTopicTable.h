/* Apocalypse's partner topics (the unlock log): data table 0x44,
 * event/PartnerTopic/PartnerTopicTable.tbb (the table ids follow the game's data-file list,
 * NKMBaseTable.tbb = 0). A topic becomes available once its game flag is set (FUN_003b6f00 marks it
 * in the topic flags, flagsBSetStateBits). */
#ifndef GAMEDATA_PARTNERTOPICTABLE_H
#define GAMEDATA_PARTNERTOPICTABLE_H

#include "gamedata/DataTable.h"
#include <stddef.h>

/* One 0x34-byte row of PartnerTopicTable.tbb table 0 (data table 0x44, section 0). */
struct PartnerTopicRecord {
    /* 0x00 */ u16 id;                    /* 0 = unused row; the topic's flag index */
    /* 0x02 */ u8 unk02[0x30];
    /* 0x32 */ u16 unlockFlag;            /* game flag that makes it available, 0 = always */
};

typedef char PartnerTopicRecordLayoutCheck[
    sizeof(PartnerTopicRecord) == 0x34 &&
    offsetof(PartnerTopicRecord, unlockFlag) == 0x32 ? 1 : -1];

#ifdef __cplusplus
/* The rows of section 0 of `table` (dataTableGet(0x44, 0)). */
static inline PartnerTopicRecord *partnerTopicRecords(void *table)
{
    return static_cast<PartnerTopicRecord *>(dataTableGetEntries(table));
}
#endif

#endif
