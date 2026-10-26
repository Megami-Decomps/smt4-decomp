/* NON_MATCHING: only the flags word is addressed `[r0, #1588]` where retail uses the writeback form `ldr r1, [r0, #1588]!` and `[r0]` for both stores. */
#include "common.h"

struct ScalarTransition {
    u8 unk000[0x5ec]; // 0x000
    f32 duration;      // 0x5ec
    u8 unk5f0[0x40];  // 0x5f0
    f32 previous;      // 0x630
    u32 flags;         // 0x634
    u8 unk638[0x70];  // 0x638
    f32 current;       // 0x6a8
    u32 first;         // 0x6ac
    u32 counter;       // 0x6b0
    u32 second;        // 0x6b4
};

// Reset the scalar transition, optionally retaining its previous current value.
extern "C" void FUN_0023cb70(ScalarTransition* transition, u32 first, u32 second, s32 preserve, f32 duration)
{
    transition->duration = duration;
    transition->first = first;
    transition->counter = 0;
    transition->second = second;
    u32 flags = transition->flags | 0x400;
    if (preserve == 0) {
        transition->flags = flags;
    } else {
        transition->previous = transition->current;
        transition->flags = flags | 0x200000;
    }
    transition->current = 0.0f;
}
