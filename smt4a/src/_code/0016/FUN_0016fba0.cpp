/* NON_MATCHING: VFP scheduling: retail loads the 40.743664f constant after the first multiply and allocates s2-s6 differently around the divides. */
#include "common.h"

/* A 4x4 matrix, row by row. */
struct ProjectionMtx {
    f32 m[4][4];
};

extern "C" {
void FUN_0018a924(f32 *sine, f32 *cosine, f32 angle);

/* Builds a perspective projection: `fovy` in degrees, `aspect` width over height, clip planes
 * `nearZ` and `farZ` (depth mapped to 0..1 scaled by farZ). */
ProjectionMtx *FUN_0016fba0(ProjectionMtx *mtx, f32 fovy, f32 aspect, f32 nearZ, f32 farZ)
{
    f32 sine;
    f32 cosine;
    f32 cotangent;
    f32 depthScale;

    /* The sine table angle unit: 256 per turn. */
    FUN_0018a924(&sine, &cosine, fovy * 0.5f * 40.743664f);
    cotangent = cosine / sine;
    depthScale = 1.0f / (farZ - nearZ);
    mtx->m[3][2] = -1.0f;
    mtx->m[0][1] = 0.0f;
    mtx->m[0][2] = 0.0f;
    mtx->m[0][3] = 0.0f;
    mtx->m[1][0] = 0.0f;
    mtx->m[1][2] = 0.0f;
    mtx->m[1][3] = 0.0f;
    mtx->m[2][0] = 0.0f;
    mtx->m[2][1] = 0.0f;
    mtx->m[3][0] = 0.0f;
    mtx->m[3][1] = 0.0f;
    mtx->m[3][3] = 0.0f;
    mtx->m[1][1] = cotangent;
    mtx->m[0][0] = cotangent / aspect;
    mtx->m[2][2] = farZ * depthScale;
    mtx->m[2][3] = farZ * nearZ * depthScale;
    return mtx;
}

} /* extern "C" */
