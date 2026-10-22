/* NON_MATCHING: compiler groups the saved lens fields into three stores rather than retail's two pairs; VFP move scheduling differs. */
#include "shard/W5_W5Match2_PlainData.h"

// View of the projection matrices and embedded stereo camera beyond ProjectionCamera's known prefix.
struct CameraProjectionWork {
    u8 stereoEnabled; // 0x000
    u8 unk001[0x27];
    f32 fov; // 0x028
    f32 aspect; // 0x02c
    f32 nearClip; // 0x030
    f32 farClip; // 0x034
    u8 unk038[0x70];
    Matrix44 projection; // 0x0a8
    Matrix44 stereoProjection; // 0x0e8
    u8 unk128[0x30];
    Matrix44 transposed; // 0x158
    u8 unk198[0x308];
    u8 stereoCamera[1]; // 0x4a0
};
extern "C" {
Matrix44 *FUN_0016fba0(Matrix44 *, f32 fov, f32 farClip, f32 aspect, f32 nearClip);
void nn_math_ARMv6_MTX44PivotC_FAST(Matrix44 *, u32 pivot);
void nn_math_ARMv6_MTX44TransposeAsm(Matrix44 *, const Matrix44 *);
void nn_ulcd_CTR_StereoCamera_SetBaseFrustum(void *, const Matrix44 *);

// Rebuild the display and stereo perspective projections after a lens change.
void FUN_001523b8(CameraProjectionWork *camera, u32 pivot, f32 fov, f32 aspect, f32 nearClip, f32 farClip)
{
    camera->fov = fov;
    camera->aspect = aspect;
    camera->nearClip = nearClip;
    camera->farClip = farClip;
    FUN_0016fba0(&camera->projection, fov * 0.017453292f, farClip, aspect, nearClip);
    nn_math_ARMv6_MTX44PivotC_FAST(&camera->projection, pivot);
    nn_math_ARMv6_MTX44TransposeAsm(&camera->transposed, &camera->projection);
    FUN_0016fba0(&camera->stereoProjection, camera->fov * 0.017453292f, camera->farClip, camera->aspect, camera->nearClip);
    nn_math_ARMv6_MTX44PivotC_FAST(&camera->stereoProjection, 0);
    if (camera->stereoEnabled)
        nn_ulcd_CTR_StereoCamera_SetBaseFrustum(camera->stereoCamera, &camera->stereoProjection);
}
}
