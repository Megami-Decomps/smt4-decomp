/* NON_MATCHING: Zero-depth VFP register preservation and state-stack pointer registers differ. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern RenderCtx *g_titleScene;
void FUN_002c1b64(RenderCtx *context, u32 value);
u32 FUN_002c5d80(u32 mode, bool enabled);
void FUN_002c0944(u32 color0, u32 color1, u32 color2, u32 color3,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);

void FUN_0019d9d4(const RectangleDrawInputPrefixIV *input)
{
    const u32 packedColor = input->color;
    const u8 lastByte = reinterpret_cast<const u8 *>(input)[3];
    const u32 color = ((packedColor & 0xFFu) << 24)
                    | ((packedColor & 0xFF00u) << 8)
                    | ((packedColor & 0xFF0000u) >> 8)
                    | lastByte;

    FUN_002c1b64(g_titleScene, 0);
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
