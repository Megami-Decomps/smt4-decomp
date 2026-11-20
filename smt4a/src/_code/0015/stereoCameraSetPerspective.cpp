/* NON_MATCHING: the projections (nn::math's inlined MTX44PerspectivePivotDeg) match retail; in the prologue armcc moves the aspect into s1 before storing the perspective (vstr s0, vstr s4, then the far/aspect pair) where retail stores both pairs from the incoming registers first, and pivot is copied to r5 later. */
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

void mtx44Perspective(f32 (*mtx)[4], f32 fovy, f32 aspect, f32 nearZ, f32 farZ);
void nn_math_ARMv6_MTX44PivotC_FAST(f32 (*mtx)[4], u32 pivot);
/* nn::math::MTX44Transpose: returns dst. */
f32 (*nn_math_ARMv6_MTX44TransposeAsm(f32 (*dst)[4], f32 (*src)[4]))[4];
void nn_ulcd_CTR_StereoCamera_SetBaseFrustum(void *stereoCamera, f32 (*projection)[4]);

/* nn::math::MTX44PerspectivePivotDeg (an SDK header inline): a perspective projection from a field of view in
 * degrees, rotated for the screen's pivot. */
static __inline void mtx44PerspectivePivotDeg(f32 (*mtx)[4], f32 fovy, f32 aspect, f32 nearZ, f32 farZ, u32 pivot)
{
    mtx44Perspective(mtx, fovy * DEG_TO_RAD, aspect, nearZ, farZ);
    nn_math_ARMv6_MTX44PivotC_FAST(mtx, pivot);
}

/* Stores the camera's perspective and rebuilds its pivoted projection, the transposed copy and the stereo base frustum. */
void stereoCameraSetPerspective(StereoCameraView *view, u32 pivot, CameraPerspective perspective)
{
    view->perspective = perspective;
    mtx44PerspectivePivotDeg(view->projection, perspective.fovy, perspective.aspect, perspective.nearZ,
                             perspective.farZ, pivot);
    nn_math_ARMv6_MTX44TransposeAsm(view->projectionTransposed, view->projection);
    mtx44PerspectivePivotDeg(view->baseProjection, view->perspective.fovy, view->perspective.aspect,
                             view->perspective.nearZ, view->perspective.farZ, 0);
    if (view->stereoEnabled) {
        nn_ulcd_CTR_StereoCamera_SetBaseFrustum(view->stereoCamera, view->baseProjection);
    }
}

} /* extern "C" */
