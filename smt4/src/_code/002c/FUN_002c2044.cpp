#include "gfx/CameraMatrixCache.h"
#include "AsdSDK/Source/Gfx/Camera/AsdCamera.h"
#include "AsdSDK/AsdMemUtil.h"

using nw::math::MTX34;
using nw::math::MTX44;

/* The matrices sit at the screen camera's offsets inside the cache. */
static __inline AsdCamera *cameraView(CameraMatrixCache *camera)
{
    return reinterpret_cast<AsdCamera *>(camera);
}

extern "C" {
void nn_math_ARMv6_MTX34CopyAsm(MTX34 *output, const MTX34 *input);
void mtx44Copy(MTX44 *output, const MTX44 *input);
void FUN_0011cfb4(void *parameters);

// Reset a camera's matrices and initialize stereo calibration when requested.
void FUN_002c2044(CameraMatrixCache *camera, s32 enabled)
{
    memClear(camera, sizeof(*camera));
    camera->unk001[0] = 0;
    nn_math_ARMv6_MTX34CopyAsm(&cameraView(camera)->view, &MTX34::Identity());
    mtx44Copy(&cameraView(camera)->projection, &MTX44::Identity());
    mtx44Copy(&cameraView(camera)->stereoProjection, &MTX44::Identity());
    cameraView(camera)->unk498 = 5.0f;
    camera->enabled = enabled;
    if (enabled) {
        FUN_0011cfb4(&camera->parameters);
        camera->stereoScale = 5.0f;
        camera->stereoOffset = 1.0f;
    }
}
}
