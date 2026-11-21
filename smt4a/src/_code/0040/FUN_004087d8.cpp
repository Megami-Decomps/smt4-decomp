#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct ChoiceCaptionWork {
    u32 unk00[2];
    f32 alpha;
    u32 unk0C;
    char first[24];
    char second[24];
};
extern "C" {
void efctSetSpeed(f32 alpha);
void gxResetColorQuadToWhite(void);
s32 renderCtxPackPassFlags(s32 first, s32 second);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);
void texDrawCompositeSprite(s32 layer, u32 texture, u32 frame, s32 x, s32 y, u32 mode);
f32 fontMeasureTextWidth(const char *text, s32 font, f32 initialWidth);

/* Draws the frame and the centred caption at full speed. */
static void choiceCaptionDrawBody(ChoiceCaptionWork *work, s32 first)
{
    asdTMTexTableEntryAt(0x2B, 0x56);
    TextureTableEntryIV *metrics = asdTMTexTableEntryAt(0x2B, 0x59);
    s32 offset = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    texDrawCompositeSprite(2, 0x2B, 7, offset, 0, 0xF1);
    s32 availableWidth = metrics->placement->width;
    s32 width = (s32)fontMeasureTextWidth(first != 0 ? work->first : work->second, 4, 0.0f);
    f32 x = (f32)(offset + (availableWidth - width) / 2 + metrics->x);
    f32 y = (f32)metrics->y;
    const char *text = first != 0 ? work->first : work->second;
    textDrawString(x, y, 0.0f, 4, 0.0f, 0xFFFFFFFF, work->alpha, text);
}

/* Draws the selected caption over its stereo-shifted frame with the owner's opacity. */
void FUN_004087d8(ChoiceCaptionWork *work, s32 first)
{
    efctSetSpeed(work->alpha);
    gxResetColorQuadToWhite();
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(1.0f);
    choiceCaptionDrawBody(work, first);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    efctSetSpeed(1.0f);
}
}
