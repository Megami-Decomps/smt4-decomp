/* NON_MATCHING: retail uses vmov s0, r0 where the compiled block uses vldr s0, [r4, #12]. */
#include "shard/W5_W5Match5_TwinRecords.h"

using namespace SampleValueDecoding;



extern "C" EncodedValue* FUN_003f8940(ValueDecoder* decoder, f32 time);

extern "C" f32 FUN_003f8f24(ValueDecoder* decoder, f32 time)
{
    const EncodedValue* encoded = FUN_003f8940(decoder, time);
    u32 value = (u32)encoded->low + ((u32)encoded->high << 8);
    return (f32)value * decoder->scale + decoder->bias;
}
