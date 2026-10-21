#include "common.h"

struct CameraObject { u8 unk00[20]; u32 parameter; };
struct CameraState {
    /* 0x000 */ u8 unk00[0x730];
    /* 0x730 */ CameraObject *camera;
    /* 0x734 */ void *resource;
};
extern "C" CameraObject *asdCameraCreateFromResource(void *resource);
/* Creates the camera and copies its resource parameter. */
extern "C" s32 FUN_003d6b48(CameraState *state)
{
    if (!state->resource)
        return 0;
    state->camera = asdCameraCreateFromResource(state->resource);
    state->camera->parameter = (u32)state->resource;
    return 1;
}
