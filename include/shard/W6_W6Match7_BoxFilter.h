#ifndef SHARD_W6_W6MATCH7_BOXFILTER_H
#define SHARD_W6_W6MATCH7_BOXFILTER_H
#include "common.h"

struct PackedBlurRow {
    u32 words[4];
};

// Each byte lane contributes one quarter of a horizontal pixel pair.
// Dropping low bits before addition prevents carries between byte lanes.
static inline u32 packedBlurPair(u32 left, u32 right)
{
    return (((left >> 16) + (right << 16) + (left >> 8) + (right << 24)) >> 1) & 0x7f7f7f7fu;
}

static inline PackedBlurRow packedBlurRow(const u32 *source)
{
    u32 first = (source[0] >> 1) & 0x7f7f7f7fu;
    u32 second = (source[1] >> 1) & 0x7f7f7f7fu;
    u32 third = (source[2] >> 1) & 0x7f7f7f7fu;
    u32 fourth = (source[3] >> 1) & 0x7f7f7f7fu;
    u32 tail = (*reinterpret_cast<const u16 *>(source + 4) >> 1) & 0x7f7f7f7fu;
    PackedBlurRow row;
    row.words[0] = packedBlurPair(first, second);
    row.words[1] = packedBlurPair(second, third);
    row.words[2] = packedBlurPair(third, fourth);
    row.words[3] = packedBlurPair(fourth, tail);
    return row;
}

static inline void packedBlurStore(u32 *destination, const PackedBlurRow &top, const PackedBlurRow &bottom)
{
    destination[0] = top.words[0] + bottom.words[0];
    destination[1] = top.words[1] + bottom.words[1];
    destination[2] = top.words[2] + bottom.words[2];
    destination[3] = top.words[3] + bottom.words[3];
}
#endif
