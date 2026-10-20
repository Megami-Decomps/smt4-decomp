/* Reads an 8-byte value from the reader's buffer at the current offset (via FUN_002e77ec), or yields zeros when fewer than 8 bytes remain. */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk00[8];   /* 0x00 */
    u32 buffer;    /* 0x08 */
    u32 offset;    /* 0x0c */
} BufferReader;

s32 FUN_002e7328(BufferReader *reader, u32 size);
u32 FUN_002e76b6(u32 buffer);
void FUN_002e77ec(u32 address, u32 *out);

void readerRead8(BufferReader *reader, u32 *out)
{
    if (FUN_002e7328(reader, 8) != 0) {
        FUN_002e77ec(FUN_002e76b6(reader->buffer) + reader->offset, out);
        reader->offset += 8;
        return;
    }
    out[0] = 0;
    out[1] = 0;
}

} /* extern "C" */
