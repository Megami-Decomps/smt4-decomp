/* NON_MATCHING: only the registers of the zero constant and the frame-delta base differ (ip and r4 swapped). */
#include "common.h"

extern "C" {

/* One 0x114-byte slot state record. */
struct SlotState {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ f32 timer;
    /* 0x10 */ u8 unk10[0x40];
    /* 0x50 */ u32 flags;
    /* 0x54 */ u32 stateFlags;
    /* 0x58 */ u8 unk58[2];
    /* 0x5A */ u16 counter;
    /* 0x5C */ u8 unk5C[0xB8];
};

/* The slot manager: state table at 0x1E98 and the frame delta at 0x439C. */
struct SlotManager {
    /* 0x0000 */ u8 unk0000[0x1E98];
    /* 0x1E98 */ SlotState *states;
    /* 0x1E9C */ u8 unk1E9C[0x2500];
    /* 0x439C */ f32 frameDelta;
};

/* For active slots 67..108 that finished a pending step: rewinds their timer by one frame and clears the step. */
void FUN_00339fa8(SlotManager *manager)
{
    for (s32 i = 0x43; i < 0x6D; i++) {
        SlotState *state = &manager->states[i];
        if ((state->flags & 1) != 0 && (state->flags & 0x8000) != 0 && (state->stateFlags & 8) != 0) {
            state->stateFlags &= ~8;
            state->timer -= manager->frameDelta;
            state->counter = 0;
        }
    }
}

} /* extern "C" */
