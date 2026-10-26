/* NON_MATCHING: basis normalization VFP scheduling differs from retail. */
#include "gfx/BasisScaleTransform.h"
#include <math.h>

/* Normalize each basis column, then rebuild the separately scaled basis vectors. */
extern "C" void FUN_001a6fbc(BasisScaleTransform *transform)
{
    for (s32 column = 0; column < 3; ++column) {
        BasisScaleVector *axis = &transform->normalized[column];
        const f32 *basisColumn = &transform->basis[0][column];
        f32 *out = &transform->normalized[column].x;
        f32 basisX = basisColumn[0];
        f32 basisY = basisColumn[3];
        f32 basisZ = basisColumn[6];
        out[0] = basisX;
        out[1] = basisY;
        out[2] = basisZ;
        f32 x = axis->x;
        if (x == 0.0f && axis->y == 0.0f && axis->z == 0.0f)
            return;
        f32 y = axis->y;
        f32 z = axis->z;
        f32 inverseLength = 1.0f / sqrtf(x * x + y * y + z * z);
        axis->x = x * inverseLength;
        axis->y = y * inverseLength;
        axis->z = z * inverseLength;
    }
    f32 scale = transform->scale[0];
    transform->scaled[0].x = transform->normalized[0].x * scale;
    transform->scaled[0].y = transform->normalized[0].y * scale;
    transform->scaled[0].z = transform->normalized[0].z * scale;
    scale = transform->scale[1];
    transform->scaled[1].x = transform->normalized[1].x * scale;
    transform->scaled[1].y = transform->normalized[1].y * scale;
    transform->scaled[1].z = transform->normalized[1].z * scale;
    scale = transform->scale[2];
    transform->scaled[2].x = transform->normalized[2].x * scale;
    transform->scaled[2].y = transform->normalized[2].y * scale;
    transform->scaled[2].z = transform->normalized[2].z * scale;
}
