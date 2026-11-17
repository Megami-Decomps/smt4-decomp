/* The vector and matrix scratch workspace (smt4 0x4ea81c, smt4a 0x6471dc, .bss): the effect, camera
 * and model code park four-float values in its slots at 0x100-0x12F and build matrices at 0x140 and
 * 0x180. Each slot holds whatever value its caller computes (a colour, a vector, a quaternion), so a
 * slot is a union of those value types. */
#ifndef GFX_VECTORSCRATCH_H
#define GFX_VECTORSCRATCH_H

#include "common.h"
#include <stddef.h>
#include "shard/W5_W5Match1_RecordKeys.h"
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/W6_W6Match3_EffectColor.h"
#include "shard/W6_W6Match4_EffectEditorSnapshot.h"
#include "shard/W6_W6Match5_ComponentIntegration.h"
#include "shard/S1Mover.h"
#include "gfx/QuaternionWorkspace.h"
#include "AsdSDK/Source/Gfx/Effect/effMenuMatrix.h"

/* One 16-byte scratch value. */
union VectorScratchValue {
    Vector4 vector;
    EffectColor color;
    RotationQuaternion rotation;
    EffMenuPosition position;
    IntegrationVector4 integration;
    EffectEditorWords words;
    Vec3f direction;
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

#endif
