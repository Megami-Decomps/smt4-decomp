#include "common.h"

struct Vec4 {
    f32 x, y, z, w;
};

struct Object {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Vec4 vector;
};

extern "C" void FUN_003a1ee4(Object *object, const Vec4 *vector)
{
    object->vector = *vector;
}
