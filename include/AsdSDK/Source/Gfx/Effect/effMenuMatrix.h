#ifndef ASDSDK_EFFECT_EFFMENUMATRIX_H
#define ASDSDK_EFFECT_EFFMENUMATRIX_H
#include "common.h"
#include <stddef.h>
struct EffMenuRectangle {
    s32 x, y, width, height;
};
struct EffMenuMatrix {
    f32 values[16];
};
// Matrix-bearing kind-seven menu entry (the shared render-node extension).
struct EffMenuMatrixNode {
    u32 next;
    u32 kind;
    EffMenuRectangle rectangle;
    f32 scale;
    u32 color;
    EffMenuMatrix transform;
    u32 resource;
    u32 unk64;
};
typedef char EffMenuMatrixNodeLayoutCheck[
    offsetof(EffMenuMatrixNode, transform) == 0x20 &&
    offsetof(EffMenuMatrixNode, resource) == 0x60 && sizeof(EffMenuMatrixNode) == 0x68 ? 1 : -1];
#endif
