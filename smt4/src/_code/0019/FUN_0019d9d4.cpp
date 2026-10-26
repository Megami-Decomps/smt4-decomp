/* NON_MATCHING: retail keeps the 0.0f depth in s16 across the calls (vpush {d8}; vldr s16 at entry; finding, not kept: naming it in a function-level `f32 depth = 0.0f` reproduces that, a steering temporary needing Main's ruling), loads the colour word into r1 and its byte 3 through r0, and copies the colour into r3,r2,r1,r0 in a chain after the vldmia. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern RenderCtx *g_titleScene;
u32 FUN_002c5d80(u32 mode, bool enabled);
void FUN_002c0944(u32 color0, u32 color1, u32 color2, u32 color3,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);

void FUN_0019d9d4(const RectangleDrawInputPrefixIV *input)
{
    const u8 *channels = reinterpret_cast<const u8 *>(&input->color);
    const u32 color = (channels[0] << 24) | (channels[1] << 16) | (channels[2] << 8) | channels[3];

    renderCtxSelectTexture(g_titleScene, 0);
    RenderCtx *context = g_titleScene;
    const u32 state = FUN_002c5d80(1, false);
    renderCtxPushA(context, state);

    FUN_002c0944(color, color, color, color,
                 input->left, input->top,
                 input->right - input->left,
                 input->bottom - input->top, 0.0f);

    renderStackPop(&g_titleScene->stackA);
}
}
