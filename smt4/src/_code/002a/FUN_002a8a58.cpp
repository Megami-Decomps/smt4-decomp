/* Builds the title scene's camera: stores the scene's projection matrix in *projection (or a scratch matrix when NULL),
 * multiplies it onto the inverse planar transform and sets the result as the view matrix. */
#include "nw/math/MTX44.h"

using nw::math::MTX44;

extern "C" {
extern void *g_titleScene;
void mathMatrixBuildInversePlanarTransform(MTX44 *matrix);
MTX44 FUN_002bfe20(void *scene);
void nn_math_ARMv6_MTX44MultAsm(MTX44 *result, const MTX44 *left, const MTX44 *right);
void cameraSetViewMatrix(void *scene, const MTX44 *matrix);

void FUN_002a8a58(MTX44 *projection)
{
    MTX44 scratch;
    MTX44 view;

    if (projection == NULL) {
        projection = &scratch;
    }
    mathMatrixBuildInversePlanarTransform(&view);
    *projection = FUN_002bfe20(g_titleScene);
    nn_math_ARMv6_MTX44MultAsm(&view, projection, &view);
    cameraSetViewMatrix(g_titleScene, &view);
}
}
