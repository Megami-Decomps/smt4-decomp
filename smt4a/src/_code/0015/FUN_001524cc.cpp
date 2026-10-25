/* NON_MATCHING: stereo-builder stack argument stores and matrix-copy destination address lifetimes differ; 86 versus retail 83 instructions. */
#include "gfx/CameraMatrixCache.h"

extern "C" {
void FUN_0016fd04(void *parameters, f32 stereoParameter, f32 stereoScale, Matrix44 *projection, Matrix34Data *view, Matrix44 *secondaryProjection, Matrix34Data *secondaryView, s32 pivot, s32 useHardwareStereo);
void FUN_00162330(Matrix34Data *destination, const Matrix34Data *source);
void nn_math_ARMv6_MTX44TransposeAsm(Matrix44 *destination, const Matrix44 *source);
void memCopyWords(const void *source, void *destination, u32 bytes);

// Rebuild stereo view/projection matrices and their GPU-facing transposed caches.
void FUN_001524cc(CameraMatrixCache *camera)
{
    if (!camera->enabled)
        return;
    const CameraMatrixStereoCache *stereo = reinterpret_cast<const CameraMatrixStereoCache *>(camera);
    FUN_0016fd04(camera->parameters, stereo->stereoParameter, camera->stereoScale,
                  &camera->projection, &camera->view, &camera->secondaryProjection, &camera->secondaryView, 1, 1);
    FUN_00162330(&camera->viewNormals, &camera->view);
    nn_math_ARMv6_MTX44TransposeAsm(&camera->projectionTransposed, &camera->projection);
    FUN_00162330(&camera->secondaryNormals, &camera->secondaryView);
    nn_math_ARMv6_MTX44TransposeAsm(&camera->secondaryProjectionTransposed, &camera->secondaryProjection);
    memCopyWords(&camera->view, &camera->viewExpanded, sizeof(Matrix34Data));
    camera->viewExpanded.values[12] = 0.0f;
    camera->viewExpanded.values[13] = 0.0f;
    camera->viewExpanded.values[14] = 0.0f;
    camera->viewExpanded.values[15] = 1.0f;
    camera->viewTransposed = camera->viewExpanded;
    nn_math_ARMv6_MTX44TransposeAsm(&camera->viewTransposed, &camera->viewTransposed);
    memCopyWords(&camera->secondaryView, &camera->secondaryExpanded, sizeof(Matrix34Data));
    camera->secondaryExpanded.values[12] = 0.0f;
    camera->secondaryExpanded.values[13] = 0.0f;
    camera->secondaryExpanded.values[14] = 0.0f;
    camera->secondaryExpanded.values[15] = 1.0f;
    camera->secondaryTransposed = camera->secondaryExpanded;
    nn_math_ARMv6_MTX44TransposeAsm(&camera->secondaryTransposed, &camera->secondaryTransposed);
}
}
