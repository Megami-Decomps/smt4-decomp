/* NON_MATCHING: footer reads and arm layout (literal arm first) match retail; remaining: armcc hoists the shared token byte load above the flag test and register allocation of compressedSize/headerSize differs. */
#include "common.h"

// Backward-compressed buffer: the last eight bytes are a footer holding the compressed span
// (24 bits, including the footer), the header size (1 byte) and the expansion size (32 bits).
extern "C" void FUN_0019fb60(u8* buffer, u32 inputSize, u32 bufferCapacity)
{
    u8* inputEnd = buffer + inputSize;

    u32 compressedSize = (u32)inputEnd[-8]
                       | ((u32)inputEnd[-7] << 8)
                       | ((u32)inputEnd[-6] << 16);
    if (compressedSize > inputSize)
        return;
    u32 headerSize = inputEnd[-5];
    u32 expansionSize = ((u32)inputEnd[-1] << 24)
                      | ((u32)inputEnd[-2] << 16)
                      | ((u32)inputEnd[-3] << 8)
                      | (u32)inputEnd[-4];
    if (inputSize + expansionSize > bufferCapacity)
        return;

    u8* inputStart = inputEnd - compressedSize;
    u8* input = inputEnd - headerSize;
    u8* output = inputEnd + expansionSize;

    while (inputStart < input) {
        u8 flags = *--input;
        for (s32 bit = 0; bit < 8; ++bit) {
            if (!(flags & 0x80)) {
                *--output = *--input;
            } else {
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
            }

            flags = (u8)(flags << 1);
            if (input <= inputStart)
                break;
        }
    }
}
