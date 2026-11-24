/* NON_MATCHING: the workspace quaternion and affine row copies use different block-transfer registers;
 * retail splits the second and third row copies into a two-word transfer and a separate scalar store. */
#include "gfx/ModelTransform.h"
#include "gfx/VectorScratch.h"
#include <string.h>

extern "C" {
void FUN_00514598(void);
void gfxQuaternionWorkspaceBuildMatrix(void);

/* Builds an affine rotation matrix from the normalized quaternion in the camera workspace. */
void gfxQuaternionToMatrix34(Matrix44 *output, const Vector4 *quaternion)
{
    matrix44SetIdentity(output);
    g_vectorScratch.first.vector = *quaternion;
    FUN_00514598();
    gfxQuaternionWorkspaceBuildMatrix();

    memcpy(output->values, g_vectorScratch.matrix.rows[0], 3 * sizeof(f32));
    memcpy(output->values + 4, g_vectorScratch.matrix.rows[1], 3 * sizeof(f32));
    memcpy(output->values + 8, g_vectorScratch.matrix.rows[2], 3 * sizeof(f32));
    output->values[12] = 0.0f;
    output->values[13] = 0.0f;
    output->values[14] = 0.0f;
}

} /* extern "C" */
