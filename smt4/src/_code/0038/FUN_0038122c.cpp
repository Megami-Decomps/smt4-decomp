#include "common.h"

struct StreamReader {
    /* 0x00 */ const u8 *cursor;
};

/* Reads the next halfword and advances the cursor. */
extern "C" u32 FUN_0038122c(StreamReader *reader)
{
    const u16 *p = (const u16 *)reader->cursor;
    u16 value = *p++;
    reader->cursor = (const u8 *)p;
    return value;
}
