#ifndef ASDSDK_EFFECT_EFFMENUMATRIX_H
#define ASDSDK_EFFECT_EFFMENUMATRIX_H
#include "common.h"
#include <stddef.h>
struct EffMenuPosition {
    f32 x, y, z, w;
};
struct EffMenuMatrix {
    f32 values[16];
};
// Matrix-bearing kind-seven menu entry (the shared render-node extension).
struct EffMenuMatrixNode {
    u32 next;
    u32 kind;
    EffMenuPosition position;
    f32 scale;
    u32 color;
    EffMenuMatrix transform;
    u32 resource;
    u32 unk64;
};
typedef char EffMenuMatrixNodeLayoutCheck[
    sizeof(EffMenuPosition) == 0x10 && offsetof(EffMenuMatrixNode, position) == 8 &&
    offsetof(EffMenuMatrixNode, transform) == 0x20 &&
    offsetof(EffMenuMatrixNode, resource) == 0x60 && sizeof(EffMenuMatrixNode) == 0x68 ? 1 : -1];

struct EffMenuPointNode {
    /* 0x00 */ void *next;
    /* 0x04 */ u32 kind;
    /* 0x08 */ EffMenuPosition position;
    /* 0x18 */ u32 unk18;
    /* 0x1c */ u8 unk1c[0x4c];
};
typedef char EffMenuPointNodeLayoutCheck[
    offsetof(EffMenuPointNode, position) == 8 &&
    offsetof(EffMenuPointNode, unk18) == 0x18 &&
    sizeof(EffMenuPointNode) == 0x68 ? 1 : -1];
#endif
