#include "common.h"

struct Obj002faf44Vec4 {
    f32 x, y, z, w;
};

/* Copies a 4-float vector. */
extern "C" void FUN_002faf44(Obj002faf44Vec4 *dst, const Obj002faf44Vec4 *src)
{
    *dst = *src;
}
