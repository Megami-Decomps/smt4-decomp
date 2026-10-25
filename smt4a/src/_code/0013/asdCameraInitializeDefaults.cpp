#include "AsdSDK/Source/Gfx/Camera/AsdCamera.h"
#include "shard/asdCameraInitializeDefaults.h"

using nw::math::MTX34;
using nw::math::MTX44;

extern "C" {
void sysMemClear(void *memory, u32 bytes);
void nn_math_ARMv6_MTX34CopyAsm(MTX34 *dest, const MTX34 *source);
void mtx44Copy(MTX44 *dest, const MTX44 *source);
void FUN_0015a0e0(AsdCameraStereo *stereo);

// Reset the camera to identity transforms; when enabled, also set up its stereo pair.
void asdCameraInitializeDefaults(AsdCamera *camera, s32 enabled)
{
    sysMemClear(camera, sizeof(AsdCamera));
    camera->unk001 = 0;
    nn_math_ARMv6_MTX34CopyAsm(&camera->view, &MTX34::Identity());
    mtx44Copy(&camera->projection, &MTX44::Identity());
    mtx44Copy(&camera->stereoProjection, &MTX44::Identity());
    camera->unk498 = 5.0f;
    camera->enabled = enabled;
    if (enabled) {
        FUN_0015a0e0(&camera->stereo);
        camera->stereo.unk68 = 5.0f;
        camera->stereo.unk64 = 1.0f;
    }
}
}
