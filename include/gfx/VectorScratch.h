/* The vector and matrix scratch workspace (smt4 0x4ea81c, smt4a 0x6471dc, .bss): the effect, camera
 * and model code park four-float values in its slots at 0x100-0x12F and build matrices at 0x140 and
 * 0x180. Each slot holds whatever value its caller computes (a colour, a vector, a quaternion), so a
 * slot is a union of those value types. */
#ifndef GFX_VECTORSCRATCH_H
#define GFX_VECTORSCRATCH_H

#include "common.h"
#include <stddef.h>
#include <math.h>
#include "shard/W5_W5Match1_RecordKeys.h"
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/W6_W6Match3_EffectColor.h"
#include "shard/W6_W6Match4_EffectEditorSnapshot.h"
#include "shard/W6_W6Match5_ComponentIntegration.h"
#include "shard/S1Mover.h"
#include "gfx/QuaternionWorkspace.h"
#include "AsdSDK/Source/Gfx/Effect/effMenuMatrix.h"
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "nw/math/VEC4.h"

/* One 16-byte scratch value. */
union VectorScratchValue {
    Vector4 vector;
    EffectColor color;
    RotationQuaternion rotation;
    EffMenuPosition position;
    IntegrationVector4 integration;
    EffectEditorWords words;
    Vec3f direction;
    PolyVec4 poly;
    nw::math::VEC4 vec4;
};

/* Two rows of a 4x4 matrix: matrixCopyToGlobal copies a matrix in two such 32-byte blocks. */
struct MatrixHalf {
    f32 values[8];
};

/* A 4x4 scratch matrix. */
union VectorScratchMatrix {
    Matrix44 matrix;
    f32 rows[4][4];
    Vector4 vectors[4];
    MatrixHalf halves[2];
};

struct VectorScratch {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ VectorScratchValue first;
    /* 0x110 */ VectorScratchValue second;
    /* 0x120 */ VectorScratchValue third;
    /* 0x130 */ u8 unk130[0x10];
    /* 0x140 */ VectorScratchMatrix matrix;
    /* 0x180 */ VectorScratchMatrix stored;
};
typedef char VectorScratchOffsets[sizeof(VectorScratchValue) == 0x10 &&
    offsetof(VectorScratch, first) == 0x100 && offsetof(VectorScratch, second) == 0x110 &&
    offsetof(VectorScratch, third) == 0x120 && offsetof(VectorScratch, matrix) == 0x140 &&
    offsetof(VectorScratch, stored) == 0x180 && sizeof(VectorScratch) == 0x1C0 ? 1 : -1];

extern "C" VectorScratch g_vectorScratch;

/* Rotates `v` by the scratch matrix (the emitter's orientation). */
static __inline void scratchRotate(Vector4 *v)
{
    const f32 (*m)[4] = g_vectorScratch.matrix.rows;
    f32 x = v->x * m[0][0] + v->y * m[1][0] + v->z * m[2][0];
    f32 y = v->x * m[0][1] + v->y * m[1][1] + v->z * m[2][1];
    f32 z = v->x * m[0][2] + v->y * m[1][2] + v->z * m[2][2];
    f32 w = v->x * m[0][3] + v->y * m[1][3] + v->z * m[2][3];
    v->x = x;
    v->y = y;
    v->z = z;
    v->w = w;
}

/* Scales `v` to unit length unless it is the zero vector. */
static __inline void vec3Normalize(Vector4 *out, const Vector4 *v)
{
    f32 length = sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
    if (length > 0.0f) {
        out->x = v->x / length;
        out->y = v->y / length;
        out->z = v->z / length;
    }
}

#endif
