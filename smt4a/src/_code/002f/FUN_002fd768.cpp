#include "common.h"

extern "C" {

void FUN_002e9300(u32 dest, u8 *buffer);
void FUN_002e97b4(u32 source, u8 *buffer, s32 size);

/* Fills a 256-byte buffer from `source` (size 0x80) and hands it to FUN_002e9300 with `dest`. */
void FUN_002fd768(u32 dest, u32 source)
{
    u8 buffer[256];

    FUN_002e97b4(source, buffer, 0x80);
    FUN_002e9300(dest, buffer);
}

} /* extern "C" */
