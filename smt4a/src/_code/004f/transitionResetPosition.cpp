#include "common.h"

struct Vector3 { f32 x, y, z; };
struct TransitionState {
    /* 0x000 */ u8 unk00[0x64c];
    /* 0x64c */ u32 flags;
    /* 0x650 */ u8 unk650[0xa4];
    /* 0x6f4 */ Vector3 position;
    /* 0x700 */ u32 frame;
};
static void vectorClear(Vector3 *vector)
{
    vector->z = 0.0f;
    vector->y = 0.0f;
    vector->x = 0.0f;
}
/* Resets the transition position and enables its update flag. */
extern "C" void transitionResetPosition(TransitionState *state)
{
    vectorClear(&state->position);
    state->frame = 0;
    state->flags |= 32;
}
