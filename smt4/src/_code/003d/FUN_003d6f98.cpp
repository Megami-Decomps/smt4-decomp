/* NON_MATCHING: retail forms a shared vector base before grouped stores; the typed field accesses are separate. */
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
/* Clears the axis-transition vectors and disables their update flag. */
extern "C" void FUN_003d6f98(TransitionState *state)
{
    state->first.z = 0.0f;
    state->first.y = 0.0f;
    state->first.x = 0.0f;
    state->flags &= ~0x800000;
    state->second.z = 0.0f;
    state->second.y = 0.0f;
    state->second.x = 0.0f;
}
