#include "ui/UiSpriteApi.h"
#include "camp/RenderCtx.h"
/* NON_MATCHING: corrected next-dot snapshot, native aligned label copy, signed animation getter and s8 request flag;
 * the anchor's spill slot and the label buffer sit at other frame offsets (frame 124 against 116) and the dot coordinates
 * load as two vldr where retail uses vldmia. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxA.h"

/* The menu work block (only the fields the spinner uses). */
struct SpinnerWork {
    /* 0x0000 */ u8 unk0000[0x12D1];
    /* 0x12D1 */ s8 requested;      /* s8: retail reads it through a literal offset register */
    /* 0x12D2 */ u8 shown;
    /* 0x12D3 */ u8 unk12D3;
    /* 0x12D4 */ s32 tick;
    /* 0x12D8 */ s32 phase;
};


/* The shared text settings (font at 0x08, the spinner tick length at 0x04). */
struct UiTextFontSettings {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 tickLength;
    /* 0x08 */ u32 font;
};

struct FloatPoint {
    f32 x;
    f32 y;
};

extern "C" {
extern UiTextFontSettings g_uiTextFontSettings;

void renderStackPushIndexed(RenderCtxA *context, s32 index, u32 value);
void renderCtxPopState(RenderCtxA *context, s32 index);
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite(void);
void texDrawCompositeSprite(s32 a, s32 b, s32 sprite, s32 x, s32 y, s32 order);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
s32 __aeabi_idivmod(s32 a, s32 b);

/* Draws the spinner: eight dots around a ring, two opposite ones lit with their followers, and the
 * "Activating..." label; steps the animation by one tick. */
void FUN_0048b514(SpinnerWork *work)
{
    FloatPoint points[9];
    renderStackPushIndexed(g_renderCtx, 3, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(1.0f);
    gxResetColorQuadToWhite();
    u8 *anchor = (u8 *)work + 0x12DC;
    texDrawCompositeSprite(2, 19, 29, vec2GetXInt((UiSpriteState *)anchor), 0, 211);
    work->tick = (work->tick + 1) % g_uiTextFontSettings.tickLength;
    if (work->tick <= 0)
        work->phase++;
    work->phase &= 7;
    s32 next = (work->phase + 1) & 7;
    for (s32 i = 0; i < 9; i++) {
        TextureTableEntryIV *point = asdTMTexTableEntryAt(19, 0x1124 + i);
        points[i].x = (f32)point->x;
        points[i].y = (f32)point->y;
        texDrawTableEntryAtStoredOrigin(1, 19, 0x1121, vec2GetXInt((UiSpriteState *)anchor) + point->x, point->y, 6);
    }
    texDrawTableEntryAtStoredOrigin(1, 19, 0x1123, (s32)((f32)vec2GetXInt((UiSpriteState *)anchor) + points[work->phase].x), (s32)points[work->phase].y, 6);
    texDrawTableEntryAtStoredOrigin(1, 19, 0x1122, (s32)((f32)vec2GetXInt((UiSpriteState *)anchor) + points[next].x), (s32)points[next].y, 6);
    s32 opposite = (work->phase + 4) & 7;
    s32 oppositeNext = (opposite + 1) & 7;
    texDrawTableEntryAtStoredOrigin(1, 19, 0x1123, (s32)((f32)vec2GetXInt((UiSpriteState *)anchor) + points[opposite].x), (s32)points[opposite].y, 6);
    texDrawTableEntryAtStoredOrigin(1, 19, 0x1122, (s32)((f32)vec2GetXInt((UiSpriteState *)anchor) + points[oppositeNext].x), (s32)points[oppositeNext].y, 6);
    TextureTableEntryIV *label = asdTMTexTableEntryAt(19, 0x1120);
    char text[27];
    __aeabi_memcpy4(text, "\x82\x60\x82\x83\x82\x94\x82\x89\x82\x96\x82\x81\x82\x94\x82\x89\x82\x8E\x82\x87\x81\x44\x81\x44\x81\x44", sizeof(text));
    textDrawString((f32)(vec2GetXInt((UiSpriteState *)anchor) - 20 + label->x), (f32)label->y, 0.0f, 4, 0.0f, g_uiTextFontSettings.font,
                 1.0f, text);
    renderCtxPopState(g_renderCtx, 3);
    efctSetSpeed(1.0f);
    uiSpriteAdvanceAnimation((UiSpriteState *)anchor, 1.0f);
    if (work->requested == 0) {
        return;
    }
    if (uiSpriteGetCompletionState((UiSpriteState *)anchor) != 0) {
        work->shown = 1;
    }
}

} /* extern "C" */
