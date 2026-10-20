#include "common.h"

extern "C" {

/* Returns the byte offset of element `index` in an array of 0x60-byte elements. */
s32 FUN_00175c30(u32 unused, s32 index)
{
    return index * 0x60;
}

} /* extern "C" */
