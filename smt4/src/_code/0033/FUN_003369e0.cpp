/* NON_MATCHING: Retail push {r4} differs from recovered ldr ip, [ip, #624]. */
#include "common.h"

struct AccumulatorLocalView {
    u8 unk00[0x2270];          // 0x0000
    s32 unk2270[6];           // 0x2270
    s32 unk2288[6];           // 0x2288
    s32 unk22A0;              // 0x22A0
};

// Accumulate for an existing nonzero key, or replace the next circular slot.
extern "C" void FUN_003369e0(AccumulatorLocalView* state, s32 key, s32 amount)
{
    for (s32 slot = 0; slot < 6; ++slot) {
        s32 storedKey = state->unk2270[slot];
        if (storedKey != 0 && storedKey == key) {
            state->unk2288[slot] += amount;
            return;
        }
    }

    state->unk2270[state->unk22A0] = key;
    state->unk2288[state->unk22A0] = amount;
    ++state->unk22A0;
    if (state->unk22A0 > 5) {
        state->unk22A0 = 0;
    }
}
