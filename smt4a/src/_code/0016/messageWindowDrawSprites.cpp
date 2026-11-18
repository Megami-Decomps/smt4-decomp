/* NON_MATCHING: retail calls renderCtxPopState non-tail-callingly instead of tail-branching. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "ui/UiSpriteApi.h"
#include "ui/MessageMainA.h"
#include "util/BitsAndBytes.h"
#include "ui/AnimatedMessage.h"
#include "gfx/StereoParallax.h"

struct MessageBoxCategoryViewA {
    u8 unk00[0x48];
    u16 category;
};
extern "C" {
void effectRenderTransformedInstance(UiSpriteState *, f32);

void messageWindowDrawSprites(MessageWindowA *message)
{
    if (!message->state)
        return;
    renderStackPushIndexed(g_renderCtx, 3, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(1.0f);
    gxResetColorQuadToWhite();
    s32 parallax = static_cast<s32>(renderCtxCalculateStereoParallax(g_renderCtx, 0.25f));
    if (message->mode == 7 || message->mode == 8 || message->mode == 9) {
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
        effectRenderTransformedInstance(&message->sprites[6], static_cast<f32>(parallax));
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    }
    s32 category = reinterpret_cast<const MessageBoxCategoryViewA *>(message->box)->category;
    if (category <= 2)
        pairSetSecondResetFirst(&message->sprites[2], 31);
    else if (category <= 4)
        pairSetSecondResetFirst(&message->sprites[2], 27);
    else if (category <= 6)
        pairSetSecondResetFirst(&message->sprites[2], 28);
    else if (category <= 8)
        pairSetSecondResetFirst(&message->sprites[2], 30);
    else
        pairSetSecondResetFirst(&message->sprites[2], 29);
    effectRenderTransformedInstance(&message->sprites[0], static_cast<f32>(parallax));
    effectRenderTransformedInstance(&message->sprites[2], static_cast<f32>(parallax));
    effectRenderTransformedInstance(&message->sprites[3], static_cast<f32>(parallax));
    if (message->mode == 11)
        effectRenderTransformedInstance(&message->sprites[42], static_cast<f32>(parallax));
    effectRenderTransformedInstance(&message->sprites[5], static_cast<f32>(parallax));
    renderCtxPopState(g_renderCtx, 3);
}
}
