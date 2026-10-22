#ifndef MAP_ENEMYTABLEFILTER_H
#define MAP_ENEMYTABLEFILTER_H

#include "common.h"

struct EnemyTableLocation {
    /* 0x00 */ s8 mapId;
    /* 0x01 */ s8 areaId;
};
struct EnemyTableFilterState {
    /* 0x00 */ void *work;
    /* 0x04 */ s32 count;
};

#endif
