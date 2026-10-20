#include "common.h"

extern "C" {

/* Stores the 16-bit value `value` as two little-endian bytes. */
void writeU16Le(u32 value, u8 *dest)
{
    *dest = (u8)value;
    dest[1] = (u8)((u32)value >> 8);
}

} /* extern "C" */
