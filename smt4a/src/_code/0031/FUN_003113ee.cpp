/* NON_MATCHING: tag masking and register scheduling differ from retail. */
#include "common.h"

struct StreamWriter;
extern "C" {
void bufferAssignByte(StreamWriter *writer, const u8 *value);
void strHolderAssignOneWide(StreamWriter *writer, const u16 *value);
void byteSetBit7(u8 *flags, s32 enable);

// Encode short values in seven bits, reserving 0x7f for a following full word.
void FUN_003113ee(StreamWriter *writer, s32 enable, u16 value)
{
    u8 tag = 0;
    if (value < 0x7f) {
        byteSetBit7(&tag, enable);
        tag = (value & 0x7f) | (tag & 0x80);
        u8 encoded = tag;
        bufferAssignByte(writer, &encoded);
    } else {
        byteSetBit7(&tag, enable);
        tag = (tag & 0x80) | 0x7f;
        u8 encoded = tag;
        bufferAssignByte(writer, &encoded);
        strHolderAssignOneWide(writer, &value);
    }
}
}
