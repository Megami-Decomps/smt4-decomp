/* NON_MATCHING: compiler folds progress-vector pointers into VFP offsets. */
#include "common.h"
struct Vector3 {f32 x,y,z;};
struct CameraState {
    /* 0x0 */ u8 unk0[1612];
    /* 0x64C */ u32 flags;
    /* 0x650 */ u8 unk650[164];
    /* 0x6F4 */ Vector3 progress;
    /* 0x700 */ u32 frame;
};
/* Resets the vector transition and marks it active. */
extern "C" void FUN_004f43b4(CameraState *camera){camera->progress.z=0;camera->progress.y=0;camera->progress.x=0;camera->frame=0;camera->flags|=32;}
