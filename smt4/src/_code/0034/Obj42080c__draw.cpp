/* NON_MATCHING: 96 lines: retail adds -11.0 (kept in s16 from entry) to each vertex depth and loads each vertex's
 * buffer pointer once, copying the position through VFP pairs; the build subtracts 11.0 and reloads the buffer for
 * every field; the context loads into r4 rather than r1 before the first push. */
#include "classes/Obj42080c.h"
#include "classes/FilterDraw.h"
#include "camp/RenderCtxTitle.h"
#include "code/Code002b_Smt4.h"
#include "ui/AnimatedMessage.h"

extern "C" {
void titleSceneMultiplyByCameraView(void *filter, f32 *matrix, const void *motion);
void nn_math_VEC3TransformCoordArray(f32 *vertices, const f32 *matrix, f32 *output, u32 count);
void gpuSubmitFloatVectorsOrDefault(const f32 *color, f32 x, f32 y, f32 z, f32 u, f32 v);
void effectSubmitDefaultDrawParameters(); // declcheck: local (retail passes nothing: r0 still holds the last submit's result)
}

/* Draws the quad: its four vertices, moved 11 units back and through the filter's camera view, in the
 * source's blend mode with the child's alpha. */
void Obj42080c::draw()
{
    renderCtxSelectTexture(g_titleScene, (struct AsdTexture *)((FilterDrawTexture *)texture)->handle);
    f32 matrix[16];
    titleSceneMultiplyByCameraView(this, matrix, matrixSlot());
    renderStackPushCounted(g_titleScene->stacks + RENDER_STACK_B,
                           static_cast<Filter4PolySource *>(rect)->blendMode);
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));
    f32 color[4];
    color[0] = 1.0f;
    color[1] = 1.0f;
    color[2] = 1.0f;
    color[3] = ((FilterDrawChild *)child)->alpha;
    f32 points[4][3];
    for (u32 vertex = 0; vertex < 4; ++vertex) {
        points[vertex][0] = vertices()[vertex].position[0];
        points[vertex][1] = vertices()[vertex].position[1];
        points[vertex][2] = vertices()[vertex].position[2] - 11.0f;
    }
    nn_math_VEC3TransformCoordArray(&points[0][0], matrix, &points[0][0], 4);
    FUN_002b011c();
    for (u32 vertex = 0; vertex < 4; ++vertex) {
        gpuSubmitFloatVectorsOrDefault(color, points[vertex][0], points[vertex][1], points[vertex][2],
                                       vertices()[vertex].x, vertices()[vertex].y);
    }
    effectSubmitDefaultDrawParameters();
    renderCtxPopCounted(g_titleScene, RENDER_STACK_A);
    renderCtxPopCounted(g_titleScene, RENDER_STACK_B);
}
