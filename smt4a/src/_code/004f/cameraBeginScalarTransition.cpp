#include "common.h"
struct CameraState {
    /* 0x0 */ u8 unk0[1524];
    /* 0x5F4 */ f32 value;
    /* 0x5F8 */ u8 unk5F8[84];
    /* 0x64C */ u32 flags;
    /* 0x650 */ u8 unk650[180];
    /* 0x704 */ f32 progress;
    /* 0x708 */ u32 duration;
    /* 0x70C */ u32 frame;
    /* 0x710 */ u32 mode;
};
/* Starts the camera scalar transition. */
extern "C" void cameraBeginScalarTransition(CameraState *camera,f32 value,u32 duration,u32 mode){camera->value=value;camera->duration=duration;camera->mode=mode;camera->progress=0;camera->frame=0;camera->flags|=512;}
