#include "common.h"
/* Applies the category's scale factor. */
extern "C" f32 mathScaleByCategory(s32 category, f32 value)
{
    f32 factor = category < 4 ? 1.2f : 1.1f;
    return value * factor;
}
