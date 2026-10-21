/* NON_MATCHING: compiler places the shared flags-store epilogue after the immediate-update branch instead of before it. */
#include "common.h"

struct DeferredByteState {
    u8 unk00[0x50];
    u32 flags; // 0x50
    u8 unk54[0x18];
    u32 value; // 0x6c
    u8 unk70[0x10];
    s32 pending; // 0x80
    u32 progress; // 0x84
    u32 unk88;
    u32 target; // 0x8c
    u32 previous; // 0x90
};

// Capture a byte transition, applying it immediately when no transition is pending.
extern "C" void FUN_004cae0c(u32, DeferredByteState *state, s32 pending, u32 target)
{
    state->progress = 0;
    state->pending = pending;
    state->target = target & 0xff;
    u32 flags = state->flags;
    if (pending != 0)
        flags |= 0x2000;
    state->previous = state->value & 0xff;
    if (pending == 0) {
        flags &= ~0x2000u;
        state->value = (state->value & ~0xffu) | (target & 0xff);
    }
    state->flags = flags;
}
