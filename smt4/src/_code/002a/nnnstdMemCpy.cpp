/* NON_MATCHING: retail is a hand-written ARM routine (size-specialised straight-line copies for up to 8 bytes, alignment fix-ups and a pld-prefetching ldm/stm block loop) that armcc cannot produce from C; this is the equivalent forward copy that, like retail, returns the advanced destination (low word) and source (high word) pointers. */
#include "common.h"

extern "C" {

unsigned long long nnnstdMemCpy(u8 *destination, const u8 *source, u32 size)
{
    while (size != 0) {
        *destination++ = *source++;
        size--;
    }
    return (u32)destination | ((unsigned long long)(u32)source << 32);
}

}
