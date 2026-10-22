/* NON_MATCHING: compiler combines byte-swapping loads and folds the checksum constant differently. */
#include "common.h"

struct EncodedLinkId {
    u8 signature[2];
    u16 checksum;
    u32 high;
    u8 low[4];
    u16 count;
};

static inline u32 readBigEndianWord(const u8 *bytes)
{
    return (u32(bytes[0]) << 24) | (u32(bytes[1]) << 16) |
           (u32(bytes[2]) << 8) | bytes[3];
}

extern "C" u32 FUN_002a5d84(const EncodedLinkId *encoded, u32 *id, u16 *count)
{
    if (encoded->signature[0] != 'L' || encoded->signature[1] != '2') {
        return 0;
    }
    u32 high = readBigEndianWord(reinterpret_cast<const u8 *>(&encoded->high));
    u32 low = readBigEndianWord(encoded->low);
    id[1] = high;
    id[0] = low;
    if (s32(high) < 0) {
        high &= 0x7FFFFFFF;
    }
    *count = u16((encoded->count << 8) | (encoded->count >> 8)) + 1;
    u32 checksum = u16((encoded->checksum << 8) | (encoded->checksum >> 8));
    return checksum == ((high >> 16) ^ 0xAAAA ^ (high & 0xFFFF) ^
                        (low >> 16) ^ (low & 0xFFFF));
}
