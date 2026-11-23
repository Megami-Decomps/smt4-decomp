/* NON_MATCHING: 197 lines (185 by shape). The sign tests, magnitudes and the three wrap loops are retail's (the batched
 * builder); the table lookups and the matrix products still go through other registers (the build saves
 * d8-d9 where retail saves r4-r9 only). */
#include "gfx/EulerPhaseRotation.h"
extern "C" {
void FUN_002929d8(Matrix34Data *matrix, s32 clearTranslation, f32 x, f32 y, f32 z)
{
    buildEulerPhaseRotationBatched(matrix, g_sinCosTable, x, y, z);
    if (clearTranslation) {
        matrix->values[3] = 0.0f;
        matrix->values[7] = 0.0f;
        matrix->values[11] = 0.0f;
    }
}
}
