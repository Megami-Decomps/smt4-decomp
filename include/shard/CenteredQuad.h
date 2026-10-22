#ifndef SHARD_CENTEREDQUAD_H
#define SHARD_CENTEREDQUAD_H

#include "common.h"

struct CenteredQuadPosition {
    CenteredQuadPosition(f32 xValue, f32 yValue, f32 zValue)
        : x(xValue), y(yValue), z(zValue) {}
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
};
struct CenteredQuadVertex {
    /* 0x00 */ CenteredQuadPosition position;
    /* 0x0c */ u8 unk0c[8];
};
struct CenteredQuadDimensions {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ f32 halfWidth;
    /* 0x14 */ f32 halfHeight;
};
struct CenteredQuad {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ CenteredQuadVertex *vertices;
    /* 0x08 */ u8 unk08[0x14];
    /* 0x1c */ CenteredQuadDimensions *dimensions;
};

#endif
