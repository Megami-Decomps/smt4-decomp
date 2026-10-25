/* NON_MATCHING: stack-address evaluation order now matches retail (renderCtxPush wrappers); 122 diff lines remain, scheduling/register allocation only. */
#include "camp/RenderCtx.h"
#include "text/TextDraw.h"

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
extern RenderCtxA *g_renderCtx;
u32 jobGetWork(u32 handle);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);
void FUN_00157558(RenderCtxA *context);
void FUN_0016c4b8(RenderCtxA *context, void *preset);
u32 FUN_001692ac(u32 kind, bool enabled);
void mobiclipRenderCurrentScreen(void);
void FUN_00167618(const f32 *topLeft, const f32 *topRight, const f32 *bottomLeft, const f32 *bottomRight, f32 x, f32 y,
                  f32 width, f32 height, f32 depth);
int FUN_00102bbc(void *destination, const void *source, u32 size);

static const u16 kMarker[] = {'>', 0};

/* Draw job of the movie test screen: the movie frame with an optional fade, or the movie file list. */
u32 FUN_002c3038(u32 handle)
{
    MovieTestWork *work = (MovieTestWork *)jobGetWork(handle);
    if (work->mode != 1) {
        skinObjectUpdateMatrices(g_renderCtx);
        FUN_00157558(g_renderCtx);
        if (work->mode != 7 && work->mode != 8 && work->mode != 14) {
            mobiclipRenderCurrentScreen();
        } else {
            f32 color[4];
            color[0] = 0.0f;
            color[1] = 0.0f;
            color[2] = 0.0f;
            color[3] = 1.0f;
            FUN_0016c4b8(g_renderCtx, NULL);
            FUN_00167618(color, color, color, color, 0.0f, 0.0f, 400.0f, 240.0f, 0.9375f);
        }
        if (work->fade != 0.0f) {
            f32 color[4];
            color[0] = 1.0f;
            color[1] = 1.0f;
            color[2] = 1.0f;
            color[3] = 1.0f;
            FUN_00157558(g_renderCtx);
            renderCtxPushA(g_renderCtx, FUN_001692ac(1, false));
            color[3] = work->fade;
            FUN_0016c4b8(g_renderCtx, NULL);
            FUN_00167618(color, color, color, color, 0.0f, 0.0f, 400.0f, 240.0f, 0.9375f);
            renderStackPop(&g_renderCtx->stackA);
        }
    } else {
        s32 shown = 10;
        s32 first = 0;
        if (work->entryCount < 10) {
            shown = work->entryCount;
            if (work->entryCount <= 0) {
                skinObjectUpdateMatrices(g_renderCtx);
                renderCtxResetColorScale(g_renderCtx);
                return 0;
            }
        } else if (work->selected >= 10) {
            first = work->selected - 9;
        }
        for (s32 row = 0; row < shown; row++) {
            u32 color = 0xFFFFFFFF;
            if (work->selected == row + first) {
                textDrawString(2, 0xFF00FF, (const char *)kMarker, 8.0f, (f32)(row * 14), 0.1f, 0.0f, 1.0f);
                color = 0xFF00FF;
            }
            u16 name[0x20];
            FUN_00102bbc(name, work->entries + (row + first) * 0x228, 0x40);
            textDrawString(2, color, (const char *)name, 20.0f, (f32)(row * 14), 0.1f, 1.0f, 1.0f);
        }
    }
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}
