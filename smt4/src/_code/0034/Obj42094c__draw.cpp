/* NON_MATCHING: the colour array is filled element-wise like retail (no constant table); the recovered render-state pushes (stack address evaluated before the FUN_002c5d80 call in retail) and VFP/call register scheduling still differ. */
#include "classes/Obj42094c.h"
#include "classes/FilterDraw.h"

struct Obj42094cDrawContext {
    u8 unk00[0x124c];
    FilterDrawState projection;
    u8 unkBetween[0x40];
    FilterDrawState blend;
};
extern "C" {
extern Obj42094cDrawContext *g_titleScene;
void renderCtxSelectTexture(void *context, u32 texture);
u32 FUN_002c5d80(u32 mode, u32 value);
void titleSceneMultiplyByCameraView(void *filter, f32 *matrix, const void *motion);
void FUN_002b011c();
void gpuSubmitFloatVectorsOrDefault(const f32 *color, f32 x, f32 y, f32 z, f32 u, f32 v);
void forwardRecoveredCallback();
}

void Obj42094c::draw()
{
    Filter4PolyView *filter = (Filter4PolyView *)this;
    renderCtxSelectTexture(g_titleScene, ((FilterDrawTexture *)filter->texture)->handle);
    g_titleScene->blend.push(filter->config->blendMode);
    g_titleScene->projection.push(FUN_002c5d80(1, 0));
    f32 color[4];
    color[0] = 1.0f;
    color[1] = 1.0f;
    color[2] = 1.0f;
    color[3] = ((FilterDrawChild *)filter->child)->alpha;
    f32 vertices[4][3];
    for (u32 vertex = 0; vertex < 4; ++vertex) {
        vertices[vertex][0] = filter->vertices[vertex].position[0];
        vertices[vertex][1] = filter->vertices[vertex].position[1];
        vertices[vertex][2] = filter->vertices[vertex].position[2] - 11.0f;
    }
    for (s32 particle = 0; particle < filter->config->count; ++particle) {
        f32 matrix[16];
        titleSceneMultiplyByCameraView(this, matrix, &filter->motions[particle]);
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
        FUN_002b011c();
        for (u32 vertex = 0; vertex < 4; ++vertex) {
            gpuSubmitFloatVectorsOrDefault(color, projected[vertex][0], projected[vertex][1],
                projected[vertex][2], filter->vertices[vertex].u, filter->vertices[vertex].v);
        }
        forwardRecoveredCallback();
    }
    g_titleScene->projection.pop();
    g_titleScene->blend.pop();
}
