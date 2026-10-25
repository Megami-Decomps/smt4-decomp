#include "common.h"

extern "C" {

struct CameraState { u8 unk00[0x50]; f32 x; u32 unk54; f32 z; f32 targetX; u32 unk60; f32 targetZ; };
struct CameraOwner { u32 unk00; CameraState *state; };
extern CameraOwner DAT_005806a0;
f32 FUN_0050d8e4(f32 x, f32 y);

f32 cameraGetHeadingDegrees(void)
{
    CameraState *state = DAT_005806a0.state;
    f32 x = state->x - state->targetX;
    f32 z = state->z - state->targetZ;
    return FUN_0050d8e4(x, z) * 57.3248405456543f;
}

} /* extern "C" */
