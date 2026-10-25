/* NON_MATCHING: retail uses ldr r3, [r0, #-8] where the compiled block uses sub r3, r0, #8. */
#include "common.h"

struct BackwardCompressionFooter {
    s8 compressedSize[3]; // 0x00: compressed span, including footer
    u8 headerSize;        // 0x03: bytes skipped before the compressed stream
    s8 expansionSize[4];  // 0x04: additional output bytes, little-endian
};

extern "C" void FUN_0019fb60(u8* buffer, u32 inputSize, u32 bufferCapacity)
{
    u8* inputEnd = buffer + inputSize;
    const BackwardCompressionFooter* footer =
        reinterpret_cast<const BackwardCompressionFooter*>(inputEnd - 8);

    u32 compressedSize = (u32)footer->compressedSize[0]
                       | ((u32)footer->compressedSize[1] << 8)
                       | ((u32)footer->compressedSize[2] << 16);
    if (compressedSize > inputSize)
        return;

    u32 expansionSize = (u32)footer->expansionSize[0]
                      | ((u32)footer->expansionSize[1] << 8)
                      | ((u32)footer->expansionSize[2] << 16)
                      | ((u32)footer->expansionSize[3] << 24);
    if (inputSize + expansionSize > bufferCapacity)
        return;

    u8* inputStart = inputEnd - compressedSize;
    u8* input = inputEnd - footer->headerSize;
    u8* output = inputEnd + expansionSize;

    while (inputStart < input) {
        u8 flags = *--input;
        for (u32 bit = 0; bit < 8; ++bit) {
            if (flags & 0x80) {
                u32 tokenHigh = input[-1];
                u32 tokenLow = input[-2];
                input -= 2;
                u32 length = 3 + (tokenHigh >> 4);
                u32 distance = 3 + (tokenLow | ((tokenHigh & 0x0F) << 8));
                u8* match = output + distance;
                for (u32 copied = 0; copied < length; ++copied) {
                    output[-1 - (s32)copied] = match[-1 - (s32)copied];
                }
                output -= length;
            } else {
                u8 value = *--input;
                *--output = value;
            }

            flags = (u8)(flags << 1);
            if (input <= inputStart)
                break;
        }
    }
}
