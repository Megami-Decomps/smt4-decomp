#include "common.h"

struct Vec4 {
    f32 x, y, z, w;
};

extern "C" {

/* Virtual setter: copies a four-float vector. */
void FUN_0031a9e8(Vec4 *self, const Vec4 *value)
{
    *self = *value;
}

} /* extern "C" */
