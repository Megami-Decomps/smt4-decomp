#include "common.h"

struct Obj002e82c4Vec4 {
    f32 x, y, z, w;
};

struct Obj002e82c4 {
    u8 unk00[0x10];
    Obj002e82c4Vec4 value;
};

/* Stores a 4-float vector in a field of the object. */
extern "C" void FUN_002e82c4(Obj002e82c4 *obj, const Obj002e82c4Vec4 *value)
{
    obj->value = *value;
}
