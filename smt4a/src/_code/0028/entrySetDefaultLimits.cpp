#include "common.h"

struct IndexedState {
    u8 unk00[0x4178]; // 0x0000
    u32 flags[5];     // 0x4178
    f32 values[5];    // 0x418C
};

extern "C" void entrySetDefaultLimits(IndexedState* state, s32 index)
{
    state->flags[index] = 15;
    state->values[index] = 8.0f;
}
