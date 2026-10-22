/* NON_MATCHING: The cosine/sine stack stores combine into VSTMIA, changing adjacent address-calculation scheduling. */
#include "shard/W5_W5Match2_MatrixDestination.h"

extern "C" {
extern MatrixDestination DAT_004ea81c;
f32 phaseCosInterpolate(f32 phase);
f32 FUN_002b70cc(f32 phase);
void matrix44SetIdentity(Matrix44 *matrix);

/* Replaces the shared transform with an X-axis rotation by the requested angle. */
void FUN_002484e0(f32 angle)
{
    f32 phase = angle * 40.743664f;
    f32 cosine = phaseCosInterpolate(phase);
    f32 sine = FUN_002b70cc(phase);
    Matrix44 matrix;
    matrix44SetIdentity(&matrix);
    matrix.values[5] = cosine;
    matrix.values[6] = sine;
    matrix.values[9] = -sine;
    matrix.values[10] = cosine;
    DAT_004ea81c.matrix = matrix;
}
}
