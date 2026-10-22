/* NON_MATCHING: ARMCC indexes the byte stream directly instead of advancing retail's cursor and subtracting its start. */
#include "shard/Shard004A.h"

/* Decode the two-byte header and packed 24/8-bit dimensions. */
extern "C" s32 packedDimensionDecode(PackedDimensionDecoder *decoder, const u8 *data, u32 size)
{
    if (size == 0) {
        return -1;
    }
    decoder->type = data[0];
    if (size - 1 == 0) {
        return -1;
    }
    decoder->flags = data[1];
    if (size - 2 < 4) {
        return -1;
    }
    u32 dimensions = decoderReadBigEndian32(data + 2);
    decoder->first = (dimensions >> 8) + 1;
    decoder->second = (dimensions & 0xFF) + 1;
    return 6;
}
