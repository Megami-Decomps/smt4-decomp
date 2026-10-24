#include "common.h"

struct Object {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ f32 x;
    /* 0x24 */ f32 y;
    /* 0x28 */ f32 z;
    /* 0x2C */ f32 w;
};

extern "C" void FUN_003637f4(Object *object, f32 value)
{
    object->x = value;
    object->y = value;
    object->z = value;
    object->w = 1.0f;
}
