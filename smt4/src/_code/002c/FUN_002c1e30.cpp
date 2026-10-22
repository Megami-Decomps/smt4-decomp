/* NON_MATCHING: retail copies the perspective as two vstmia pairs and shuffles the call's float args through s4 from s1; ours stores all four at once. */
#include "common.h"

extern "C" {

#define DEG_TO_RAD 0.017453292f

/* A perspective projection: vertical field of view in degrees, clip planes and aspect ratio. */
typedef struct CameraPerspective {
    f32 fovy;
    f32 nearZ;
    f32 farZ;
    f32 aspect;
} CameraPerspective;

/* A stereo-capable camera: only the fields this unit touches are named. */
typedef struct StereoCameraView {
    /* 0x000 */ u8 stereoEnabled;
    /* 0x001 */ u8 unk001[0x27];
    /* 0x028 */ CameraPerspective perspective;
    /* 0x038 */ u8 unk038[0x70];
    /* 0x0A8 */ f32 projection[4][4];
    /* 0x0E8 */ f32 baseProjection[4][4];
    /* 0x128 */ u8 unk128[0x30];
    /* 0x158 */ f32 projectionTransposed[4][4];
    /* 0x198 */ u8 unk198[0x308];
    /* 0x4A0 */ u8 stereoCamera[1];
} StereoCameraView;

void FUN_002b72dc(f32 (*mtx)[4], f32 fovy, f32 aspect, f32 nearZ, f32 farZ);
void nn_math_ARMv6_MTX44PivotC_FAST(f32 (*mtx)[4], u32 pivot);
void nn_math_ARMv6_MTX44TransposeAsm(f32 (*dst)[4], f32 (*src)[4]);
void nn_ulcd_CTR_StereoCamera_SetBaseFrustum(void *stereoCamera, f32 (*projection)[4]);

void FUN_002c1e30(StereoCameraView *view, u32 pivot, CameraPerspective perspective)
{
    view->perspective = perspective;
    FUN_002b72dc(view->projection, perspective.fovy * DEG_TO_RAD, perspective.aspect,
                 perspective.nearZ, perspective.farZ);
    nn_math_ARMv6_MTX44PivotC_FAST(view->projection, pivot);
    nn_math_ARMv6_MTX44TransposeAsm(view->projectionTransposed, view->projection);
    FUN_002b72dc(view->baseProjection, view->perspective.fovy * DEG_TO_RAD, view->perspective.aspect,
                 view->perspective.nearZ, view->perspective.farZ);
    nn_math_ARMv6_MTX44PivotC_FAST(view->baseProjection, 0);
    if (view->stereoEnabled) {
        nn_ulcd_CTR_StereoCamera_SetBaseFrustum(view->stereoCamera, view->baseProjection);
    }
}

} /* extern "C" */
