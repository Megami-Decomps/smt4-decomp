#include "common.h"

struct ByteBuffer {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 *data;
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ u32 length;
};

extern "C" {

/* Appends a 16-bit value to the buffer, high byte first. */
void bufferAppendU16BigEndian(ByteBuffer *buffer, u32 value)
{
    buffer->data[buffer->length++] = (u8)(value >> 8);
    buffer->data[buffer->length++] = (u8)value;
}

} /* extern "C" */
