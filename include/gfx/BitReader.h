#ifndef GFX_BITREADER_H
#define GFX_BITREADER_H
#include "common.h"
#include <stddef.h>
struct BitReader {
    u64 buffer;
    u32 available;
    const u8 *cursor;
};
typedef char BitReaderLayout[sizeof(BitReader) == 0x10 &&
    offsetof(BitReader, available) == 8 && offsetof(BitReader, cursor) == 12 ? 1 : -1];
#endif
