/* NON_MATCHING: The cosine/sine stack stores combine into VSTMIA, changing adjacent address-calculation scheduling. */
#include "gfx/VectorScratch.h"

extern "C" {
f32 phaseCosine(f32 phase);
f32 phaseSine(f32 phase);
void matrix44SetIdentity(Matrix44 *matrix);

/* Replaces the shared transform with an X-axis rotation by the requested angle. */
void matrixSetRotationX(f32 angle)
{
    f32 phase = angle * 40.743664f;
    f32 cosine = phaseCosine(phase);
    f32 sine = phaseSine(phase);
    Matrix44 matrix;
    matrix44SetIdentity(&matrix);
    matrix.values[5] = cosine;
    matrix.values[6] = sine;
    matrix.values[9] = -sine;
    matrix.values[10] = cosine;
    g_vectorScratch.matrix.matrix = matrix;
}
}
