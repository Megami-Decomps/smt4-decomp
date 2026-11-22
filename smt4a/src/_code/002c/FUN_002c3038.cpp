/* NON_MATCHING: 10 lines: the pop reloads g_renderCtx into r0 (build: r4), the list's two 1.0f text arguments
 * are scheduled s3-then-s4 copy, and the black quad's alpha store comes first in retail. */
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "text/TextDraw.h"
#include "gfx/ColoredQuad.h"
#include "shard/W6_W6Match3_EffectColor.h"

/* The movie-test job's work block: playback mode, fade, and the file list that mode 1 shows. */
struct MovieTestWork {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 mode;
    /* 0x14 */ u8 unk14[0x4C];
    /* 0x60 */ s32 entryCount;
    /* 0x64 */ u8 *entries; /* 0x228 bytes each, the name at the start */
    /* 0x68 */ s32 selected;
    /* 0x6C */ f32 fade;
};
typedef char MovieTestWorkOffsets[offsetof(MovieTestWork, fade) == 0x6C ? 1 : -1];

extern "C" {
u32 jobGetWork(u32 handle);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *context);
u32 renderCtxPackPassFlags(u32 kind, bool enabled);
void mobiclipRenderCurrentScreen(void);
int FUN_00102bbc(void *destination, const void *source, u32 size);

/* Draw job of the movie test screen: the movie frame with an optional fade, or the movie file list. */
u32 FUN_002c3038(u32 handle)
{
    MovieTestWork *work = (MovieTestWork *)jobGetWork(handle);
    if (work->mode == 1) {
        s32 shown = 10;
        s32 first = 0;
        if (work->entryCount < 10) {
            shown = work->entryCount;
        } else if (work->selected >= 10) {
            first = work->selected - 9;
        }
        for (s32 row = 0; row < shown; row++) {
            u32 color = 0xFFFFFFFF;
            if (work->selected == row + first) {
                color = 0xFF00FF;
                textDrawString(8.0f, (f32)(row * 14), 0.1f, 2, 0.0f, color, 1.0f, (const char *)L">");
            }
            u16 name[0x20];
            FUN_00102bbc(name, work->entries + (row + first) * 0x228, 0x40);
            textDrawString(20.0f, (f32)(row * 14), 0.1f, 2, 1.0f, color, 1.0f, (const char *)name);
        }
    } else {
        skinObjectUpdateMatrices(g_renderCtx);
        renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
        if (work->mode == 7 || work->mode == 8 || work->mode == 14) {
            EffectColor color;
            effectColorSet(&color, 0.0f, 0.0f, 0.0f, 1.0f);
            renderCtxSelectTexture(g_renderCtx, NULL);
            gfxDrawQuadFourColors(0.0f, 0.0f, 400.0f, 240.0f, &color, &color, &color, &color, 0.95703125f);
        } else {
            mobiclipRenderCurrentScreen();
        }
        if (work->fade != 0.0f) {
            EffectColor color;
            /* retail stores the white colour before and again after the push */
            effectColorSet(&color, 1.0f, 1.0f, 1.0f, 1.0f);
            renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
            renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, false));
            effectColorSet(&color, 1.0f, 1.0f, 1.0f, work->fade);
            renderCtxSelectTexture(g_renderCtx, NULL);
            gfxDrawQuadFourColors(0.0f, 0.0f, 400.0f, 240.0f, &color, &color, &color, &color, 0.95703125f);
            renderStackPopCounted(g_renderCtx->stacks + RENDER_STACK_A);
        }
    }
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}
