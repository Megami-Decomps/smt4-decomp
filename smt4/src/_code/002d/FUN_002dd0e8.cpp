#include "common.h"
#include "gfx/Vec4.h"

extern "C" {

/* Virtual setter: copies a four-float vector. */
void FUN_002dd0e8(Vec4 *self, const Vec4 *value)
{
    *self = *value;
}

} /* extern "C" */
