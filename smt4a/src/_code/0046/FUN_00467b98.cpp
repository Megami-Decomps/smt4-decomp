#include "common.h"

struct StreamReader {
    /* 0x00 */ const u8 *cursor;
};

/* Reads the next byte and advances the cursor. */
extern "C" u32 FUN_00467b98(StreamReader *reader)
{
    const u8 *p = reader->cursor;
    u8 value = *p++;
    reader->cursor = p;
    return value;
}
