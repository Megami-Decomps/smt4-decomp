/* NON_MATCHING: control flow and shared 0x400 flag match retail; retail updates the flags word through a pre-indexed ldr/str writeback (ldr r1,[r0,#1612]!) the build does not produce. */
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
    u32 flags = state->flags | 0x400;
    if (preservePending == 0) {
        state->flags = flags;
    } else {
        state->previous = state->pending;
        state->flags = flags | 0x200000;
    }
    state->pending = 0.0f;
}
