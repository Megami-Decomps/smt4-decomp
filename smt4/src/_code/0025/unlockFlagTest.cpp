#include "common.h"

struct UnlockState {
    /* 0x000 */ u8 unk000[0xf49];
    /* 0xF49 */ u8 flags[0x101];
};

extern "C" UnlockState* saveGetUnlockFlagBlock(void);

// Test the one-based identifier in the persistent unlock bitset.
extern "C" u32 unlockFlagTest(u32 id)
{
    UnlockState* state = saveGetUnlockFlagBlock();
    --id;
    if ((u32)((s32)id >> 3) >= 0x101)
        return 0;
    u8 mask = (u8)(1u << (id & 7));
    return (state->flags[(s32)id >> 3] & mask) != 0;
}
