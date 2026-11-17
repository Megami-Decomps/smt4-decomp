/* A position or direction in map space: three floats. */
#ifndef MAP_MAPVECTOR_H
#define MAP_MAPVECTOR_H

#include "common.h"

struct MapVector {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
};

#endif
