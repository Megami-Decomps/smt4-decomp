#include "common.h"
struct AnimationBlock {
    /* 0x00 */ f32 values[6];
    /* 0x18 */ u32 state;
};
struct AnimationState {
    /* 0x0000 */ u8 unk00[0x1ea4];
    /* 0x1ea4 */ AnimationBlock block;
};

/* Sets all six animation parameters to one value. */
static __inline void animationBlockFill(AnimationBlock *block, f32 value)
{
    block->values[0] = value;
    block->values[1] = value;
    block->values[2] = value;
    block->values[3] = value;
    block->values[4] = value;
    block->values[5] = value;
}

/* Clears all six animation parameters and the state. */
extern "C" void FUN_00338424(AnimationState *animation)
{
    AnimationBlock *block = &animation->block;
    animationBlockFill(block, 0.0f);
    block->state = 0;
}
