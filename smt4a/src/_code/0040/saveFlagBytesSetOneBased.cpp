#include "common.h"

extern "C" {
u8* FUN_00261440(void);

// Sets or clears the one-based flag in the saved bit array.
void saveFlagBytesSetOneBased(s32 id, s32 enabled)
{
    s32 index = id - 1;
    u8* flags = FUN_00261440();
    u8* byte = &flags[index / 8];
    s32 bit = (id - 1) % 8;
    if (enabled != 0) {
        *byte |= 1 << bit;
    } else {
        *byte &= ~(1 << bit);
    }
}
}
