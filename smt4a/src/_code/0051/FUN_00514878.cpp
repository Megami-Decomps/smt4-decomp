#include "shard/W8Match1_MatrixRotation.h"
extern "C" {
f32 FUN_001b63b0(f32);
f32 FUN_001a1ee0(f32);
void matrix44SetIdentity(Matrix44*);
extern MatrixRotationWork DAT_006471dc;

// Replaces the shared transform's rotation matrix with a rotation about the Y axis.
void FUN_00514878(f32 angle)
{
    f32 phase = angle * 40.743664f;
    f32 cosine = FUN_001b63b0(phase);
    f32 sine = FUN_001a1ee0(phase);
    Matrix44 matrix;
    matrix44SetIdentity(&matrix);
    matrix.values[0] = cosine;
    matrix.values[2] = -sine;
    matrix.values[8] = sine;
    matrix.values[10] = cosine;
    DAT_006471dc.rotation = matrix;
}
}
