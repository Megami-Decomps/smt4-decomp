/* NON_MATCHING: canonical render push fixes stack-address scheduling; only the saved VFP constant registers (1.0f/0.0f in s16/s17 swapped) and the s0/s1 conversion register differ. */
#include "camp/RenderCtx.h"
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
extern RenderCtxA *g_renderCtx;
void efctSetSpeed(f32 alpha);
void FUN_00183bb0(void);
s32 FUN_001692ac(s32 first, s32 second);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);
void FUN_00164b5c(s32 layer, u32 texture, u32 frame, s32 x, s32 y, u32 mode);
f32 FUN_00168594(const char *text, s32 font, f32 initialWidth);

/* Draws the selected caption over its stereo-shifted frame with the owner's opacity. */
void FUN_004087d8(ChoiceCaptionWork *work, s32 first)
{
    efctSetSpeed(work->alpha);
    FUN_00183bb0();
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, FUN_001692ac(1, 0));
    efctSetSpeed(1.0f);
    asdTMTexTableEntryAt(0x2B, 0x56);
    TextureTableEntryIV *metrics = asdTMTexTableEntryAt(0x2B, 0x59);
    s32 offset = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    FUN_00164b5c(2, 0x2B, 7, offset, 0, 0xF1);
    s32 availableWidth = metrics->placement->width;
    s32 width = (s32)FUN_00168594(first != 0 ? work->first : work->second, 4, 0.0f);
    f32 x = (f32)(offset + (availableWidth - width) / 2 + metrics->x);
    f32 y = (f32)metrics->y;
    textDrawString(4, 0xFFFFFFFF, first != 0 ? work->first : work->second, x, y, 0.0f, 0.0f, work->alpha);
    renderStackPop(&g_renderCtx->stackA);
    efctSetSpeed(1.0f);
}
}
