#include "common.h"

struct CameraState {
    /* 0x00 */ u8 unk00[32];
    /* 0x20 */ u32 flags;
};

/* Enables the camera's update flag. */
extern "C" void mikadoEnableCameraUpdate(CameraState *camera)
{
    camera->flags |= 0x80;
}
