#include "common.h"

/* A 4x4 matrix, row by row. */
struct ProjectionMtx {
    f32 m[4][4];
};

extern "C" {
void FUN_0018a924(f32 *sine, f32 *cosine, f32 angle);

/* Builds a perspective projection: `fovy` in degrees, `aspect` width over height, clip planes
 * `nearZ` and `farZ` (depth mapped to 0..1 scaled by farZ). */
ProjectionMtx *mtx44Perspective(ProjectionMtx *mtx, f32 fovy, f32 aspect, f32 nearZ, f32 farZ)
{
    f32 sine;
    f32 cosine;
    f32 cotangent;
    f32 depthScale;

    /* The sine table angle unit: 256 per turn. */
    f32 halfFovy = fovy * 0.5f;
    FUN_0018a924(&sine, &cosine, halfFovy * 40.743664f);
    cotangent = cosine / sine;
    depthScale = 1.0f / (farZ - nearZ);
    f32 xScale = cotangent / aspect;
    f32 zScale = farZ * depthScale;
    f32 zOffset = farZ * nearZ * depthScale;
    mtx->m[0][0] = xScale;
    mtx->m[0][1] = 0.0f;
    mtx->m[0][2] = 0.0f;
    mtx->m[0][3] = 0.0f;
    mtx->m[1][0] = 0.0f;
    mtx->m[1][1] = cotangent;
    mtx->m[1][2] = 0.0f;
    mtx->m[1][3] = 0.0f;
    mtx->m[2][0] = 0.0f;
    mtx->m[2][1] = 0.0f;
    mtx->m[2][2] = zScale;
    mtx->m[2][3] = zOffset;
    mtx->m[3][0] = 0.0f;
    mtx->m[3][1] = 0.0f;
    mtx->m[3][2] = -1.0f;
    mtx->m[3][3] = 0.0f;
    return mtx;
}

} /* extern "C" */
