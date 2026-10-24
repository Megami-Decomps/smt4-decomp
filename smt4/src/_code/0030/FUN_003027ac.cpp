#include "common.h"

struct Obj3027acSrc {
    u32 x, y, z;
};

struct Obj3027ac {
    u8 unk00[0x20];
    u32 x, y, z;
    f32 w;
};

/* Sets the object's vector from a three-word source and a w of 1. */
extern "C" void FUN_003027ac(Obj3027ac *obj, const Obj3027acSrc *src)
{
    obj->x = src->x;
    obj->y = src->y;
    obj->z = src->z;
    obj->w = 1.0f;
}
