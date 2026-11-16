#include "shard/Shard004A.h"

/* Reads the four big-endian halfword and two byte values. */
static __inline s32 decoderReadShortValues(ShortValueDecoder *decoder, const u8 *source, u32 size)
{
    if (size < 10)
        return -1;
    decoder->first = decoderReadBigEndian16(source);
    decoder->second = decoderReadBigEndian16(source + 2);
    decoder->third = decoderReadBigEndian16(source + 4);
    decoder->fourth = decoderReadBigEndian16(source + 6);
    decoder->fifth = source[8];
    decoder->sixth = source[9];
    return 10;
}

/* Decode the header, four big-endian short values, and two trailing byte values. */
extern "C" s32 shortValueRecordDecode(ShortValueDecoder *decoder, const u8 *data, u32 size)
{
    s32 used = decoderReadByteWord(&decoder->type, data, size);
    if (used < 0)
        return -1;
    s32 read = decoderReadByte(&decoder->flags, data + used, size - used);
    if (read < 0)
        return -1;
    used += read;
    read = decoderReadShortValues(decoder, data + used, size - used);
    if (read < 0)
        return -1;
    return used + read;
}
