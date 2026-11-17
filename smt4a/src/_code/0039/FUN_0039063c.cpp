#include "common.h"
#include "gfx/Vec4.h"

extern "C" {

/* Virtual setter: copies a four-float vector. */
void FUN_0039063c(Vec4 *self, const Vec4 *value)
{
    *self = *value;
}

} /* extern "C" */
