#include "common.h"

struct CameraState {
    /* 0x00 */ u8 unk00[40];
    /* 0x28 */ s32 state;
};

/* Reports whether the camera is outside state seven. */
extern "C" s32 mikadoCameraStateIsNotSeven(const CameraState *camera)
{
    if (camera->state == 7)
        return 0;
    return 1;
}
