#include "common.h"

struct Obj00363980Vec4 {
    f32 x, y, z, w;
};

struct Obj00363980 {
    u8 unk00[0x10];
    Obj00363980Vec4 value;
};

/* Stores a 4-float vector in a field of the object. */
extern "C" void FUN_00363980(Obj00363980 *obj, const Obj00363980Vec4 *value)
{
    obj->value = *value;
}
