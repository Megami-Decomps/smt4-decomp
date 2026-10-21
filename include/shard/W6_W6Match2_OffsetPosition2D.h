#ifndef SHARD_W6_W6MATCH2_OFFSET_POSITION_2D_H
#define SHARD_W6_W6MATCH2_OFFSET_POSITION_2D_H

#include "common.h"

struct OffsetPosition2D {
    f32 x;       // 0x00
    f32 y;       // 0x04
    f32 offsetX; // 0x08
    f32 offsetY; // 0x0c
};

#endif
