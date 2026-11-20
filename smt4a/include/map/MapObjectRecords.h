#ifndef MAP_OBJECT_RECORDS_H
#define MAP_OBJECT_RECORDS_H

#include "common.h"
#include <stddef.h>

/* A placed-object record from data table 45, including entries appended by add-on content. */
struct MapObjRecord {
    /* 0x00 */ s16 map;
    /* 0x02 */ s16 object;
    /* 0x04 */ s16 kind;
    /* 0x06 */ s16 x;
    /* 0x08 */ s16 y;
    /* 0x0A */ s16 z;
    /* 0x0C */ s16 placement;  /* scale for loaded map objects; heading for points */
    /* 0x0E */ s16 height;
    /* 0x10 */ char name[0x10];
};
typedef char MapObjRecordLayoutCheck[offsetof(MapObjRecord, placement) == 0x0C && sizeof(MapObjRecord) == 0x20 ? 1 : -1];

extern "C" MapObjRecord *mapObjGetCombinedEntry(u32 index);

#endif
