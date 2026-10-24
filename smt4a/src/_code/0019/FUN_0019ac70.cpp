/* Builds the title scene's camera: stores the scene's projection matrix in *projection (or a scratch matrix when NULL),
 * multiplies it onto the inverse planar transform and sets the result as the view matrix. */
#include "nw/math/MTX44.h"

using nw::math::MTX44;

extern "C" {
extern void *g_renderCtx;
void mathMatrixBuildInversePlanarTransform(MTX44 *matrix);
MTX44 FUN_0019a0dc(void *scene);
void FUN_0019a0fc(MTX44 *result, const MTX44 *left, const MTX44 *right);
void camSetMatrixA(void *scene, const MTX44 *matrix);

void FUN_0019ac70(MTX44 *projection)
{
    MTX44 scratch;
    MTX44 view;

    if (projection == NULL) {
        projection = &scratch;
    }
    mathMatrixBuildInversePlanarTransform(&view);
    *projection = FUN_0019a0dc(g_renderCtx);
    FUN_0019a0fc(&view, projection, &view);
    camSetMatrixA(g_renderCtx, &view);
}
}
