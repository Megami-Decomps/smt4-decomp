#ifndef GAMEDATA_MAPNAVICATEGORIES_H
#define GAMEDATA_MAPNAVICATEGORIES_H
#include "common.h"
#include <stddef.h>

/* The table accessor's instance has no state used by these getters. */
struct MapNaviTableContext {};
struct MapNaviCategoryRecord {
    /* 0x00 */ s16 id;
    union {
        /* 0x02 */ u16 reserved;
        /* 0x02 */ s16 slot; // navigation display slot of the category
    };
    /* 0x04 */ u8 category;
    /* 0x05 */ u8 reserved05;
    /* 0x06 */ s8 startX;
    /* 0x07 */ s8 startY;
    /* 0x08 */ s8 endX;
    /* 0x09 */ s8 endY;
    union {
        /* 0x0A */ u8 padding0A[0xA];
        struct {
            /* 0x0A */ s16 unk0A;
            /* 0x0C */ s16 originX;
            /* 0x0E */ s16 originY;
            /* 0x10 */ s16 offsetX;
            /* 0x12 */ s16 offsetY;
        } placement;
    };
};
struct MapNaviCategoryGrid {
    u16 firstCell;
    s16 width;
    s16 pitch;
    s16 height;
};
/* One marker in either of the navigation display's 0x10-byte slot arrays. */
struct MapNaviMarker {
    /* 0x00 */ s16 mapId;
    /* 0x02 */ u8 section;
    /* 0x03 */ u8 state;
    /* 0x04 */ u16 category;
    /* 0x06 */ u8 icon;
    /* 0x07 */ u8 enabled;
    /* 0x08 */ u16 x;
    /* 0x0A */ u16 y;
    /* 0x0C */ u8 padding[4];
};
struct MapNaviMarkerIcon {
    /* 0x00 */ u8 padding[3];
    /* 0x03 */ u8 icon;
};
typedef char MapNaviMarkerLayoutCheck[
    sizeof(MapNaviMarker) == 0x10 &&
    offsetof(MapNaviMarker, category) == 4 &&
    offsetof(MapNaviMarker, x) == 8 &&
    offsetof(MapNaviMarkerIcon, icon) == 3 ? 1 : -1];
typedef char MapNaviCategoryLayoutCheck[
    sizeof(MapNaviCategoryRecord) == 0x14 && sizeof(MapNaviCategoryGrid) == 8 &&
    offsetof(MapNaviCategoryRecord, category) == 4 &&
    offsetof(MapNaviCategoryRecord, startX) == 6 ? 1 : -1];
#endif
