#ifndef GFX_BASISSCALETRANSFORM_H
#define GFX_BASISSCALETRANSFORM_H

#include "common.h"
#include <stddef.h>

struct BasisScaleVector {
    f32 x, y, z;
};
struct BasisScaleTransform {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ f32 basis[3][3];
    /* 0x30 */ f32 scale[3];
    /* 0x3C */ BasisScaleVector scaled[3];
    /* 0x60 */ BasisScaleVector normalized[3];
};
typedef char BasisScaleTransformLayoutCheck[
    offsetof(BasisScaleTransform, basis) == 0xC &&
    offsetof(BasisScaleTransform, scale) == 0x30 &&
    offsetof(BasisScaleTransform, scaled) == 0x3C &&
    offsetof(BasisScaleTransform, normalized) == 0x60 &&
    sizeof(BasisScaleTransform) == 0x84 ? 1 : -1];

#endif
