#include "camp/RenderCtx.h"
#include "util/BitsAndBytes.h"
#include "code/Code0016.h"
#include "code/Code0038.h"

extern "C" {

u32 flagsPackFourBooleans(s32 first, s32 second, s32 third, s32 fourth);
u32 FUN_003a48dc(s32 a, s32 b, s32 c, u32 d);
u32 packThreeFields(u32 a, s32 b, s32 c);

/* Fills the display with one colour quad (`color` is the quad's corner parameters, used for all four
 * corners) under render states built from `flags` (1: the four state booleans, 2: the pass flag, 4: mode 2
 * for the three-field state) and `fade`, with no texture selected; the states and the texture are put back
 * afterwards. */
void renderCtxFillDisplay(RenderCtxA *context, u32 color, u32 fade, u32 flags, f32 alpha)
{
    s32 first = 0;
    bool second = false;
    u32 mode = 0;
    AsdTexture *savedTexture = context->selectedTexture;
    f32 width = renderCtxDisplayWidth(context);
    f32 height = renderCtxDisplayHeight(context);

    if ((flags & 1) != 0) {
        first = 1;
    }
    if ((flags & 2) != 0) {
        second = true;
    }
    if ((flags & 4) != 0) {
        mode = 2;
    }
    renderCtxSelectTexture(context, NULL);
    {
        /* The states are held for the draw only: retail pops all six before it restores the texture. */
        RenderCtxStateScope pass(context, RENDER_STACK_A, renderCtxPackPassFlags(1, second));
        RenderCtxStateScope alphaPass(context, RENDER_STACK_C, renderCtxPackPassFlagsWithAlpha(1, 0.0f));
        RenderCtxStateScope booleans(context, RENDER_STACK_G, flagsPackFourBooleans(first, first, first, first));
        RenderCtxStateScope nibbles(context, RENDER_STACK_B, packNibblesAndByte(1, 0, 0));
        RenderCtxStateScope fadeState(context, RENDER_STACK_E, FUN_003a48dc(1, fade, 255, 255));
        RenderCtxStateScope modeState(context, RENDER_STACK_F, packThreeFields(mode, mode, mode));
        FUN_00164034(0.0f, 0.0f, width, height, color, color, color, color, alpha);
    }
    renderCtxSelectTexture(context, savedTexture);
}

} /* extern "C" */
