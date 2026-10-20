#include "common.h"

extern "C" {

void FUN_002e9300(u32 dest, u8 *buffer);
void FUN_0030f090(u32 source, u8 *buffer, s32 size);

/* Fills a 32-byte buffer from `source` (size 0x10) and hands it to FUN_002e9300 with `dest`. */
void FUN_00123844(u32 dest, u32 source)
{
    u8 buffer[32];

    FUN_0030f090(source, buffer, 0x10);
    FUN_002e9300(dest, buffer);
}

} /* extern "C" */
