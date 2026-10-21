/* NON_MATCHING: retail parameter lifetime, address formation or grouped-store selection differs. */
#include "common.h"
struct AnimationState {
    /* 0x0000 */ u8 unk00[0x1ea4];
    /* 0x1ea4 */ f32 values[6];
    /* 0x1ebc */ u32 state;
};
/* Clears all six animation parameters and the state. */
extern "C" void FUN_00338424(AnimationState *animation)
{
    animation->values[0] = 0.0f;
    animation->values[1] = 0.0f;
    animation->values[2] = 0.0f;
    animation->values[3] = 0.0f;
    animation->values[4] = 0.0f;
    animation->values[5] = 0.0f;
    animation->state = 0;
}
