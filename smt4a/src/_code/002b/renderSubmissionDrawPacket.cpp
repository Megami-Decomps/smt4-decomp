#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "gfx/RenderColorScale.h"
#include "gfx/RenderSubmission.h"

enum { DRAW_SECOND_RENDER_STATE = 0x100, DRAW_PREBUILT_SHAPE = 0x200 };

extern "C" {
s32 renderCtxPackPassFlags(u32 first, u32 second); // declcheck: local (the shared declaration does not compile here or changes this unit)
void billboardShapeDraw(u32 shape);
void camSetMatrixB(RenderCtxA *context, const nw::math::MTX44 *matrix);
void renderCtxSelectBlendPreset(u32 argument);
void primitiveSourceBuildBatch(u32 source);
void renderCtxResetColorScale(RenderCtxA *context);
void skinObjectUpdateMatrices(RenderCtxA *context); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Draws a prebuilt shape or a primitive batch using the job's placement and tint. */
void renderSubmissionDrawPacket(RenderSubmissionPacket *job, u32 argument)
{
    if ((job->flags & DRAW_SECOND_RENDER_STATE) != 0) {
        renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(5, 0));
    } else {
        renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    }
    if ((job->flags & DRAW_PREBUILT_SHAPE) != 0) {
        billboardShapeDraw(job->shape);
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
        return;
    }

    renderCtxSelectTexture(g_renderCtx, job->texture);
    nw::math::MTX44 matrix = job->placement;
    matrix.m[0][3] = 0.0f;
    matrix.m[1][3] = 0.0f;
    matrix.m[2][3] = 0.0f;
    matrix.m[3][3] = 1.0f;
    camSetMatrixB(g_renderCtx, &matrix);

    const f32 byteToUnit = 1.0f / 255.0f;
    FUN_00409c60(g_renderCtx, job->tint[0] * byteToUnit * byteToUnit,
                 job->tint[1] * byteToUnit * byteToUnit, job->tint[2] * byteToUnit * byteToUnit,
                 job->tint[3] * byteToUnit * byteToUnit);
    renderCtxSelectBlendPreset(argument);
    if (job->pending != 0) {
        job->pending = 0;
    }
    primitiveSourceBuildBatch(job->primitiveSource);
    renderCtxResetColorScale(g_renderCtx);
    skinObjectUpdateMatrices(g_renderCtx);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
}

} /* extern "C" */
