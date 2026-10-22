#ifndef SHARD_SCROLLBARGEOMETRY_H
#define SHARD_SCROLLBARGEOMETRY_H

#include "common.h"

struct ScrollbarGeometry {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ s32 width;
    /* 0x34 */ s32 trackHeight;
    /* 0x38 */ s32 visibleCount;
    /* 0x3c */ s32 totalCount;
    /* 0x40 */ s32 scrollOffset;
};

#endif
