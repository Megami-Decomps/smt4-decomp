/* NON_MATCHING: stack-address evaluation order now matches retail (renderCtxPush wrappers); 69 diff lines remain, scheduling/register allocation only. */
#include "gfx/TiledIndexMesh.h"
#include "camp/RenderCtx.h"
#include "shard/W5_W5Match2_PlainData.h"

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
extern RenderCtx *g_titleScene;
void camSetMatrixB(RenderCtx *context, const Matrix44 *matrix);
void renderCtxSelectBlendPreset(u32 mode);
s32 FUN_002c5d80(u32 kind, u32 value);
void FUN_00347198(TiledIndexMesh *mesh);
void FUN_00346f2c(TiledIndexMesh *mesh);
void FUN_00343778(RenderCtx *context, const TiledMeshRowDrawState *row);
void FUN_0023b724(TiledIndexMesh *mesh, s32 mode, s32 firstIndex, s32 indexCount);
void FUN_002c18e4(RenderCtx *context);

void FUN_0024f5ec(TiledMeshDrawWork *work, u32 mode)
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
        renderCtxPushA(context, FUN_002c5d80(5, 0));
    } else {
        renderCtxPushA(context, FUN_002c5d80(1, 0));
    }
    if (work->dirty != 0) {
        FUN_00347198(work->mesh);
        work->dirty = 0;
    }
    FUN_00346f2c(work->mesh);
    for (s32 row = 0; row < work->rowCount; ++row) {
        FUN_00343778(g_titleScene, &work->rows[row]);
        FUN_0023b724(work->mesh, 0, work->trianglesPerRow * row * 3, work->trianglesPerRow * 3);
    }
    FUN_002c18e4(g_titleScene);
    renderCtxApplyTransforms(g_titleScene);
    renderStackPop(&g_titleScene->stackA);
}
}
