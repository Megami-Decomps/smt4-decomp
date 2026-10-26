#include "camp/RenderCtx.h"
#include "gfx/RenderTransformState.h"
#include "shard/W4_W4Match5_DataTable.h"

extern "C" {
void mathCopyIdentityMatrix(Matrix44 *matrix);
void FUN_002bbbc8(RenderTransformState *context, Matrix44 *projection, Matrix44 *view, Matrix44 *transform);
void FUN_002bbb74(u32 mode, Matrix44 *combined);

// Rebuild nonidentity or dirty transform matrices and apply the combined render matrix.
void renderCtxApplyTransforms(RenderCtx *renderCtx)
{
    RenderTransformState *context = reinterpret_cast<RenderTransformState *>(renderCtx);
    if (context->dirty == 0) {
        const f32 *matrix = context->transform.values;
        if (matrix[0] == 1.0f && matrix[1] == 0.0f && matrix[2] == 0.0f &&
            matrix[3] == 0.0f && matrix[4] == 0.0f && matrix[5] == 1.0f &&
            matrix[6] == 0.0f && matrix[7] == 0.0f && matrix[8] == 0.0f &&
            matrix[9] == 0.0f && matrix[10] == 1.0f && matrix[11] == 0.0f &&
            matrix[12] == 0.0f && matrix[13] == 0.0f && matrix[14] == 0.0f &&
            matrix[15] == 1.0f) {
            return;
        }
    }
    mathCopyIdentityMatrix(&context->transform);
    mathCopyIdentityMatrix(&context->inverse);
    FUN_002bbbc8(context, &context->projection, &context->view, &context->transform);
    FUN_002bbb74(context->mode, &context->combined);
    context->dirty = 0;
}
}
