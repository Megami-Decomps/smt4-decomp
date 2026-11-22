#include "camp/RenderCtx.h"
#include "code/Code0028.h"
#include "code/Code002b.h"

extern "C" {
s32 renderCtxPackPassFlags(u32 kind, u8 enabled);
s32 flagsPackFourBooleans(u8 first, u8 second, u8 third, u8 fourth);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);
u32 FUN_00310578(s32 a, s32 b, s32 c, u32 d);
s32 packThreeNibbles(u32 first, u32 second, u32 third);

/* Fills the whole screen with `color` under a temporary render state: pushes the blend, mask and
   flag states on the draw context, draws the full-screen rectangle, and pops them again. */
void renderCtxFillDisplay(RenderCtx *context, u32 color, u32 alpha, u32 flags, f32 scale)
{
    u8 first = 0;
    u8 second = 0;
    u32 nibble = 0;
    AsdTexture *savedTexture = context->selectedTexture;
    f32 width = renderCtxDisplayWidth(context);
    f32 height = renderCtxDisplayHeight(context);
    if ((flags & 1) != 0) {
        first = 1;
    }
    if ((flags & 2) != 0) {
        second = 1;
    }
    if ((flags & 4) != 0) {
        nibble = 2;
    }
    renderCtxSelectTexture(context, 0);
    {
        /* The states are held for the draw only: retail pops all six before it restores the texture. */
        RenderCtxStateScope pass(context, RENDER_STACK_A, renderCtxPackPassFlags(1, second));
        RenderCtxStateScope fadeKind(context, RENDER_STACK_C, gxPackFadeKindAlphaWord(1, 0.0f));
        RenderCtxStateScope booleans(context, RENDER_STACK_G, flagsPackFourBooleans(first, first, first, first));
        RenderCtxStateScope nibbles(context, RENDER_STACK_B, packNibblesAndByte(1, 0, 0));
        RenderCtxStateScope alphaState(context, RENDER_STACK_E, FUN_00310578(1, alpha, 0xff, 0xff));
        RenderCtxStateScope nibbleState(context, RENDER_STACK_F, packThreeNibbles(nibble, nibble, nibble));
        FUN_002b7638(0.0f, 0.0f, width, height, color, color, color, color, scale);
    }
    renderCtxSelectTexture(context, savedTexture);
}

} /* extern "C" */
