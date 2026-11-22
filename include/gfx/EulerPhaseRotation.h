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
/* The same rotation with the three phases reduced together before any table lookup, and the products shared
 * through two temporaries: nn::math's MTX34RotXYZFIdx as retail's copies read (the out-of-line builders
 * smt4 FUN_002929d8 / smt4a FUN_001aff14 compare, take the magnitude and wrap all three phases first; the
 * X polygon filter's vertex ring inlines it with two constant phases). Only the rotation is written. */

static __inline void buildEulerPhaseRotationBatched(Matrix34Data *matrix, const PhaseTrigEntry *table, f32 fIdxX, f32 fIdxY,
                                                   f32 fIdxZ)
{
    bool negativeX = fIdxX < 0.0f;
    f32 absX = fabsf(fIdxX);
    bool negativeY = fIdxY < 0.0f;
    f32 absY = fabsf(fIdxY);
    bool negativeZ = fIdxZ < 0.0f;
    f32 absZ = fabsf(fIdxZ);
    while (absX >= 65536.0f)
        absX -= 65536.0f;
    while (absY >= 65536.0f)
        absY -= 65536.0f;
    while (absZ >= 65536.0f)
        absZ -= 65536.0f;
    u16 indexX = (u32)absX;
    u16 indexY = (u32)absY;
    u16 indexZ = (u32)absZ;
    f32 restX = absX - (f32)indexX;
    f32 restY = absY - (f32)indexY;
    f32 restZ = absZ - (f32)indexZ;
    indexX &= 0xff;
    indexY &= 0xff;
    indexZ &= 0xff;
    const PhaseTrigEntry *entryX = &table[indexX];
    const PhaseTrigEntry *entryY = &table[indexY];
    const PhaseTrigEntry *entryZ = &table[indexZ];
    f32 sinX = entryX->sine + restX * entryX->sineDelta;
    f32 cosX = entryX->cosine + restX * entryX->cosineDelta;
    f32 sinY = entryY->sine + restY * entryY->sineDelta;
    f32 cosY = entryY->cosine + restY * entryY->cosineDelta;
    f32 sinZ = entryZ->sine + restZ * entryZ->sineDelta;
    f32 cosZ = entryZ->cosine + restZ * entryZ->cosineDelta;
    if (negativeX)
        sinX = -sinX;
    if (negativeY)
        sinY = -sinY;
    if (negativeZ)
        sinZ = -sinZ;
    f32 crossTerm;
    f32 straightTerm;
    matrix->values[8] = -sinY;
    matrix->values[0] = cosZ * cosY;
    matrix->values[4] = sinZ * cosY;
    matrix->values[9] = cosY * sinX;
    matrix->values[10] = cosY * cosX;
    crossTerm = cosX * sinZ;
    straightTerm = sinX * cosZ;
    matrix->values[1] = straightTerm * sinY - crossTerm;
    matrix->values[6] = crossTerm * sinY - straightTerm;
    crossTerm = sinX * sinZ;
    straightTerm = cosX * cosZ;
    matrix->values[2] = straightTerm * sinY + crossTerm;
    matrix->values[5] = crossTerm * sinY + straightTerm;
}
#endif
