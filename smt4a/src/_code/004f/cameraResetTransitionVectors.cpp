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
static void vectorClear(Vector3 *vector)
{
    vector->z = 0;
    vector->y = 0;
    vector->x = 0;
}
/* Clears the rotation state and both related vectors. */
extern "C" void cameraResetTransitionVectors(CameraState *camera)
{
    vectorClear(&camera->first);
    camera->flags &= ~0x800000u;
    vectorClear(&camera->second);
}
