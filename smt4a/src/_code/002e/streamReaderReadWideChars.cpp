#include "common.h"

extern "C" {

void streamReaderReadBytes(u32 dest, u32 source, s32 size);

/* Calls streamReaderReadBytes with `count` 16-bit characters (2 * count bytes). */
void streamReaderReadWideChars(u32 dest, u32 source, s32 count)
{
    streamReaderReadBytes(dest, source, count << 1);
}

} /* extern "C" */
