#include "common.h"

struct Vec3 {
    f32 x, y, z;
};

struct Object00382f00 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 x;
    /* 0x24 */ f32 y;
    /* 0x28 */ f32 z;
    /* 0x2c */ f32 w;
};

extern "C" {

/* Sets the vector at 0x20 to the given position with a fourth component of zero. */
void FUN_00382f00(Object00382f00 *object, const Vec3 *position)
{
    object->x = position->x;
    object->y = position->y;
    object->z = position->z;
    object->w = 0.0f;
}

} /* extern "C" */
