#include "ui/AnimatedMessage.h"
#include "common.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "gfx/RenderSubmission.h"
#include "gfx/DynamicMesh.h"

extern "C" {

enum { DRAW_SECOND_RENDER_STATE = 0x100, DRAW_PREBUILT_SHAPE = 0x200 };

void FUN_001f6b74(u32 aux);
void camSetMatrixB(RenderCtx *ctx, const f32 *matrix);
void modelApplyChangedCachedVector(RenderCtx *ctx, f32 a, f32 b, f32 c, f32 d);
void renderCtxSelectBlendPreset(u32 mode);
void FUN_0034724c(u32 object);
void renderCtxResetColorScale(RenderCtx *ctx);

/* Draws one packet under a pushed render state (5 or 1 by its flags): sets its camera matrix and
 * color, runs the draw and pops the state. */
void renderSubmissionDrawPacket(RenderSubmissionPacket *packet, u32 mode)
{
    RenderCtx *ctx = g_titleScene;

    if ((packet->flags & DRAW_SECOND_RENDER_STATE) != 0) {
        renderCtxPushA(ctx, renderCtxPackPassFlags(5, 0));
    } else {
        renderCtxPushA(ctx, renderCtxPackPassFlags(1, 0));
    }
    if ((packet->flags & DRAW_PREBUILT_SHAPE) != 0) {
        FUN_001f6b74(packet->shape);
        renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
        return;
    }

    renderCtxSelectTexture(g_titleScene, packet->texture);
    nw::math::MTX44 matrix = packet->placement;
    matrix.m[0][3] = 0.0f;
    matrix.m[1][3] = 0.0f;
    matrix.m[2][3] = 0.0f;
    matrix.m[3][3] = 1.0f;
    camSetMatrixB(g_titleScene, &matrix.m[0][0]);

    const f32 byteToUnit = 1.0f / 255.0f;
    modelApplyChangedCachedVector(g_titleScene,
        packet->tint[0] * byteToUnit * byteToUnit, packet->tint[1] * byteToUnit * byteToUnit,
        packet->tint[2] * byteToUnit * byteToUnit, packet->tint[3] * byteToUnit * byteToUnit);
    renderCtxSelectBlendPreset(mode);
    if (u32 dirtyMask = packet->pending) {
        dynamicMeshFlushAttributes((DynamicMesh *)packet->primitiveSource, dirtyMask);
        packet->pending = 0;
    }
    FUN_0034724c(packet->primitiveSource);
    renderCtxResetColorScale(g_titleScene);
    renderCtxApplyTransforms(g_titleScene);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
}

} /* extern "C" */
