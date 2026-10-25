/* NON_MATCHING: named frame thresholds recover comparison operand order; loop-bound compares still merge and global-frame modulo registers differ. */
#include "battle/BtlMainAccess.h"

struct RotatingBattleObjectState {
    /* 0x00 */ s32 ids[14];
    /* 0x38 */ s32 count;
    /* 0x3C */ s32 start;
    /* 0x40 */ f32 phase;
    /* 0x44 */ u8 rotating;
    /* 0x45 */ u8 unk45[7];
    /* 0x4C */ s32 frames[14];
    /* 0x84 */ s32 pulse;
};

extern "C" s32 engineLookupObjectById(s32 id);

/* Advance the visible object counters and cycle their selection every 37 frames. */
extern "C" void battleUpdateRotatingObjects(RotatingBattleObjectState *state)
{
    if (!state->rotating) {
        for (s32 visible = 0; visible < state->count + 1 && visible < 2; ++visible) {
            s32 index = state->start + visible;
            ++state->frames[index];
            s32 frameCount = engineLookupObjectById((s16)state->ids[index]);
            if (state->frames[index] >= frameCount)
                state->frames[index] = 0;
        }
    } else {
        for (u32 visible = 0; visible < state->count && visible < 1; ++visible) {
            s32 index = (state->start + visible) % state->count;
            ++state->frames[index];
            s32 frameCount = engineLookupObjectById((s16)state->ids[index]);
            if (state->frames[index] >= frameCount)
                state->frames[index] = 0;
        }
    }
    if (++state->pulse >= 30)
        state->pulse = 0;
    f32 phase = (f32)(btlGetMainState()->timing.frame % 37);
    if (phase < 5.0f) {
        state->phase = phase;
        state->rotating = 0;
    } else {
        if (phase == 5.0f && state->count > 1) {
            if (--state->start < 0)
                state->start = state->count - 1;
            state->start %= state->count;
        }
        state->rotating = 1;
        state->phase = phase - 5.0f;
    }
}
