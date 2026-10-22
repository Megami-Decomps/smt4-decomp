#ifndef GAMEDATA_PARTYSORTRECORD_H
#define GAMEDATA_PARTYSORTRECORD_H

#include "common.h"
#include <stddef.h>

struct SortRecord {
    /* 0x00 */ s32 value;
    /* 0x04 */ s32 primary;
    /* 0x08 */ u16 secondary;
};
typedef char PartySortRecordLayoutCheck[
    offsetof(SortRecord, primary) == 4 && offsetof(SortRecord, secondary) == 8 &&
    sizeof(SortRecord) == 12 ? 1 : -1];

#endif
