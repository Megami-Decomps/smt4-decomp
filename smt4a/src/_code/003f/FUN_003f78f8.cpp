/* NON_MATCHING: 154 lines (146 vs 142 rows): fixed three 64-byte buffers, per-branch body sprintf, 0.0f textDrawString arg 5, and shared sibling drawNoticeHeader helper; retail spills work/tag via push {r0..r2}; vpush {d0} and converts y before x. */
#include "common.h"
#include <stdio.h>
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxA.h"

extern "C" {

/* The notice panel's work block: its first tab flag is the byte at 0xC. */
typedef struct NoticeWork {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 restored;
} NoticeWork;

void FUN_003f707c(NoticeWork *work, s32 x, s32 y, s32 a, s32 b, s32 c, s32 d, s32 e, f32 speed);
f32 renderCtxCalculateStereoParallax(RenderCtxA *ctx, f32 depth);
void efctSetSpeed(f32 speed);
void fontMeasureLineAdvance(const char *text, s32 mode);
void FUN_003f757c(NoticeWork *work, s32 x, s32 y, s32 a, const char *text, s32 b, s32 c, s32 d, s32 e, f32 speed);
void uiDrawStereoKindIcon(NoticeWork *work, s32 x, s32 y, s32 a, s32 b, s32 c, f32 speed);

/* Draws the notice header text with stereo parallax (same operation as sibling FUN_003f7674). */
static __inline void drawNoticeHeader(s32 x, s32 y, s32 sprite, const char *text, u32 color, f32 speed)
{
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    efctSetSpeed(speed);
    TextureTableEntryIV *layout = asdTMTexTableEntryAt(0x31, sprite);
    fontMeasureLineAdvance(text, 3);
    textDrawString((f32)(layout->x + (x + parallax)), (f32)(layout->y + y), 0.15625f, 3, 0.0f, color, speed, text);
}

/* Draws a notice entry: its header, the heading text with its stereo-depth offset, the body line
 * and the kind icon, and the info tag. The wording depends on whether the terminal was restored. */
void FUN_003f78f8(NoticeWork *work, s32 x, s32 y, f32 speed)
{
    char heading[64];
    char body[64];
    char tag[64];

    FUN_003f707c(work, x, y, 0xD3, 0xE9, 0xF2, 0xF7, 0xF5, speed);
    if (work->restored != 0) {
        /* "Terminal use restored", "Hunter Association Management", "Info" (full-width) */
        sprintf(tag, "%s", "\x82s\x82\x85\x82\x92\x82\x8d\x82\x89\x82\x8e\x82\x81\x82\x8c\x81@\x82\x95\x82\x93\x82\x85\x81@\x82\x92\x82\x85\x82\x93\x82\x94\x82\x8f\x82\x92\x82\x85\x82\x84");
        sprintf(heading, "%s", "\x82g\x82\x95\x82\x8e\x82\x94\x82\x85\x82\x92\x81@\x82`\x82\x93\x82\x93\x82\x8f\x82\x83\x82\x89\x82\x81\x82\x94\x82\x89\x82\x8f\x82\x8e\x81@\x82l\x82\x81\x82\x8e\x82\x81\x82\x87\x82\x85\x82\x8d\x82\x85\x82\x8e\x82\x94");
        sprintf(body, "%s", "\x82h\x82\x8e\x82\x86\x82\x8f");
    } else {
        /* "Construction Notification", "Road Maintenance Division", "Info" */
        sprintf(tag, "%s", "\x82""b\x82\x8f\x82\x8e\x82\x93\x82\x94\x82\x92\x82\x95\x82\x83\x82\x94\x82\x89\x82\x8f\x82\x8e\x81@\x82m\x82\x8f\x82\x94\x82\x89\x82\x86\x82\x89\x82\x83\x82\x81\x82\x94\x82\x89\x82\x8f\x82\x8e");
        sprintf(heading, "%s", "\x82q\x82\x8f\x82\x81\x82\x84\x81@\x82l\x82\x81\x82\x89\x82\x8e\x82\x94\x82\x85\x82\x8e\x82\x81\x82\x8e\x82\x83\x82\x85\x81@\x82""c\x82\x89\x82\x96\x82\x89\x82\x93\x82\x89\x82\x8f\x82\x8e");
        sprintf(body, "%s", "\x82h\x82\x8e\x82\x86\x82\x8f");
    }

    drawNoticeHeader(x, y, 0xF1, tag, 0xFF, speed);
    FUN_003f757c(work, x, y, 0xD8, heading, 0xF6, 0xF5, 0, 1, speed);
    uiDrawStereoKindIcon(work, x, y, 0xD8, 0xB, 0x106, speed);
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    TextureTableEntryIV *layout = asdTMTexTableEntryAt(0x31, 0xFB);
    textDrawString((f32)(layout->x + (x + parallax)), (f32)(layout->y + y), 0.15625f, 3, 0.0f, -1, speed, body);
    efctSetSpeed(1.0f);
}

}
