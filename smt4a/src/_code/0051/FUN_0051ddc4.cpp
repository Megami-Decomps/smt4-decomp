/* NON_MATCHING: retail uses vmov s0, r0 where the compiled block uses vldr s0, [r4, #12]. */
#include "shard/W5_W5Match5_TwinRecords.h"

using namespace SampleValueDecoding;



extern "C" EncodedValue* FUN_0051d8a4(ValueDecoder* decoder, f32 time);

extern "C" f32 FUN_0051ddc4(ValueDecoder* decoder, f32 time)
{
    const EncodedValue* encoded = FUN_0051d8a4(decoder, time);
    u32 value = (u32)encoded->low + ((u32)encoded->high << 8);
    return (f32)value * decoder->scale + decoder->bias;
}
