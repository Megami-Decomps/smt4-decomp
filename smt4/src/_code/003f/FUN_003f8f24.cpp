#include "shard/W5_W5Match5_TwinRecords.h"

using namespace SampleValueDecoding;

extern "C" EncodedValue* FUN_003f8940(ValueDecoder* decoder, f32 time);

/* The 16-bit value stored little-endian in the encoded sample, as a float. */
static __inline f32 encodedValueGet(const EncodedValue* encoded)
{
    return (u32)encoded->low + ((u32)encoded->high << 8);
}

/* The decoder's value at `time`, scaled and offset into its output range. */
extern "C" f32 FUN_003f8f24(ValueDecoder* decoder, f32 time)
{
    return encodedValueGet(FUN_003f8940(decoder, time)) * decoder->scale + decoder->bias;
}
