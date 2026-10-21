/* NON_MATCHING: compiler folds progress-vector pointers into VFP offsets. */
#include "common.h"
struct Vector3 {f32 x,y,z;};
struct CameraState {
    /* 0x0 */ u8 unk0[1612];
    /* 0x64C */ u32 flags;
    /* 0x650 */ u8 unk650[340];
    /* 0x7A4 */ Vector3 first;
    /* 0x7B0 */ u8 unk7B0[32];
    /* 0x7D0 */ Vector3 second;
};
/* Clears the rotation state and both related vectors. */
extern "C" void FUN_004f26cc(CameraState *camera){camera->first.z=0;camera->first.y=0;camera->first.x=0;camera->flags&=~0x800000u;camera->second.z=0;camera->second.y=0;camera->second.x=0;}
