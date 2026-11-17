#include "common.h"
#include "gfx/Vec4.h"

extern "C" {

/* Virtual setter: copies a four-float vector over the object's first 16 bytes. */
void FUN_003ac710(Vec4 *self, const Vec4 *value)
{
    *self = *value;
}

} /* extern "C" */
