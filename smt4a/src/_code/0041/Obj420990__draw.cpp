/* NON_MATCHING: recovered two-quad draw uses different stack and floating-point register scheduling. */
#include "classes/Obj420990.h"
#include "classes/FilterDraw.h"

struct Obj420990DrawContext {
    u8 unk00[0x1258];
    FilterDrawState projection;
    u8 unkBetween[0x40];
    FilterDrawState blend;
};
extern "C" {
extern Obj420990DrawContext *g_renderCtx;
void FUN_0016c4b8(void *context, u32 texture);
u32 FUN_001692ac(u32 mode, u32 value);
void FUN_00409e78(void *filter, f32 *matrix, const void *motion);
void FUN_0043b6c0(f32 *vertices, const f32 *matrix, f32 *output, u32 count);
void FUN_0032c808();
void gpuSubmitFloatVectorsOrDefault(const f32 *color, f32 x, f32 y, f32 z, f32 u, f32 v);
void FUN_002371b0();
}

void Obj420990::draw()
{
    FUN_0016c4b8(g_renderCtx, ((FilterDrawTexture *)handles[0].handle)->handle);
    g_renderCtx->blend.push(rects->blendA);
    g_renderCtx->projection.push(FUN_001692ac(1, 0));
    f32 color[4] = {1, 1, 1, ((FilterDrawChild *)child)->alpha};
    f32 points[8][3];
    for (u32 vertex = 0; vertex < 8; ++vertex) {
        points[vertex][0] = vertices()[vertex].position[0];
        points[vertex][1] = vertices()[vertex].position[1];
        points[vertex][2] = vertices()[vertex].position[2] - 11.0f;
    }
    f32 matrix[16];
    FUN_00409e78(this, matrix, &handles[0]);
    FUN_0043b6c0(&points[0][0], matrix, &points[0][0], 4);
    FUN_0032c808();
    for (u32 vertex = 0; vertex < 4; ++vertex) {
        gpuSubmitFloatVectorsOrDefault(color, points[vertex][0], points[vertex][1],
            points[vertex][2], vertices()[vertex].u, vertices()[vertex].v);
    }
    FUN_002371b0();
    FUN_0016c4b8(g_renderCtx, ((FilterDrawTexture *)handles[1].handle)->handle);
    g_renderCtx->blend.replace(rects->blendB);
    FUN_00409e78(this, matrix, &handles[1]);
    FUN_0043b6c0(&points[4][0], matrix, &points[4][0], 4);
    FUN_0032c808();
    for (u32 vertex = 4; vertex < 8; ++vertex) {
        gpuSubmitFloatVectorsOrDefault(color, points[vertex][0], points[vertex][1],
            points[vertex][2], vertices()[vertex].u, vertices()[vertex].v);
    }
    FUN_002371b0();
    g_renderCtx->projection.pop();
    g_renderCtx->blend.pop();
}
