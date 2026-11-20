#include "common.h"

extern "C" {

void streamWriterWriteBits(u32 a, u32 b, s32 size);

/* Calls streamWriterWriteBits with `count` 8-byte units (count * 8 bytes). */
void FUN_002fde8c(u32 a, u32 b, s32 count)
{
    streamWriterWriteBits(a, b, count << 3);
}

} /* extern "C" */
