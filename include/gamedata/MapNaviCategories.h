#ifndef GAMEDATA_MAPNAVICATEGORIES_H
#define GAMEDATA_MAPNAVICATEGORIES_H
#include "common.h"
#include <stddef.h>

/* The table accessor's instance has no state used by these getters. */
struct MapNaviTableContext {};
struct MapNaviCategoryRecord {
    /* 0x00 */ s16 id;
    /* 0x02 */ u16 reserved;
    /* 0x04 */ u8 category;
    /* 0x05 */ u8 reserved05;
    /* 0x06 */ s8 startX;
    /* 0x07 */ s8 startY;
    /* 0x08 */ s8 endX;
    /* 0x09 */ s8 endY;
    /* 0x0A */ u8 padding0A[0xA];
};
struct MapNaviCategoryGrid {
    u16 firstCell;
    s16 width;
    s16 pitch;
    s16 height;
};
typedef char MapNaviCategoryLayoutCheck[
    sizeof(MapNaviCategoryRecord) == 0x14 && sizeof(MapNaviCategoryGrid) == 8 &&
    offsetof(MapNaviCategoryRecord, category) == 4 &&
    offsetof(MapNaviCategoryRecord, startX) == 6 ? 1 : -1];
#endif
