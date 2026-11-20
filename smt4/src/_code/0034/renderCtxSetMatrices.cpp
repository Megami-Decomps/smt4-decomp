#include "gfx/RenderTransformState.h"
#include "shard/W4_W4Match5_DataTable.h"

extern "C" {

void cameraComposeMatrices(RenderTransformState *context, const Matrix44 *projection, const Matrix44 *view, const Matrix44 *transform);

/* Composes the render context's matrices from the given ones, uploads the combined matrix and clears the
   selected camera type. */
void renderCtxSetMatrices(RenderTransformState *context, const Matrix44 *projection, const Matrix44 *view, const Matrix44 *transform)
{
    cameraComposeMatrices(context, projection, view, transform);
    gpuWriteVertexUniformMatrix((MatrixCommandSource *)context->mode, context->combined.values);
    context->cameraType = 0;
}

} /* extern "C" */
