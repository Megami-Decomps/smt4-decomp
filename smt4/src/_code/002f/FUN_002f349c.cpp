#include "common.h"

struct Vec4 {
    f32 x, y, z, w;
};

extern "C" {

/* Copies a four-float vector. */
void FUN_002f349c(Vec4 *destination, const Vec4 *source)
{
    *destination = *source;
}

} /* extern "C" */
