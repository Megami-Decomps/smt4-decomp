#include "shard/Shard0046.h"

extern "C" {

extern s32 nn_snd_CTR_DecodeAdpcmData(s32 data, u8 *out, u32 b, u32 a, s32 count);

void nw_snd_internal_driver_Voice_CalcOffsetAdpcmParam(u32 a, u32 b, u32 length, s32 data)
{
    u8 scratch[28];
    u32 offset;

    for (offset = 0; offset < length; offset += 0xE) {
        nn_snd_CTR_DecodeAdpcmData(data, scratch, b, a, 0xE);
        data = data + 8;
    }
}

} /* extern "C" */
