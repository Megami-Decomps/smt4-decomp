/* NON_MATCHING: the SDK loop shape now matches (the bit loop counts down from 32 and breaks once the output is
 * full); remaining: retail tests the size after reading the symbol width, spills the symbols-per-word count instead of
 * the symbol shift, reloads the source pointer for its increment, and allocates packed/count/tree differently. */
#include "common.h"

/* Decompresses Huffman-coded data (the SDK's 4- or 8-bit symbol format) into output. */
extern "C" void nn_cx_UncompressHuffman(u32 *input, u32 *output)
{
    u32 *source = input;
    u32 *destination = output;
    s32 remaining = (s32)(*source >> 8);
    u32 dataBits = *(u8 *)source & 15u;
    u32 symbolsPerWord = (dataBits & 7u) + 4u;
    u32 packed = 0;
    u32 packedCount = 0;
    u8 *tree;

    if (remaining == 0) {
        remaining = (s32)source[1];
        tree = (u8 *)(source + 2);
    } else {
        tree = (u8 *)(source + 1);
    }
    u8 *treeStart = tree + 1;
    source = (u32 *)(tree + ((*tree + 1) << 1));
    tree = treeStart;

    while (remaining > 0) {
        s32 bitsLeft = 32;
        u32 bits = *source++;
        while (--bitsLeft >= 0) {
            u32 shift = (bits >> 31) & 1;
            u32 check = *tree;
            check <<= shift;
            /* The child pair sits (offset + 1) halfwords past the node's even-aligned address. */
            tree = (u8 *)((((u32)tree >> 1) << 1) + (((*tree & 0x3f) + 1) << 1) + shift);
            if (check & 0x80) {
                packed = (packed >> dataBits) | (*tree << (32 - dataBits));
                tree = treeStart;
                ++packedCount;
                if (packedCount == symbolsPerWord) {
                    *destination++ = packed;
                    remaining -= 4;
                    packedCount = 0;
                }
            }
            if (remaining <= 0) {
                break;
            }
            bits <<= 1;
        }
    }
}
