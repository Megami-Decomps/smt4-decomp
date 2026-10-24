#include "common.h"

struct Vec4 {
    f32 x, y, z, w;
};

extern "C" void FUN_0034f8a8(Vec4 *dest, const Vec4 *source)
{
    *dest = *source;
}
