#include "shard/W5_W5Match2_PlainData.h"
#include "shard/W6_W6Match3_RotationY.h"

extern "C" {

f32 FUN_001b63b0(f32 phase);
f32 FUN_001a1ee0(f32 phase);
void matrix44SetIdentity(Matrix44* matrix);
void matrixCopyToGlobal(const Matrix44* matrix);

void matrixSetRotationY(f32 radians)
{
    f32 phase = radians * 40.743664f;
    f32 cosine = FUN_001b63b0(phase);
    f32 sine = FUN_001a1ee0(phase);
    Matrix44 matrix;
    matrix44SetIdentity(&matrix);
    matrix.values[0] = cosine;
    matrix.values[2] = -sine;
    matrix.values[8] = sine;
    matrix.values[10] = cosine;
    matrixCopyToGlobal(&matrix);
}

} // extern "C"
