/* NON_MATCHING: intrinsic-based copying has different loop rotation, leaf-register allocation, and instruction scheduling. */
#include "common.h"

// Copy with room for a terminator, returning the full source length even when truncated.
extern "C" u32 FUN_002ba81c(char *destination, const char *source, u32 capacity)
{
    char *limit = destination + capacity - 1;
    const char *original = source;
    if (((u32)destination | (u32)source) & 3) {
        while (destination < limit && *source != '\0') {
            *destination++ = *source++;
        }
        if (destination <= limit) {
            *destination = '\0';
        }
        while (*source != '\0') {
            ++source;
        }
    } else {
        u32 word;
        for (;;) {
            word = *(const u32 *)source;
            if (destination + 4 > limit || __uqsub8(0x01010101, word) != 0) {
                break;
            }
            source += 4;
            *(u32 *)destination = word;
            destination += 4;
        }
        while (__uqsub8(0x01010101, *(const u32 *)source) == 0) {
            source += 4;
        }
        while (*source != '\0') {
            ++source;
        }
        for (;;) {
            if (destination == limit) {
                *destination = '\0';
            }
            if (destination >= limit) {
                break;
            }
            u8 character = word;
            *destination++ = character;
            if (character == 0) {
                break;
            }
            word >>= 8;
        }
    }
    return source - original;
}
