#include "common.h"
#include "gfx/Vec4.h"

struct Object003b2508 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Vec4 *vector;
};

extern "C" {

/* Copies the vector into the one the object points at (0x20). */
void FUN_003b2508(Object003b2508 *object, const Vec4 *vector)
{
    *object->vector = *vector;
}

} /* extern "C" */
