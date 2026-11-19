#include "common.h"

extern "C" {

/* Clears byte `byteOffset` of element `index` of the 16-bit array; always returns 1. */
u32 sysClearRecordByte(u16 *buffer, s32 index, s32 byteOffset)
{
    ((u8 *)&buffer[index])[byteOffset] = 0;
    return 1;
}

} /* extern "C" */
