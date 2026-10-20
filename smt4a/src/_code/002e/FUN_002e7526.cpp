#include "common.h"

extern "C" {

/* Stores the 16-bit value `value` as two little-endian bytes. */
void FUN_002e7526(u32 value, u8 *dest)
{
    *dest = (u8)value;
    dest[1] = (u8)((u32)value >> 8);
}

} /* extern "C" */
