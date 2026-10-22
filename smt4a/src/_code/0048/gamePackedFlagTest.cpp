#include "common.h"

struct PackedFlagState {
    u8 unk000[0xfbc];
    u8 flags[0xfc]; // 0xfbc
};

extern "C" {
PackedFlagState *flagValueGetStorage(void);

// Test a one-based flag id, rejecting indices outside the packed bank.
s32 gamePackedFlagTest(s32 id)
{
    PackedFlagState *state = flagValueGetStorage();
    s32 bit = id - 1;
    if ((u32)(bit >> 3) >= sizeof(state->flags)) {
        return 0;
    }
    u8 mask = 1u << (bit & 7);
    return (state->flags[bit >> 3] & mask) != 0;
}
}
