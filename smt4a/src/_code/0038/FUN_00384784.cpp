#include "common.h"

struct Vec3 {
    s32 x, y, z;
};

struct Positioned {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s32 x;
    /* 0x24 */ s32 y;
    /* 0x28 */ s32 z;
    /* 0x2c */ f32 scale;
};

extern "C" {

/* Virtual setter: copies the position and resets the scale to 1. */
void FUN_00384784(Positioned *self, const Vec3 *position)
{
    self->x = position->x;
    self->y = position->y;
    self->z = position->z;
    self->scale = 1.0f;
}

} /* extern "C" */
