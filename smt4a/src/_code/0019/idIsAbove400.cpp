#include "common.h"

extern "C" {

/* Returns whether `value` is at least 401. */
u8 idIsAbove400(u32 value)
{
    return value >= 401;
}

} /* extern "C" */
