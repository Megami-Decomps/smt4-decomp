#include "common.h"

extern "C" {

/* Returns `size` plus 8 bytes of header, rounded up to a multiple of 4. */
u32 sizeWithHeaderAligned(s32 size)
{
    return (size + 0xBU) & 0xFFFFFFFC;
}

} /* extern "C" */
