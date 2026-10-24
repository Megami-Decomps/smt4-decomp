/* NON_MATCHING: readable rebuild of the matrix-from-radians setup; retail wraps each phase in its own loop, samples the table per axis and keeps the translation column in s-registers across the rotation build, which armcc here schedules differently (see buildEulerPhaseRotation). */
#include "gfx/EulerPhaseRotation.h"

extern "C" {
extern const PhaseTrigEntry DAT_00407ed0[];

/* Builds the rotation of a 4x4 matrix from three angles in radians, keeping its translation
 * column, and marks the matrix as changed (bit 0x800 of its last word). */
void FUN_0024bfb8(Matrix34Data *matrix, f32 x, f32 y, f32 z)
{
    const f32 radiansToPhase = 40.743664f; /* 256 / (2 * pi) */
    f32 translationX = matrix->values[3];
    f32 translationY = matrix->values[7];
    f32 translationZ = matrix->values[11];
    buildEulerPhaseRotation(matrix, 1, DAT_00407ed0, x * radiansToPhase, y * radiansToPhase, z * radiansToPhase);
    matrix->values[3] = translationX;
    matrix->values[7] = translationY;
    matrix->values[11] = translationZ;
    ((u32 *)matrix)[15] |= 0x800;
}

} /* extern "C" */
