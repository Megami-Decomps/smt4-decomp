#include "common.h"

struct Obj003768bcVec4 {
    f32 x, y, z, w;
};

/* Copies a 4-float vector. */
extern "C" void FUN_003768bc(Obj003768bcVec4 *dst, const Obj003768bcVec4 *src)
{
    *dst = *src;
}
