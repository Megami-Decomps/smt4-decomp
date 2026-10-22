/* NON_MATCHING: checksum byte swaps and 64-bit byte assembly use different registers and instruction ordering. */
#include "common.h"

struct PackedHeaderValue {
    u32 low;
    u32 high;
};

static __inline u16 readBigEndianHalfword(const u8 *data)
{
    u16 value = *(const u16 *)data;
    return (u16)((value << 8) | (value >> 8));
}

extern "C" {
// Decode an L2 header's big-endian value and verify its halfword checksum.
u32 FUN_001ed8ac(const u8 *header, PackedHeaderValue *value, u16 *count)
{
    if (*header++ != 'L' || *header++ != '2') {
        return 0;
    }
    u16 checksum = readBigEndianHalfword(header);
    header += 2;
    u64 encoded = ((u64)header[0] << 56) | ((u64)header[1] << 48)
                | ((u64)header[2] << 40) | ((u64)header[3] << 32)
                | ((u64)header[4] << 24) | ((u64)header[5] << 16)
                | ((u64)header[6] << 8) | header[7];
    header += 8;
    value->high = (u32)(encoded >> 32);
    u32 high = value->high;
    if ((s32)high < 0) {
        high &= 0x7fffffff;
    }
    value->low = (u32)encoded;
    u32 expected = (high >> 16) ^ 0xaaaa ^ (high & 0xffff)
                 ^ ((value->low >> 16) & 0xffff) ^ (value->low & 0xffff);
    *count = readBigEndianHalfword(header) + 1;
    return checksum == expected;
}
}
