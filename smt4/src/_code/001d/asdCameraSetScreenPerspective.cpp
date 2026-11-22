#include "AsdSDK/Source/Gfx/Camera/AsdCamera.h"

using nw::math::MTX44;

extern "C" {
/* nn::math's MTX44Perspective, MTX44PivotC and MTX44Transpose (the SDK's ARMv6 builds): each returns its destination. */
MTX44 *mtx44Perspective(MTX44 *pOut, f32 fovy, f32 aspect, f32 nearZ, f32 farZ);
MTX44 *nn_math_ARMv6_MTX44PivotC_FAST(MTX44 *pOut, s32 pivot);
MTX44 *nn_math_ARMv6_MTX44TransposeAsm(MTX44 *pOut, const MTX44 *p);
void nn_ulcd_CTR_StereoCamera_SetBaseFrustum(AsdCameraStereo *stereo, const MTX44 *frustum);

/* Sets the camera's perspective (field of view in degrees, the screen's aspect ratio) and rebuilds its projection matrices. */
void asdCameraSetScreenPerspective(AsdCamera *camera, s32 lowerScreen, f32 fieldOfView, f32 nearClip, f32 farClip)
{
    camera->perspective.fovy = fieldOfView;
    camera->perspective.nearZ = nearClip;
    camera->perspective.farZ = farClip;
    camera->perspective.aspect = lowerScreen == 0 ? 400.0f / 240.0f : 320.0f / 240.0f;
    mtx44Perspective(&camera->projection, camera->perspective.fovy * 0.017453292f, camera->perspective.aspect,
                     camera->perspective.nearZ, camera->perspective.farZ);
    nn_math_ARMv6_MTX44PivotC_FAST(&camera->projection, 1);
    nn_math_ARMv6_MTX44TransposeAsm(&camera->projectionTransposed, &camera->projection);
    mtx44Perspective(&camera->stereoProjection, camera->perspective.fovy * 0.017453292f, camera->perspective.aspect,
                     camera->perspective.nearZ, camera->perspective.farZ);
    nn_math_ARMv6_MTX44PivotC_FAST(&camera->stereoProjection, 0);
    if (camera->enabled) {
        nn_ulcd_CTR_StereoCamera_SetBaseFrustum(&camera->stereo, &camera->stereoProjection);
    }
}

} /* extern "C" */
