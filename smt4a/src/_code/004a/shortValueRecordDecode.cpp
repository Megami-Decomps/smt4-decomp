/* NON_MATCHING: ARMCC indexes decoded fields directly instead of retaining retail's advancing cursor/count calculation. */
#include "shard/Shard004A.h"

/* Decode the header, four big-endian short values, and two trailing byte values. */
extern "C" s32 shortValueRecordDecode(ShortValueDecoder *decoder, const u8 *data, u32 size)
{
    if (size == 0) {
        return -1;
    }
    decoder->type = data[0];
    if (size - 1 == 0) {
        return -1;
    }
    decoder->flags = data[1];
    if (size - 2 < 10) {
        return -1;
    }
    decoder->first = decoderReadBigEndian16(data + 2);
    decoder->second = decoderReadBigEndian16(data + 4);
    decoder->third = decoderReadBigEndian16(data + 6);
    decoder->fourth = decoderReadBigEndian16(data + 8);
    decoder->fifth = data[10];
    decoder->sixth = data[11];
    return 12;
}
