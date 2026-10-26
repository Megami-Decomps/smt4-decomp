#include "common.h"

struct Vector3 { f32 x, y, z; };
struct TransitionState {
    /* 0x000 */ u8 unk00[0x634];
    /* 0x634 */ u32 flags;
    /* 0x638 */ u8 unk638[0x100];
    /* 0x738 */ Vector3 first;
    /* 0x744 */ u8 unk744[0x20];
    /* 0x764 */ Vector3 second;
};
static __inline void vector3Clear(Vector3 *vector)
{
    vector->z = 0.0f;
    vector->y = 0.0f;
    vector->x = 0.0f;
}

/* Clears the axis-transition vectors and disables their update flag. */
extern "C" void transitionClearAxisVectors(TransitionState *state)
{
    vector3Clear(&state->first);
    state->flags &= ~0x800000;
    vector3Clear(&state->second);
}
