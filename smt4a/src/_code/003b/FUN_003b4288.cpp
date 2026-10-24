#include "common.h"

struct Obj003b4288Vec4 {
    f32 x, y, z, w;
};

/* Copies a 4-float vector. */
extern "C" void FUN_003b4288(Obj003b4288Vec4 *dst, const Obj003b4288Vec4 *src)
{
    *dst = *src;
}
