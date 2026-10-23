/* NON_MATCHING: expanded-matrix affine-row copies, pointer reuse and saved-register allocation differ. */
#include "gfx/CameraMatrixCache.h"
extern "C" {
void FUN_001296c0(void *parameters, Matrix44 *projection, Matrix34Data *view, Matrix44 *secondaryProjection, Matrix34Data *secondaryView, s32 stereo, f32 scale, f32 offset);
void memCopyWords(const void *source, void *destination, u32 bytes);
void FUN_002b77f4(Matrix34Data *output, const Matrix34Data *input);
void nn_math_ARMv6_MTX44TransposeAsm(Matrix44 *output, const Matrix44 *input);

static __inline void expandCameraMatrix(Matrix44 *output, const Matrix34Data *input)
{
    memCopyWords(input, output, sizeof(Matrix34Data));
    output->values[12] = 0.0f;
    output->values[13] = 0.0f;
    output->values[14] = 0.0f;
    output->values[15] = 1.0f;
}

/* Refresh both camera views and their expanded/transposed GPU representations. */
void FUN_002bc9cc(CameraMatrixCache *work)
{
    if (work->enabled) {
        FUN_001296c0(work->parameters, &work->projection, &work->view, &work->secondaryProjection, &work->secondaryView, 1, work->stereoScale, work->stereoOffset);
        FUN_002b77f4(&work->viewNormals, &work->view);
        nn_math_ARMv6_MTX44TransposeAsm(&work->projectionTransposed, &work->projection);
        FUN_002b77f4(&work->secondaryNormals, &work->secondaryView);
        nn_math_ARMv6_MTX44TransposeAsm(&work->secondaryProjectionTransposed, &work->secondaryProjection);
        expandCameraMatrix(&work->viewExpanded, &work->view);
        work->viewTransposed = work->viewExpanded;
        nn_math_ARMv6_MTX44TransposeAsm(&work->viewTransposed, &work->viewTransposed);
        expandCameraMatrix(&work->secondaryExpanded, &work->secondaryView);
        work->secondaryTransposed = work->secondaryExpanded;
        nn_math_ARMv6_MTX44TransposeAsm(&work->secondaryTransposed, &work->secondaryTransposed);
    }
}
}
