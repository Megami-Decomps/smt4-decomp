#include "common.h"

struct Vec4 {
    f32 x, y, z, w;
};

extern "C" {

/* Virtual setter: copies a four-float vector over the object's first 16 bytes. */
void FUN_003220d0(Vec4 *self, const Vec4 *value)
{
    *self = *value;
}

} /* extern "C" */
