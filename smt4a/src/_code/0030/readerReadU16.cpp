/* Reads a u16 from the reader's buffer at the current offset, or yields 0 when fewer than 2 bytes remain. */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk00[8];   /* 0x00 */
    u32 buffer;    /* 0x08 */
    u32 offset;    /* 0x0c */
} BufferReader;

s32 FUN_002e7328(BufferReader *reader, u32 size);
u32 FUN_002e76b6(u32 buffer);

void readerReadU16(BufferReader *reader, u16 *out)
{
    if (FUN_002e7328(reader, 2) != 0) {
        u32 address = FUN_002e76b6(reader->buffer) + reader->offset;

        *out = *(u16 *)address;
        reader->offset += 2;
        return;
    }
    *out = 0;
}

} /* extern "C" */
