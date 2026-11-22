/* NON_MATCHING: retail unrolls the eight-vertex copy (x and y copied as words, z plus -11.0 from s16, loaded at
 * entry and saved with vpush) where armcc keeps the loop; the render-stack pushes, colour and draw loops agree. */
#include "classes/Obj420990.h"
#include "classes/FilterDraw.h"
#include "camp/RenderCtxA.h"

extern "C" {
u32 renderCtxPackPassFlags(u32 mode, u32 value);
void FUN_00409e78(void *filter, f32 *matrix, const void *motion);
void nn_math_VEC3TransformCoordArray(f32 *vertices, const f32 *matrix, f32 *output, u32 count);
void FUN_0032c808();
void gpuSubmitFloatVectorsOrDefault(const f32 *color, f32 x, f32 y, f32 z, f32 u, f32 v);
void FUN_002371b0();
}

void Obj420990::draw()
{
    renderCtxSelectTexture(g_renderCtx, (AsdTexture *)((FilterDrawTexture *)handles[0].handle)->handle);
    renderStackPush(g_renderCtx->stacks + RENDER_STACK_B, rects->blendA);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    f32 color[4];
    color[0] = 1.0f;
    color[1] = 1.0f;
    color[2] = 1.0f;
    color[3] = ((FilterDrawChild *)child)->alpha;
    Vec3f points[8];
    for (s32 vertex = 0; vertex < 8; ++vertex) {
        points[vertex] = vertices()[vertex].position;
        points[vertex].z -= 11.0f;
    }
    f32 matrix[16];
    FUN_00409e78(this, matrix, &handles[0]);
    nn_math_VEC3TransformCoordArray(&points[0].x, matrix, &points[0].x, 4);
    FUN_0032c808();
    for (u32 vertex = 0; vertex < 4; ++vertex) {
        gpuSubmitFloatVectorsOrDefault(color, points[vertex].x, points[vertex].y,
            points[vertex].z, vertices()[vertex].u, vertices()[vertex].v);
    }
    FUN_002371b0();
    renderCtxSelectTexture(g_renderCtx, (AsdTexture *)((FilterDrawTexture *)handles[1].handle)->handle);
    renderCtxSetB(g_renderCtx, rects->blendB);
    FUN_00409e78(this, matrix, &handles[1]);
    nn_math_VEC3TransformCoordArray(&points[4].x, matrix, &points[4].x, 4);
    FUN_0032c808();
    for (u32 vertex = 4; vertex < 8; ++vertex) {
        gpuSubmitFloatVectorsOrDefault(color, points[vertex].x, points[vertex].y,
            points[vertex].z, vertices()[vertex].u, vertices()[vertex].v);
    }
    FUN_002371b0();
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_B);
}
