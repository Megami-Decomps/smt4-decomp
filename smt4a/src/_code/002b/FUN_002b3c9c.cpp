/* NON_MATCHING: readable rewrite of the model draw job (push a render state, draw the prebuilt shape or the posed batch, pop); the matrix copy matches retail, but the build merges the pop tails and interleaves the vmov/vcvt of the four colour bytes and the stack-entry address computation differently. */
#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

// A 4x4 camera matrix, row-major.
struct CameraMatrix {
    f32 m[4][4];
};

struct ModelDrawJob {
    /* 0x00 */ u16 flags;       // 0x100: second render state, 0x200: draw the prebuilt shape
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ AsdTexture *texture;
    /* 0x08 */ u32 primitiveSource;
    /* 0x0C */ u32 shape;
    /* 0x10 */ CameraMatrix placement;   // the rows' fourth column is ignored
    /* 0x50 */ u8 tint[4];      // colour bytes, indexed from the low byte up
    /* 0x54 */ u32 pending;     // cleared once the job has been drawn
};

extern "C" {
extern RenderCtxA *g_renderCtx;

s32 FUN_001692ac(u32 first, u32 second);
void FUN_002b358c(u32 shape);
void camSetMatrixB(RenderCtxA *context, CameraMatrix *matrix);
void FUN_00409c60(RenderCtxA *context, u32 third, u32 second, u32 first, f32 firstScale, f32 secondScale, f32 thirdScale,
                  f32 fourthScale);
void FUN_002ff8e8(u32 argument);
void primitiveSourceBuildBatch(u32 source);
void renderCtxResetColorScale(RenderCtxA *context);
void skinObjectUpdateMatrices(RenderCtxA *context);

// Draws the job: the shape when flag 0x200 is set, otherwise the primitive batch posed by the job's placement matrix
// and tinted by its colour bytes.
void FUN_002b3c9c(ModelDrawJob *job, u32 argument)
{
    if ((job->flags & 0x100) != 0) {
        renderCtxPushA(g_renderCtx, FUN_001692ac(5, 0));
    } else {
        renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));
    }
    if ((job->flags & 0x200) != 0) {
        FUN_002b358c(job->shape);
        renderStackPop(&g_renderCtx->stackA);
    } else {
        renderCtxSelectTexture(g_renderCtx, job->texture);
        CameraMatrix matrix = job->placement;
        matrix.m[0][3] = 0.0f;
        matrix.m[1][3] = 0.0f;
        matrix.m[2][3] = 0.0f;
        matrix.m[3][3] = 1.0f;
        camSetMatrixB(g_renderCtx, &matrix);
        const f32 byteToUnit = 1.0f / 255.0f;
        FUN_00409c60(g_renderCtx, job->tint[2], job->tint[1], job->tint[0], job->tint[0] * byteToUnit * byteToUnit,
                     job->tint[1] * byteToUnit * byteToUnit, job->tint[2] * byteToUnit * byteToUnit,
                     job->tint[3] * byteToUnit * byteToUnit);
        FUN_002ff8e8(argument);
        if (job->pending != 0) {
            job->pending = 0;
        }
        primitiveSourceBuildBatch(job->primitiveSource);
        renderCtxResetColorScale(g_renderCtx);
        skinObjectUpdateMatrices(g_renderCtx);
        renderStackPop(&g_renderCtx->stackA);
    }
}
}
