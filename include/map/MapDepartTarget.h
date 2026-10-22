#ifndef MAP_MAPDEPARTTARGET_H
#define MAP_MAPDEPARTTARGET_H

#include "common.h"

struct MapDepartTarget {
    /* 0x00 */ s32 group;
    /* 0x04 */ s32 map;
    /* 0x08 */ u32 target;
    /* 0x0c */ s32 destination;
};

struct MapDepartTargetRecord {
    /* 0x00 */ s8 group;
    /* 0x01 */ s8 map;
    /* 0x02 */ u8 target;
    /* 0x03 */ u8 destination;
};

#endif
