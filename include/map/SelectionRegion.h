#ifndef MAP_SELECTION_REGION_H
#define MAP_SELECTION_REGION_H
#include "map/mapDepart.h"
#include <stddef.h>

struct SelectionRegionPlane {
    MapVector origin;
    MapVector normal;
};
struct SelectionRegionQuad {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u16 secondary;
    /* 0x1A */ u16 kind;
    /* 0x1C */ SelectionRegionPlane planes[4];
};
struct SelectionRegions {
    /* 0x0000 */ SelectionRegionQuad regions[40];
    /* 0x1360 */ s32 count;
};
typedef char SelectionRegionOffsets[
    sizeof(SelectionRegionPlane) == 0x18 &&
    offsetof(SelectionRegionQuad, kind) == 0x1A &&
    offsetof(SelectionRegionQuad, planes) == 0x1C &&
    sizeof(SelectionRegionQuad) == 0x7C &&
    offsetof(SelectionRegions, count) == 0x1360 ? 1 : -1];
#endif
