/* NON_MATCHING: retail is a hand-written ARM clearing routine with four zero registers, conditional STM writebacks, early LR restore, and carry/sign-driven tail stores. */
#include "AsdSDK/AsdMemUtil.h"

// Clears an aligned destination and returns the byte immediately after the cleared range.
extern "C" void* sysMemClear(void* destination, u32 size)
{
    u32* words = static_cast<u32*>(destination);
    while (size >= 32) {
        for (u32 index = 0; index < 8; ++index) {
            words[index] = 0;
        }
        words += 8;
        size -= 32;
    }
    if (size & 16) {
        words[0] = 0;
        words[1] = 0;
        words[2] = 0;
        words[3] = 0;
        words += 4;
    }
    if (size & 8) {
        words[0] = 0;
        words[1] = 0;
        words += 2;
    }
    if (size & 4) {
        *words++ = 0;
    }
    u8* bytes = reinterpret_cast<u8*>(words);
    if (size & 2) {
        *reinterpret_cast<u16*>(bytes) = 0;
        bytes += 2;
    }
    if (size & 1) {
        *bytes++ = 0;
    }
    return bytes;
}
