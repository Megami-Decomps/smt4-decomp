#ifndef GAMEDATA_ITEM_PRIORITY_RECORDS_H
#define GAMEDATA_ITEM_PRIORITY_RECORDS_H
#include "gamedata/ConsumableRecordA.h"

struct ContentItemPriorityRecord {
    /* 0x00 */ u8 unk00[0x25];
    /* 0x25 */ u8 priority;
};
typedef char ItemPriorityRecordOffsets[
    offsetof(ContentItemPriorityRecord, priority) == 0x25 ? 1 : -1];
#endif
