#include "common.h"

extern "C" {

/* Stores `*base + offset` in `*dest`. */
void iterAddOffset(s32 *dest, s32 *base, s32 offset)
{
    *dest = *base + offset;
}

} /* extern "C" */
