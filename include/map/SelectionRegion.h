#ifndef MAP_SELECTION_REGION_H
#define MAP_SELECTION_REGION_H

#include "nw/math/MTX33.h"
#include <stddef.h>

struct SelectionRegionPlane {
    /* 0x00 */ nw::math::VEC3 origin;
    /* 0x0C */ nw::math::VEC3 normal;
};
struct SelectionRegionQuad {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u16 secondary;
    /* 0x1A */ u16 kind;
    /* 0x1C */ SelectionRegionPlane planes[4];
};
/* Shin Megami Tensei IV's table has 32 entries; Apocalypse's has 40. */
struct SelectionRegionsIV {
    /* 0x000 */ SelectionRegionQuad regions[32];
    /* 0xF80 */ s32 count;
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
    offsetof(SelectionRegionsIV, count) == 0xF80 &&
    offsetof(SelectionRegions, count) == 0x1360 ? 1 : -1];
#endif
