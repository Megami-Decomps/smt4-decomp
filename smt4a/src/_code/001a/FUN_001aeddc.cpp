/* NON_MATCHING: Huffman loop-counter lowering, packed-output registers, and child-address arithmetic differ. */
#include "common.h"

extern "C" void FUN_001aeddc(u32 *input, u32 *output)
{
    u32 remaining = input[0] >> 8;
    const u32 symbolWidth = reinterpret_cast<const u8 *>(input)[0] & 15u;
    const u32 symbolsPerWord = (symbolWidth & 7u) + 4u;
    const u8 *tree;

    if (remaining != 0) {
        tree = reinterpret_cast<const u8 *>(input + 1);
    } else {
        remaining = input[1];
        tree = reinterpret_cast<const u8 *>(input + 2);
    }

    const u8 *root = tree + 1;
    const u8 *node = root;
    const u8 *bitstream = tree + static_cast<u32>(tree[0]) * 2u + 2u;
    u32 packedWord = 0;
    u32 symbolCount = 0;

    if (static_cast<s32>(remaining) <= 0)
        return;

    for (;;) {
        u32 bits = *reinterpret_cast<const u32 *>(bitstream);
        bitstream += 4;

        for (u32 bitIndex = 0; bitIndex < 32; ++bitIndex) {
            const u32 branch = bits >> 31;
            const u32 descriptor = *node;

            // Retail rounds the node's absolute address down to an even byte.
            node = reinterpret_cast<const u8 *>(
                (reinterpret_cast<u32>(node) & ~1u) +
                ((descriptor & 63u) + 1u) * 2u + branch);

            if (((descriptor << branch) & 128u) != 0) {
                const u32 symbol = *node;
                ++symbolCount;

                // An ARM register left shift by 32 produces zero.
                packedWord = (packedWord >> symbolWidth) |
                    (symbol << (32u - symbolWidth));
                node = root;

                if (symbolCount == symbolsPerWord) {
                    symbolCount = 0;
                    remaining -= 4u;
                    *output++ = packedWord;
                }
            }

            if (static_cast<s32>(remaining) <= 0)
                return;

            bits <<= 1;
        }
    }
}
