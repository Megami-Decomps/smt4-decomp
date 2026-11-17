#include "common.h"
#include "gfx/Vec4.h"

struct Object {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Vec4 vector;
};

extern "C" void FUN_002df474(Object *object, const Vec4 *vector)
{
    object->vector = *vector;
}
