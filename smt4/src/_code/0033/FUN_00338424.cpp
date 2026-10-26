/* NON_MATCHING: sub-block base now matches retail (one add pair); the 0.0f pool load is scheduled before the second add instead of after it. */
#include "common.h"
struct AnimationBlock {
    /* 0x00 */ f32 values[6];
    /* 0x18 */ u32 state;
};
struct AnimationState {
    /* 0x0000 */ u8 unk00[0x1ea4];
    /* 0x1ea4 */ AnimationBlock block;
};
/* Clears all six animation parameters and the state. */
extern "C" void FUN_00338424(AnimationState *animation)
{
    AnimationBlock *block = &animation->block;
    block->values[0] = 0.0f;
    block->values[1] = 0.0f;
    block->values[2] = 0.0f;
    block->values[3] = 0.0f;
    block->values[4] = 0.0f;
    block->values[5] = 0.0f;
    block->state = 0;
}
