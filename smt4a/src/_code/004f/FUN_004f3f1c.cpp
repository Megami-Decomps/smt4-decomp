/* NON_MATCHING: retail shares the 0x400 flag calculation and branches around the preserve path; compiled code predicates the paths and uses a separate flag-address setup. */
#include "common.h"

struct TargetTransition {
    u8 unk000[0x604]; // 0x000
    f32 duration;     // 0x604
    u8 unk608[0x40];  // 0x608
    f32 previous;     // 0x648
    u32 flags;        // 0x64c
    u8 unk650[0xc4];  // 0x650
    f32 pending;      // 0x714
    u32 target;       // 0x718
    u32 step;         // 0x71c
    u32 parameter;    // 0x720
};

// Configures a target transition, optionally preserving its pending value.
extern "C" void FUN_004f3f1c(TargetTransition* state, u32 target, u32 parameter,
                            s32 preservePending, f32 duration)
{
    state->duration = duration;
    state->target = target;
    state->step = 0;
    state->parameter = parameter;
    if (preservePending == 0) {
        state->flags |= 0x400;
    } else {
        state->previous = state->pending;
        state->flags |= 0x200400;
    }
    state->pending = 0.0f;
}
