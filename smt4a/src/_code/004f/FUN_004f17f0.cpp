#include "shard/W5_W5Match8_CameraTransition.h"
struct CameraGlobal { u8 unk00[0x14]; f32 value; };
extern "C" {
extern CameraGlobal g_btlCamera;
/* Starts the primary camera transition. */
void FUN_004f17f0(W5Match8CameraTransition *camera, f32 value, u32 duration, u32 mode) {
    g_btlCamera.value = value;
    camera->primaryDuration = duration;
    camera->primaryMode = mode;
    camera->primaryProgress = 0.0f;
    camera->primaryFrame = 0;
    camera->flags |= 0x200;
}
}
