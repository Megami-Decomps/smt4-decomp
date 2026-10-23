/* NON_MATCHING: separate phase sampling versus retail batched reduction changes saved registers, matrix scheduling and translation stores. */
#include "gfx/EulerPhaseRotation.h"
extern "C" {
extern const PhaseTrigEntry DAT_00407ed0[];
void FUN_002929d8(Matrix34Data *matrix, s32 clearTranslation, f32 x, f32 y, f32 z)
{
    buildEulerPhaseRotation(matrix, clearTranslation, DAT_00407ed0, x, y, z);
}
}
