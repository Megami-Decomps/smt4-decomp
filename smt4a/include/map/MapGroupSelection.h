#ifndef MAP_MAPGROUPSELECTION_H
#define MAP_MAPGROUPSELECTION_H

#include "common.h"
#include <stddef.h>

/* An entry in the map group table. Zero flag and bound values impose no condition. */
struct MapGroupRecord {
    /* 0x00 */ char name[0x10];
    /* 0x10 */ u16 requiredFlag;
    /* 0x12 */ u16 blockedFlag;
    /* 0x14 */ u16 minimum;
    /* 0x16 */ u16 maximum;
};
typedef char MapGroupRecordOffsets[sizeof(MapGroupRecord) == 0x18 &&
    offsetof(MapGroupRecord, requiredFlag) == 0x10 && offsetof(MapGroupRecord, maximum) == 0x16 ? 1 : -1];

#endif
