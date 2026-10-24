#include "common.h"

struct Vec3 {
    f32 x, y, z;
};

struct Object {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 x;
    /* 0x24 */ f32 y;
    /* 0x28 */ f32 z;
    /* 0x2C */ f32 w;
};

extern "C" void FUN_002faf50(Object *object, const Vec3 *position)
{
    object->x = position->x;
    object->y = position->y;
    object->z = position->z;
    object->w = 1.0f;
}
