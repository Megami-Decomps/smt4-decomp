/* NON_MATCHING: separate phase sampling versus retail batched reduction changes saved registers, matrix scheduling and translation stores. */
#include "gfx/EulerPhaseRotation.h"
extern "C" {
extern const PhaseTrigEntry g_sinCosTable[];
void FUN_001aff14(Matrix34Data *matrix, s32 clearTranslation, f32 x, f32 y, f32 z)
{
    buildEulerPhaseRotation(matrix, clearTranslation, g_sinCosTable, x, y, z);
}
}
