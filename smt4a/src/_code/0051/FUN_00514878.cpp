#include "gfx/VectorScratch.h"
extern "C" {
f32 phaseCosine(f32);
f32 FUN_001a1ee0(f32);
void matrix44SetIdentity(Matrix44*);

// Replaces the shared transform's rotation matrix with a rotation about the Y axis.
void FUN_00514878(f32 angle)
{
    f32 phase = angle * 40.743664f;
    f32 cosine = phaseCosine(phase);
    f32 sine = FUN_001a1ee0(phase);
    Matrix44 matrix;
    matrix44SetIdentity(&matrix);
    matrix.values[0] = cosine;
    matrix.values[2] = -sine;
    matrix.values[8] = sine;
    matrix.values[10] = cosine;
    g_vectorScratch.matrix.matrix = matrix;
}
}
