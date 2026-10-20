#include "common.h"

extern "C" {

/* Returns the byte offset of voice (index + 1) in an array of 0x1B8-byte voices. */
s32 FUN_00175a78(u32 unused, s32 index)
{
    return (index + 1) * 0x1B8;
}

} /* extern "C" */
