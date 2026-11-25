/* NON_MATCHING: counter badge draw (107 lines); the x + stereo sum is shared differently (retail overwrites it for the digits and recomputes it for the label), and the digit position is computed before drawSetColorFromRGBA8 in retail */
#include "common.h"
#include <stdio.h>
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxA.h"
#include "ui/NumberFont.h"


extern "C" {

f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 scale);
f32 jobGetScalarValue(void);
void efctSetSpeed(f32 speed);
u32 table01RecordLookupForContent(u32 id);
void uiDrawItemOrStatusIcon(u32 id, s32 x, s32 y, u32 flags, u32 arg);
void drawSetColorFromRGBA8(u32 color);
void gxResetColorQuadToWhite(void);
s32 fontMeasureLineAdvance(const char *text, s32 mode);

#define BADGE_STEREO_SCALE 0.26f
#define BADGE_BANK 0x14
#define BADGE_FLAGS 0xBF

/* Draws a count badge at (x, y): the four frame sprites, the label and the digits centred in it. */
void FUN_002ca878(struct SaveListWork *work, s32 x, s32 y, f32 speed)
{
    char label[64];
    char digits[64];

    s32 stereo = (s32)renderCtxCalculateStereoParallax(g_renderCtx, BADGE_STEREO_SCALE);
    f32 savedSpeed = jobGetScalarValue();
    efctSetSpeed(speed);
    s32 baseX = x + stereo;
    for (s32 i = 0; i < 4; i++)
        texDrawTableEntryAtStoredOrigin(2, BADGE_BANK, 0xC18 + i, baseX, y, BADGE_FLAGS);

    sprintf(label, "%s", table01RecordLookupForContent(0x31F));
    stereo = (s32)renderCtxCalculateStereoParallax(g_renderCtx, BADGE_STEREO_SCALE);
    TextureTableEntryIV *frame = asdTMTexTableEntryAt(BADGE_BANK, 0xC1C);
    s32 frameX = frame->x + x + stereo;
    s32 frameY = frame->y + y;
    texDrawTableEntryAtStoredOrigin(2, BADGE_BANK, 0xC13, frameX, frameY, BADGE_FLAGS);
    texDrawTableEntryAtStoredOrigin(2, BADGE_BANK, 0xBBA, frameX, frameY, BADGE_FLAGS);

    stereo = (s32)renderCtxCalculateStereoParallax(g_renderCtx, BADGE_STEREO_SCALE);
    frame = asdTMTexTableEntryAt(BADGE_BANK, 0xC1E);
    s32 iconX = x + stereo;
    uiDrawItemOrStatusIcon(0x31F, frame->x + iconX, frame->y + y, 0xC4, 0);
    frame = asdTMTexTableEntryAt(BADGE_BANK, 0xC1D);
    texDrawTableEntryAtStoredOrigin(2, BADGE_BANK, 0xBC2, frame->x + iconX, frame->y + y, BADGE_FLAGS);

    sprintf(digits, "%d", 99);
    frame = asdTMTexTableEntryAt(BADGE_BANK, 0xC22);
    drawSetColorFromRGBA8(0xFFFFFFFF);
    numberFontDrawFormatted(0, iconX + frame->x, frame->y + y, 1, 2, 0xCE, digits);
    gxResetColorQuadToWhite();

    frame = asdTMTexTableEntryAt(BADGE_BANK, 0xC1F);
    s32 labelX = frame->x + (frame->placement->width - fontMeasureLineAdvance(label, 2)) / 2 + x + stereo;
    textDrawString((f32)labelX, (f32)(frame->y + y), 1.0f, 2, 0.0f, 0xFF, speed, label);
    efctSetSpeed(savedSpeed);
}

} /* extern "C" */
