/* NON_MATCHING: retail reloads each start component after computing the delta (and stores the components one by one); armcc keeps them and uses vldmia/vstmia. */
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
extern "C" f32 easeEvaluate(s32 kind, u32 mode, u32 frame);

static __inline void vectorSubtract(BattleVector3 *result, const BattleVector3 *left, const BattleVector3 *right)
{
    result->x = left->x - right->x;
    result->y = left->y - right->y;
    result->z = left->z - right->z;
}

// Evaluate the two vector and four scalar channels at the eased frame position.
extern "C" void FUN_003d7298(ExtendedTransitionView* state, u32 frame)
{
    f32 progress = easeEvaluate(0, state->interpolationMode, frame);
    BattleVector3 delta;
    vectorSubtract(&delta, &state->position.end, &state->position.start);
    state->position.current.x = state->position.start.x + delta.x * progress;
    state->position.current.y = state->position.start.y + delta.y * progress;
    state->position.current.z = state->position.start.z + delta.z * progress;
    vectorSubtract(&delta, &state->target.end, &state->target.start);
    state->target.current.x = state->target.start.x + delta.x * progress;
    state->target.current.y = state->target.start.y + delta.y * progress;
    state->target.current.z = state->target.start.z + delta.z * progress;
    state->fourth.current = state->fourth.start + (state->fourth.end - state->fourth.start) * progress;
    state->third.current = state->third.start + (state->third.end - state->third.start) * progress;
    state->second.current = state->second.start + (state->second.end - state->second.start) * progress;
    state->first.current = state->first.start + (state->first.end - state->first.start) * progress;
}
