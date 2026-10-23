#ifndef GFX_EULERPHASEROTATION_H
#define GFX_EULERPHASEROTATION_H
#include "gfx/CameraMatrixCache.h"
#include "shard/W6_W6Match6_PhaseTrig.h"

static inline void buildEulerPhaseRotation(Matrix34Data *matrix, s32 clearTranslation,
    const PhaseTrigEntry *table, f32 phaseX, f32 phaseY, f32 phaseZ)
{
    PhaseSinCos x = samplePhase(table, phaseX);
    PhaseSinCos y = samplePhase(table, phaseY);
    PhaseSinCos z = samplePhase(table, phaseZ);
    matrix->values[8] = -y.sine;
    matrix->values[0] = z.cosine * y.cosine;
    matrix->values[4] = z.sine * y.cosine;
    matrix->values[1] = x.sine * z.cosine * y.sine - x.cosine * z.sine;
    matrix->values[6] = x.cosine * z.sine * y.sine - x.sine * z.cosine;
    matrix->values[2] = x.sine * z.sine + x.cosine * z.cosine * y.sine;
    matrix->values[5] = x.cosine * z.cosine + x.sine * z.sine * y.sine;
    matrix->values[9] = x.sine * y.cosine;
    matrix->values[10] = x.cosine * y.cosine;
    if (clearTranslation) {
        matrix->values[3] = 0.0f;
        matrix->values[7] = 0.0f;
        matrix->values[11] = 0.0f;
    }
}
#endif
