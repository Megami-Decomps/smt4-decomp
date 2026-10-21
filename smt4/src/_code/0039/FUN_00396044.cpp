/* NON_MATCHING: retail address formation, clamping returns or grouped stores differ. */
#include "common.h"
struct TargetState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 flags;
    /* 0x09 */ u8 unk09[0x67];
    /* 0x70 */ u32 state;
    /* 0x74 */ u8 unk74[0x1c];
    /* 0x90 */ f32 first;
    /* 0x94 */ f32 second;
    /* 0x98 */ f32 third;
};
/* Enables the interpolation state and installs its initial parameters. */
extern "C" void FUN_00396044(TargetState *target)
{
    target->flags |= 4;
    target->state |= 4;
    target->first = 0.0f;
    target->second = -500.0f;
    target->third = 0.0f;
}
