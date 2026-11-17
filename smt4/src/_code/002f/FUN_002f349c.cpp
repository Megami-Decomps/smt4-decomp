#include "common.h"
#include "gfx/Vec4.h"

extern "C" {

/* Copies a four-float vector. */
void FUN_002f349c(Vec4 *destination, const Vec4 *source)
{
    *destination = *source;
}

} /* extern "C" */
