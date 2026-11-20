/* NON_MATCHING: the final render-stack pop loads its context into r4 instead of retail's r0. */
#include "gfx/TiledIndexMesh.h"
#include "gfx/DynamicMesh.h"
#include "camp/RenderCtx.h"
#include "shard/W5_W5Match2_PlainData.h"
#include "camp/RenderCtxTitle.h"

struct TiledMeshRowDrawState {
    u32 data[4];
};
struct TiledMeshDrawWork {
    TiledIndexMesh *mesh;
    const TiledMeshRowDrawState *rows;
    s16 rowCount;
    u8 unk0A[2];
    s16 trianglesPerRow;
    u8 unk0E[4];
    u16 flags;
    AsdTexture *camera;
    Matrix44 matrix;
    u32 dirty;
};
typedef char TiledMeshDrawOffsetsCheck[offsetof(TiledMeshDrawWork, flags) == 0x12 &&
    offsetof(TiledMeshDrawWork, matrix) == 0x18 && offsetof(TiledMeshDrawWork, dirty) == 0x58 ? 1 : -1];

extern "C" {
void camSetMatrixB(RenderCtx *context, const Matrix44 *matrix);
void renderCtxSelectBlendPreset(u32 mode);
s32 renderCtxPackPassFlags(u32 kind, u32 value);
void vertexAttributeUploadStreams(TiledIndexMesh *mesh);
void FUN_00343778(RenderCtx *context, const TiledMeshRowDrawState *row);
void FUN_0023b724(TiledIndexMesh *mesh, s32 mode, s32 firstIndex, s32 indexCount);
void renderCtxResetColorScale(RenderCtx *context);

void tiledMeshDraw(TiledMeshDrawWork *work, u32 mode)
{
    renderCtxSelectTexture(g_titleScene, work->camera);
    Matrix44 matrix = work->matrix;
    matrix.values[3] = 0.0f;
    matrix.values[7] = 0.0f;
    matrix.values[11] = 0.0f;
    matrix.values[15] = 1.0f;
    camSetMatrixB(g_titleScene, &matrix);
    renderCtxSelectBlendPreset(mode);
    RenderCtx *context = g_titleScene;
    if ((work->flags & 0x100) != 0) {
        renderCtxPushA(context, renderCtxPackPassFlags(5, 0));
    } else {
        renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    }
    if (u32 dirtyMask = work->dirty) {
        dynamicMeshFlushAttributes((DynamicMesh *)work->mesh, dirtyMask);
        work->dirty = 0;
    }
    vertexAttributeUploadStreams(work->mesh);
    for (s32 row = 0; row < work->rowCount; ++row) {
        FUN_00343778(g_titleScene, &work->rows[row]);
        FUN_0023b724(work->mesh, 0, work->trianglesPerRow * row * 3, work->trianglesPerRow * 3);
    }
    renderCtxResetColorScale(g_titleScene);
    renderCtxApplyTransforms(g_titleScene);
    renderStackPopChecked(&g_titleScene->stackA);
}
}
