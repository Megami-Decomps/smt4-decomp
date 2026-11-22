/* NON_MATCHING: the motion and the batched MTX34RotXYZFIdx are retail's; armcc unrolls the texture scroll loop by two where
 * retail counts it down once per vertex, keeps the rotation in VFP registers it must save (d8-d9), folds the matrix base into
 * the stores, and stores the translation zeros from VFP where retail uses an integer zero. */
#include "classes/Obj42083c.h"
#include "gfx/EulerPhaseRotation.h"

extern "C" {
extern const PhaseTrigEntry g_sinCosTable[];
void matrixScaleColumnsAlt(Matrix34Data *out, const Matrix34Data *matrix, const f32 *scale);
}

/* Advances the filter's motion: scrolls the texture coordinates, turns the quad by the spin (kept within a turn)
 * and grows it, rebuilding the draw matrix. */
void Obj42083c::prepareGeometry()
{
    child->refreshOffsets();
    s32 count = motion->lastVertex + 1;
    for (u32 i = 0; i < count; i++) {
        ((Obj42083cVertex *)buffer)[i].u += motion->scrollU;
        ((Obj42083cVertex *)buffer)[i].v += motion->scrollV;
    }
    angle += motion->spin;
    if (angle >= 360.0f)
        angle -= 360.0f;
    else if (angle < 0.0f)
        angle += 360.0f;
    /* The angle in whole degrees, as an index of 256 steps a turn. */
    buildEulerPhaseRotationBatched(&rotation, g_sinCosTable, 0.0f, 0.0f, angle * 0.7111111f);
    rotation.values[3] = 0.0f;
    rotation.values[7] = 0.0f;
    rotation.values[11] = 0.0f;
    lastRow[0] = 0.0f;
    lastRow[1] = 0.0f;
    lastRow[2] = 0.0f;
    lastRow[3] = 1.0f;
    scale += motion->grow;
    f32 scaling[3];
    scaling[0] = scale;
    scaling[1] = scale;
    scaling[2] = 1.0f;
    matrixScaleColumnsAlt(&rotation, &rotation, scaling);
}
