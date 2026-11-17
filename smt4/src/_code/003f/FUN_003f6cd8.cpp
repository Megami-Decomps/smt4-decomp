#include "shard/W8Match1_MatrixRotation.h"
extern "C" {
f32 phaseCosInterpolate(f32);
f32 mathSinFixedAngle(f32);
void matrix44SetIdentity(Matrix44*);
extern MatrixRotationWork g_vectorScratch;

// Replaces the shared transform's rotation matrix with a rotation about the Y axis.
void FUN_003f6cd8(f32 angle)
{
    f32 phase = angle * 40.743664f;
    f32 cosine = phaseCosInterpolate(phase);
    f32 sine = mathSinFixedAngle(phase);
    Matrix44 matrix;
    matrix44SetIdentity(&matrix);
    matrix.values[0] = cosine;
    matrix.values[2] = -sine;
    matrix.values[8] = sine;
    matrix.values[10] = cosine;
    g_vectorScratch.rotation = matrix;
}
}
