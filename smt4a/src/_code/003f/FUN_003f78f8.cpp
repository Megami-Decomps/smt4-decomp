/* NON_MATCHING: retail spills the incoming float and the stack arguments to different frame slots and keeps 0.26f/0.15625f/1.0f in s17-s19; the formatted-title sequence and draw calls are the same. */
#include "common.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

/* The notice panel's work block: its first tab flag is the byte at 0xC. */
typedef struct NoticeWork {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 restored;
} NoticeWork;


extern void *g_renderCtx;

s32 textFormatBuffer(char *buffer, const char *format, ...);
void FUN_003f707c(NoticeWork *work, s32 x, s32 y, s32 a, s32 b, s32 c, s32 d, s32 e, f32 speed);
f32 renderCtxCalculateStereoParallax(void *ctx, f32 depth);
void efctSetSpeed(f32 speed);
void fontMeasureLineAdvance(const char *text, s32 mode);
void FUN_003f757c(NoticeWork *work, s32 x, s32 y, s32 a, const char *text, s32 b, s32 c, s32 d, s32 e, f32 speed);
void uiDrawStereoKindIcon(NoticeWork *work, s32 x, s32 y, s32 a, s32 b, s32 c, f32 speed);

/* Draws a notice entry: its header, the heading text with its stereo-depth offset, the body line
 * and the kind icon, and the info tag. The wording depends on whether the terminal was restored. */
void FUN_003f78f8(NoticeWork *work, s32 x, s32 y, f32 speed)
{
    char heading[64];
    char body[64];
    char tag[96];

    FUN_003f707c(work, x, y, 0xD3, 0xE9, 0xF2, 0xF7, 0xF5, speed);
    if (work->restored != 0) {
        /* "Terminal use restored", "Hunter Association Management", "Info" (full-width) */
        textFormatBuffer(tag, "%s", "\x82s\x82\x85\x82\x92\x82\x8d\x82\x89\x82\x8e\x82\x81\x82\x8c\x81@\x82\x95\x82\x93\x82\x85\x81@\x82\x92\x82\x85\x82\x93\x82\x94\x82\x8f\x82\x92\x82\x85\x82\x84");
        textFormatBuffer(heading, "%s", "\x82g\x82\x95\x82\x8e\x82\x94\x82\x85\x82\x92\x81@\x82`\x82\x93\x82\x93\x82\x8f\x82\x83\x82\x89\x82\x81\x82\x94\x82\x89\x82\x8f\x82\x8e\x81@\x82l\x82\x81\x82\x8e\x82\x81\x82\x87\x82\x85\x82\x8d\x82\x85\x82\x8e\x82\x94");
    } else {
        /* "Construction Notification", "Road Maintenance Division" */
        textFormatBuffer(tag, "%s", "\x82""b\x82\x8f\x82\x8e\x82\x93\x82\x94\x82\x92\x82\x95\x82\x83\x82\x94\x82\x89\x82\x8f\x82\x8e\x81@\x82m\x82\x8f\x82\x94\x82\x89\x82\x86\x82\x89\x82\x83\x82\x81\x82\x94\x82\x89\x82\x8f\x82\x8e");
        textFormatBuffer(heading, "%s", "\x82q\x82\x8f\x82\x81\x82\x84\x81@\x82l\x82\x81\x82\x89\x82\x8e\x82\x94\x82\x85\x82\x8e\x82\x81\x82\x8e\x82\x83\x82\x85\x81@\x82""c\x82\x89\x82\x96\x82\x89\x82\x93\x82\x89\x82\x8f\x82\x8e");
    }
    /* "Info" (full-width) */
    textFormatBuffer(body, "%s", "\x82h\x82\x8e\x82\x86\x82\x8f");

    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);

    efctSetSpeed(speed);
    TextureTableEntryIV *layout = asdTMTexTableEntryAt(0x31, 0xF1);

    fontMeasureLineAdvance(tag, 3);
    textDrawString(3, 0xFF, tag, (f32)(layout->x + x + parallax), (f32)(layout->y + y), 0.15625f, 1.0f, speed);
    FUN_003f757c(work, x, y, 0xD8, heading, 0xF6, 0xF5, 0, 1, speed);
    uiDrawStereoKindIcon(work, x, y, 0xD8, 0xB, 0x106, speed);
    parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    layout = asdTMTexTableEntryAt(0x31, 0xFB);
    textDrawString(3, -1, body, (f32)(layout->x + x + parallax), (f32)(layout->y + y), 0.15625f, 1.0f, speed);
    efctSetSpeed(1.0f);
}

}
