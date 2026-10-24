#include "common.h"

struct Vec4 {
    f32 x, y, z, w;
};

struct Object002f32cc {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Vec4 vector;
};

extern "C" {

/* Copies a four-float vector into the one at 0x10. */
void FUN_002f32cc(Object002f32cc *object, const Vec4 *vector)
{
    object->vector = *vector;
}

} /* extern "C" */
