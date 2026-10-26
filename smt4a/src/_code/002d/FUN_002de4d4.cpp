/* NON_MATCHING: queues a 500x500 collision quad at (x, y, z): corners rotated by the table-derived matrix (applied twice) then offset, the plane normal computed and the quad queued; the matrix terms follow the decompilation (the table lookups at angle 0 fold to constants) and mapCollisionQueueQuad's float arguments (normal and plane values in s0-s2 and the stack) are not recovered, so only the id is passed */
#include "common.h"

struct QuadVec3 {
    f32 x, y, z;
};

/* A 3x4 row-major matrix as read by nn::math VEC3Transform. */
struct QuadMtx34 {
    f32 m[3][4];
};

#define QUAD_SIZE 500.0f
#define QUAD_HEIGHT 5.0f
#define QUAD_KIND 2

extern "C" {
// The fields of g_gameState this function uses.
struct GameStateView {
    u8 pad000[0x210];
    s32 f005f180c; /* 0x210 */
};
extern GameStateView g_gameState;



void gameFlagsGetBlock(void);
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(QuadVec3 *destination, const QuadMtx34 *matrix, const QuadVec3 *source);
void mapCollisionQueueQuad(s32 kind, s32 flags, s32 id);

/* Builds the rotation matrix from a sine/cosine pair and an extra term. */
static __inline QuadMtx34 quadRotation(f32 cosine, f32 sine, f32 extra)
{
    QuadMtx34 mtx;
    mtx.m[0][0] = cosine * cosine;
    mtx.m[0][1] = sine * cosine * sine - cosine * sine;
    mtx.m[0][2] = extra + cosine * cosine * sine;
    mtx.m[0][3] = 0.0f;
    mtx.m[1][0] = sine * cosine;
    mtx.m[1][1] = cosine * cosine + extra * sine;
    mtx.m[1][2] = cosine * sine * sine - sine * cosine;
    mtx.m[1][3] = 0.0f;
    mtx.m[2][0] = -0.0f;
    mtx.m[2][1] = sine * cosine;
    mtx.m[2][2] = cosine * cosine;
    mtx.m[2][3] = 0.0f;
    return mtx;
}

/* Rotates every corner in place. */
static __inline void quadRotateCorners(QuadVec3 *corners, const QuadMtx34 *mtx)
{
    for (s32 i = 0; i < 4; i++) {
        QuadVec3 source = corners[i];
        nn_math_ARMv6_VEC3TransformAsm_2AD44C(&corners[i], mtx, &source);
    }
}

void FUN_002de4d4(s16 id, f32 x, f32 y, f32 z)
{
    gameFlagsGetBlock();
    QuadVec3 corners[4] = {
        { 0.0f, QUAD_HEIGHT, 0.0f },
        { QUAD_SIZE, QUAD_HEIGHT, 0.0f },
        { QUAD_SIZE, QUAD_HEIGHT, QUAD_SIZE },
        { 0.0f, QUAD_HEIGHT, QUAD_SIZE },
    };

    QuadMtx34 mtx = quadRotation(1.0f, 0.0f, 0.0f);
    quadRotateCorners(corners, &mtx);
    quadRotateCorners(corners, &mtx);
    for (s32 i = 0; i < 4; i++) {
        corners[i].x += x;
        corners[i].y += y;
        corners[i].z += z;
    }
    mapCollisionQueueQuad(QUAD_KIND, 0, id);
    g_gameState.f005f180c++;
}

} /* extern "C" */
