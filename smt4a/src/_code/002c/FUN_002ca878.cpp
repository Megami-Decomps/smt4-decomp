/* NON_MATCHING: counter badge draw; call sequence follows retail, float/int scheduling and the saved-register set are not compared */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"


extern "C" {
extern void *g_renderCtx;

f32 renderCtxCalculateStereoParallax(void *context, f32 scale);
f32 jobGetScalarValue(void);
void efctSetSpeed(f32 speed);
u32 FUN_00180114(u32 id);
void textFormatBuffer(char *buffer, const char *format, ...);
void FUN_0018152c(u32 id, s32 x, s32 y, u32 flags, u32 arg);
void drawSetColorFromRGBA8(u32 color);
void FUN_00180310(s32 a, s32 x, s32 y, s32 b, s32 c, u32 flags, const char *text);
void FUN_00183bb0(void);
s32 fontMeasureLineAdvance(const char *text, s32 mode);

#define BADGE_STEREO_SCALE 0.26f
#define BADGE_BANK 0x14
#define BADGE_FLAGS 0xBF

/* Draws a count badge at (x, y): the four frame sprites, the label and the digits centred in it. */
void FUN_002ca878(f32 speed, s32 x, s32 y)
{
    char label[64];
    char digits[64];

    s32 stereo = (s32)renderCtxCalculateStereoParallax(g_renderCtx, BADGE_STEREO_SCALE);
    f32 savedSpeed = jobGetScalarValue();
    efctSetSpeed(speed);
    s32 baseX = x + stereo;
    for (s32 i = 0; i < 4; i++)
        FUN_001835b4(2, BADGE_BANK, 0xC18 + i, baseX, y, BADGE_FLAGS);

    textFormatBuffer(label, "%s", FUN_00180114(0x31F));
    stereo = (s32)renderCtxCalculateStereoParallax(g_renderCtx, BADGE_STEREO_SCALE);
    TextureTableEntryIV *frame = asdTMTexTableEntryAt(BADGE_BANK, 0xC1C);
    s32 frameX = frame->x + x + stereo;
    s32 frameY = frame->y + y;
    FUN_001835b4(2, BADGE_BANK, 0xC13, frameX, frameY, BADGE_FLAGS);
    FUN_001835b4(2, BADGE_BANK, 0xBBA, frameX, frameY, BADGE_FLAGS);

    stereo = (s32)renderCtxCalculateStereoParallax(g_renderCtx, BADGE_STEREO_SCALE);
    frame = asdTMTexTableEntryAt(BADGE_BANK, 0xC1E);
    s32 iconX = x + stereo;
    FUN_0018152c(0x31F, frame->x + iconX, frame->y + y, 0xC4, 0);
    frame = asdTMTexTableEntryAt(BADGE_BANK, 0xC1D);
    FUN_001835b4(2, BADGE_BANK, 0xBC2, frame->x + iconX, frame->y + y, BADGE_FLAGS);

    textFormatBuffer(digits, "%d", 99);
    frame = asdTMTexTableEntryAt(BADGE_BANK, 0xC22);
    drawSetColorFromRGBA8(0xFFFFFFFF);
    FUN_00180310(0, iconX + frame->x, frame->y + y, 1, 2, 0xCE, digits);
    FUN_00183bb0();

    frame = asdTMTexTableEntryAt(BADGE_BANK, 0xC1F);
    s32 labelX = frame->x + (frame->placement->width - fontMeasureLineAdvance(label, 2)) / 2 + x + stereo;
    textDrawString(2, 0xFF, label, (f32)labelX, (f32)(frame->y + y), 1.0f, 0.0f, speed);
    efctSetSpeed(savedSpeed);
}

} /* extern "C" */
