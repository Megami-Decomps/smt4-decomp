/* NON_MATCHING: recovered two-quad draw uses different stack and floating-point register scheduling. */
#include "classes/Obj420990.h"
#include "classes/FilterDraw.h"

struct Obj420990DrawContext {
    u8 unk00[0x124c];
    FilterDrawState projection;
    u8 unkBetween[0x40];
    FilterDrawState blend;
};
extern "C" {
extern Obj420990DrawContext *g_titleScene;
void renderCtxSelectTexture(void *context, u32 texture);
u32 FUN_002c5d80(u32 mode, u32 value);
void titleSceneMultiplyByCameraView(void *filter, f32 *matrix, const void *motion);
void FUN_0023b4f4(f32 *vertices, const f32 *matrix, f32 *output, u32 count);
void FUN_002b011c();
void gpuSubmitFloatVectorsOrDefault(const f32 *color, f32 x, f32 y, f32 z, f32 u, f32 v);
void forwardRecoveredCallback();
}

void Obj420990::draw()
{
    renderCtxSelectTexture(g_titleScene, ((FilterDrawTexture *)handles[0].handle)->handle);
    g_titleScene->blend.push(rects->blendA);
    g_titleScene->projection.push(FUN_002c5d80(1, 0));
    f32 color[4] = {1, 1, 1, ((FilterDrawChild *)child)->alpha};
    f32 points[8][3];
    for (u32 vertex = 0; vertex < 8; ++vertex) {
        points[vertex][0] = vertices()[vertex].position[0];
        points[vertex][1] = vertices()[vertex].position[1];
        points[vertex][2] = vertices()[vertex].position[2] - 11.0f;
    }
    f32 matrix[16];
    titleSceneMultiplyByCameraView(this, matrix, &handles[0]);
    FUN_0023b4f4(&points[0][0], matrix, &points[0][0], 4);
    FUN_002b011c();
    for (u32 vertex = 0; vertex < 4; ++vertex) {
        gpuSubmitFloatVectorsOrDefault(color, points[vertex][0], points[vertex][1],
            points[vertex][2], vertices()[vertex].u, vertices()[vertex].v);
    }
    forwardRecoveredCallback();
    renderCtxSelectTexture(g_titleScene, ((FilterDrawTexture *)handles[1].handle)->handle);
    g_titleScene->blend.replace(rects->blendB);
    titleSceneMultiplyByCameraView(this, matrix, &handles[1]);
    FUN_0023b4f4(&points[4][0], matrix, &points[4][0], 4);
    FUN_002b011c();
    for (u32 vertex = 4; vertex < 8; ++vertex) {
        gpuSubmitFloatVectorsOrDefault(color, points[vertex][0], points[vertex][1],
            points[vertex][2], vertices()[vertex].u, vertices()[vertex].v);
    }
    forwardRecoveredCallback();
    g_titleScene->projection.pop();
    g_titleScene->blend.pop();
}
