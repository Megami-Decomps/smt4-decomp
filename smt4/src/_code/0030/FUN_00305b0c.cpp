#include "common.h"

struct Vec4 {
    f32 x, y, z, w;
};

struct Object00305b0c {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ void *target;
};

extern "C" {

void FUN_00318c9c(void *target, const Vec4 *vector);

/* Forwards the vector to the object's target at 0x30. */
void FUN_00305b0c(Object00305b0c *object, const Vec4 *vector)
{
    FUN_00318c9c(object->target, vector);
}

} /* extern "C" */
