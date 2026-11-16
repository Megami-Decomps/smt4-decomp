#include "shard/Shard004A.h"

/* Reads the two-byte header: the type byte, then the flags byte. */
static __inline s32 decoderReadHeader(PackedDimensionDecoder *decoder, const u8 *source, u32 size)
{
    s32 read = decoderReadByteWord(&decoder->type, source, size);
    if (read < 0)
        return -1;
    source += read;
    size -= read;
    read = decoderReadByte(&decoder->flags, source, size);
    if (read < 0)
        return -1;
    return 2;
}

/* Reads the packed 24-bit/8-bit dimensions; each is stored plus one. */
static __inline s32 decoderReadDimensions(PackedDimensionDecoder *decoder, const u8 *source, u32 size)
{
    if (size < 4)
        return -1;
    u32 dimensions = (__rev(*reinterpret_cast<const u32 *>(source)) & ~0xffu) | source[3];
    decoder->first = (dimensions >> 8) + 1;
    decoder->second = (dimensions & 0xff) + 1;
    return 4;
}

/* Decode the two-byte header and packed 24/8-bit dimensions. */
extern "C" s32 packedDimensionDecode(PackedDimensionDecoder *decoder, const u8 *data, u32 size)
{
    s32 used = decoderReadHeader(decoder, data, size);
    if (used < 0)
        return -1;
    s32 read = decoderReadDimensions(decoder, data + used, size - used);
    if (read < 0)
        return -1;
    return used + read;
}
