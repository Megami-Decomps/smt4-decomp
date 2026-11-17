#include "shard/W5_W5Match8_CameraTransition.h"
#include "battle/btlCamera.h"
extern "C" {
extern BtlCameraStatics g_btlCamera;
/* Starts the primary camera transition. */
void btlCameraStartPrimaryTransition(W5Match8CameraTransition *camera, f32 value, u32 duration, u32 mode) {
    g_btlCamera.transitionTarget = value;
    camera->primaryDuration = duration;
    camera->primaryMode = mode;
    camera->primaryProgress = 0.0f;
    camera->primaryFrame = 0;
    camera->flags |= 0x200;
}
}
