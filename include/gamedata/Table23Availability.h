#ifndef GAMEDATA_TABLE23AVAILABILITY_H
#define GAMEDATA_TABLE23AVAILABILITY_H
#include "gamedata/DataTable.h"

struct Table23AvailabilityRecord {
    /* 0x00 */ s32 id;
    /* 0x04 */ s16 requiredFlag;
    /* 0x06 */ s16 excludedFlag;
    /* 0x08 */ u32 requiredUnit;
};
typedef char Table23AvailabilityRecordSizeCheck[sizeof(Table23AvailabilityRecord) == 0xC ? 1 : -1];
#endif
