/* NON_MATCHING: channel-relative pointer bases and vector component scheduling differ from retail. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"

// This layout extends past the published BattleVectorTransition prefix.
struct ScalarTransitionChannel {
    f32 current, start, end;
};
struct VectorTransitionChannel {
    BattleVector3 current, start, end;
};
struct ExtendedTransitionView {
    /* 0x000 */ u8 unk000[0x680];
    /* 0x680 */ u32 interpolationMode;
    /* 0x684 */ u8 unk684[0x110];
    /* 0x794 */ ScalarTransitionChannel first;
    /* 0x7A0 */ u8 unk7A0[0xC];
    /* 0x7AC */ ScalarTransitionChannel second;
    /* 0x7B8 */ u8 unk7B8[0xC];
    /* 0x7C4 */ ScalarTransitionChannel third;
    /* 0x7D0 */ ScalarTransitionChannel fourth;
    /* 0x7DC */ u8 unk7DC[0xC];
    /* 0x7E8 */ VectorTransitionChannel position;
    /* 0x80C */ u8 unk80C[0xC];
    /* 0x818 */ VectorTransitionChannel target;
};
extern "C" f32 FUN_00227280(s32 kind, u32 mode, u32 frame);

static inline void interpolateVector(VectorTransitionChannel* channel, f32 progress)
{
    BattleVector3 delta;
    delta.x = channel->end.x - channel->start.x;
    delta.y = channel->end.y - channel->start.y;
    delta.z = channel->end.z - channel->start.z;
    channel->current.x = channel->start.x + delta.x * progress;
    channel->current.y = channel->start.y + delta.y * progress;
    channel->current.z = channel->start.z + delta.z * progress;
}

// Evaluate the two vector and four scalar channels at the eased frame position.
extern "C" void FUN_003d7298(ExtendedTransitionView* state, u32 frame)
{
    f32 progress = FUN_00227280(0, state->interpolationMode, frame);
    interpolateVector(&state->position, progress);
    interpolateVector(&state->target, progress);
    state->fourth.current = state->fourth.start + (state->fourth.end - state->fourth.start) * progress;
    state->third.current = state->third.start + (state->third.end - state->third.start) * progress;
    state->second.current = state->second.start + (state->second.end - state->second.start) * progress;
    state->first.current = state->first.start + (state->first.end - state->first.start) * progress;
}
