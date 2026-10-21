/* NON_MATCHING: retail forms a shared vector base before grouped stores; the typed field accesses are separate. */
#include "common.h"

struct Vector3 { f32 x, y, z; };
struct TransitionState {
    /* 0x000 */ u8 unk00[0x634];
    /* 0x634 */ u32 flags;
    /* 0x638 */ u8 unk638[0x50];
    /* 0x688 */ Vector3 position;
    /* 0x694 */ u32 frame;
};
/* Resets the transition position and enables its update flag. */
extern "C" void FUN_003d88a0(TransitionState *state)
{
    state->position.z = 0.0f;
    state->position.y = 0.0f;
    state->position.x = 0.0f;
    state->frame = 0;
    state->flags |= 32;
}
