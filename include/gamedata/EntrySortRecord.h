#ifndef GAMEDATA_ENTRYSORTRECORD_H
#define GAMEDATA_ENTRYSORTRECORD_H
#include "common.h"
#include <stddef.h>
struct EntrySortRecord {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 order;
    /* 0x06 */ u8 category;
};
typedef char EntrySortRecordLayoutCheck[sizeof(EntrySortRecord) == 8 &&
    offsetof(EntrySortRecord, order) == 4 && offsetof(EntrySortRecord, category) == 6 ? 1 : -1];
#endif
