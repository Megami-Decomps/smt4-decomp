#include "common.h"

extern "C" {

u8 idIsAbove400(u32 value)
{
    return value >= 401;
}

} /* extern "C" */
