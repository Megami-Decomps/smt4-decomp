/* NON_MATCHING: consumed-byte cursor is recovered, but the compiler folds header count/address updates into CMP and indexed/writeback loads. */
#include "shard/Shard004A.h"

/* Decode the header, four big-endian short values, and two trailing byte values. */
extern "C" s32 shortValueRecordDecode(ShortValueDecoder *decoder, const u8 *data, u32 size)
{
    u32 consumed = 0;
    if (size - consumed == 0) {
        return -1;
    }
    decoder->type = data[consumed++];
    if (size - consumed == 0) {
        return -1;
    }
    decoder->flags = data[consumed++];
    if (size - consumed < 10) {
        return -1;
    }
    data += consumed;
    decoder->first = decoderReadBigEndian16(data);
    decoder->second = decoderReadBigEndian16(data + 2);
    decoder->third = decoderReadBigEndian16(data + 4);
    decoder->fourth = decoderReadBigEndian16(data + 6);
    decoder->fifth = data[8];
    decoder->sixth = data[9];
    return consumed + 10;
}
