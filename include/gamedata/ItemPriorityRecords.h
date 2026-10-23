#ifndef GAMEDATA_ITEM_PRIORITY_RECORDS_H
#define GAMEDATA_ITEM_PRIORITY_RECORDS_H
#include "gamedata/Table8Record.h"

struct ContentItemPriorityRecord {
    /* 0x00 */ u8 unk00[0x25];
    /* 0x25 */ u8 priority;
};
struct EquipmentItemPriorityRecord {
    /* 0x00 */ u8 unk00[0x7E];
    /* 0x7E */ u16 priority;
};
typedef char ItemPriorityRecordOffsets[
    offsetof(ContentItemPriorityRecord, priority) == 0x25 &&
    offsetof(EquipmentItemPriorityRecord, priority) == 0x7E ? 1 : -1];
#endif
