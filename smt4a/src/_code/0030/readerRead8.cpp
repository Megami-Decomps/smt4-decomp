/* Reads an 8-byte value from the reader's buffer at the current offset (via copyU64), or yields zeros when fewer than 8 bytes remain. */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk00[8];   /* 0x00 */
    u32 buffer;    /* 0x08 */
    u32 offset;    /* 0x0c */
} BufferReader;

s32 streamReaderHasBytes(BufferReader *reader, u32 size);
u32 onlineBufferGetData(u32 buffer);
void copyU64(u32 address, u32 *out);

void readerRead8(BufferReader *reader, u32 *out)
{
    if (streamReaderHasBytes(reader, 8) != 0) {
        copyU64(onlineBufferGetData(reader->buffer) + reader->offset, out);
        reader->offset += 8;
        return;
    }
    out[0] = 0;
    out[1] = 0;
}

} /* extern "C" */
