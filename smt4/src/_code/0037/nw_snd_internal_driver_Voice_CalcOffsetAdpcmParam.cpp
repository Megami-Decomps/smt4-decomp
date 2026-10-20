#include "common.h"

extern "C" {

int nn_snd_CTR_DecodeAdpcmData(int src, u8 *dst, u32 a, u32 b, int count);

void nw_snd_internal_driver_Voice_CalcOffsetAdpcmParam(u32 a, u32 b, u32 size, int source)
{
    u32 offset;
    u8 buffer[28];

    for (offset = 0; offset < size; offset += 0xe) {
        nn_snd_CTR_DecodeAdpcmData(source, buffer, b, a, 0xe);
        source = source + 8;
    }
}

} /* extern "C" */
