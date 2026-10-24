#include "common.h"

struct UniformScale {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 x;
    /* 0x24 */ f32 y;
    /* 0x28 */ f32 z;
    /* 0x2C */ f32 w;
};

extern "C" {

/* Virtual setter: sets x, y and z to the scale and w to 1. */
void FUN_00352128(UniformScale *self, f32 scale)
{
    self->x = scale;
    self->y = scale;
    self->z = scale;
    self->w = 1.0f;
}

} /* extern "C" */
