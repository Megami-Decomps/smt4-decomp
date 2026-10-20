#include "common.h"

extern "C" {

u8 idIsAtLeast350(u32 value)
{
    return value >= 0x15e;
}

} /* extern "C" */
