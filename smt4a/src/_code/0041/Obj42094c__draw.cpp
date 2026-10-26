/* NON_MATCHING: recovered quad projection and render-state operations use different VFP and call register scheduling. */
#include "classes/Obj42094c.h"
#include "classes/FilterDraw.h"

struct Obj42094cDrawContext {
    u8 unk00[0x1258];
    FilterDrawState projection;
    u8 unkBetween[0x40];
    FilterDrawState blend;
};
extern "C" {
extern Obj42094cDrawContext *g_renderCtx;
void renderCtxSelectTexture(void *context, u32 texture);
u32 FUN_001692ac(u32 mode, u32 value);
void FUN_00409e78(void *filter, f32 *matrix, const void *motion);
void FUN_0032c808();
void gpuSubmitFloatVectorsOrDefault(const f32 *color, f32 x, f32 y, f32 z, f32 u, f32 v);
void FUN_002371b0();
}

void Obj42094c::draw()
{
    Filter4PolyView *filter = (Filter4PolyView *)this;
    renderCtxSelectTexture(g_renderCtx, ((FilterDrawTexture *)filter->texture)->handle);
    g_renderCtx->blend.push(filter->config->blendMode);
    g_renderCtx->projection.push(FUN_001692ac(1, 0));
    f32 color[4] = {1, 1, 1, ((FilterDrawChild *)filter->child)->alpha};
    f32 vertices[4][3];
    for (u32 vertex = 0; vertex < 4; ++vertex) {
        vertices[vertex][0] = filter->vertices[vertex].position[0];
        vertices[vertex][1] = filter->vertices[vertex].position[1];
        vertices[vertex][2] = filter->vertices[vertex].position[2] - 11.0f;
    }
    for (s32 particle = 0; particle < filter->config->count; ++particle) {
        f32 matrix[16];
        FUN_00409e78(this, matrix, &filter->motions[particle]);
        f32 projected[4][3];
        for (u32 vertex = 0; vertex < 4; ++vertex) {
            f32 x = vertices[vertex][0];
            f32 y = vertices[vertex][1];
            f32 z = vertices[vertex][2];
            f32 reciprocal = 1.0f / (matrix[12] * x + matrix[13] * y + matrix[14] * z + matrix[15]);
            projected[vertex][2] = (matrix[8] * x + matrix[9] * y + matrix[10] * z + matrix[11]) * reciprocal;
            projected[vertex][0] = (matrix[0] * x + matrix[1] * y + matrix[2] * z + matrix[3]) * reciprocal;
            projected[vertex][1] = (matrix[4] * x + matrix[5] * y + matrix[6] * z + matrix[7]) * reciprocal;
        }
        FUN_0032c808();
        for (u32 vertex = 0; vertex < 4; ++vertex) {
            gpuSubmitFloatVectorsOrDefault(color, projected[vertex][0], projected[vertex][1],
                projected[vertex][2], filter->vertices[vertex].u, filter->vertices[vertex].v);
        }
        FUN_002371b0();
    }
    g_renderCtx->projection.pop();
    g_renderCtx->blend.pop();
}
