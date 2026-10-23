/* NON_MATCHING: separate phase sampling versus retail batched reduction changes saved registers, matrix scheduling and translation stores. */
#include "gfx/EulerPhaseRotation.h"
extern "C" {
extern const PhaseTrigEntry DAT_00536d14[];
void FUN_001aff14(Matrix34Data *matrix, s32 clearTranslation, f32 x, f32 y, f32 z)
{
    buildEulerPhaseRotation(matrix, clearTranslation, DAT_00536d14, x, y, z);
}
}
