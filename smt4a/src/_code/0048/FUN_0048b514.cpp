#include "util/MathFunctions.h"
/* NON_MATCHING: corrected next-dot snapshot, native aligned label copy, and signed animation getter; font-settings ownership, stack layout and saved work/context registers still differ. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* The menu work block (only the fields the spinner uses). */
struct SpinnerWork {
    /* 0x0000 */ u8 unk0000[0x12D1];
    /* 0x12D1 */ u8 requested;
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
extern u32 g_renderCtx;
extern UiTextFontSettings g_uiTextFontSettings;

u32 FUN_001692ac(s32 a, s32 b);
void renderStackPushIndexed(u32 context, s32 index, u32 value);
void renderCtxPopState(u32 context, s32 index);
void efctSetSpeed(f32 speed);
void FUN_00183bb0(void);
void FUN_00164b5c(s32 a, s32 b, s32 sprite, s32 x, s32 y, s32 order);
void FUN_00163aa4(void *anchor, f32 alpha);
s8 uiSpriteGetCompletionState(const void *animation);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
s32 __aeabi_idivmod(s32 a, s32 b);

/* Draws the spinner: eight dots around a ring, two opposite ones lit with their followers, and the
 * "Activating..." label; steps the animation by one tick. */
void FUN_0048b514(SpinnerWork *work)
{
    FloatPoint points[9];
    renderStackPushIndexed(g_renderCtx, 3, FUN_001692ac(1, 0));
    efctSetSpeed(1.0f);
    FUN_00183bb0();
    u8 *anchor = (u8 *)work + 0x12DC;
    FUN_00164b5c(2, 19, 29, vec2GetXInt(anchor), 0, 211);
    work->tick = (work->tick + 1) % g_uiTextFontSettings.tickLength;
    if (work->tick <= 0)
        work->phase++;
    work->phase &= 7;
    s32 next = (work->phase + 1) & 7;
    for (s32 i = 0; i < 9; i++) {
        TextureTableEntryIV *point = asdTMTexTableEntryAt(19, 0x1124 + i);
        points[i].x = (f32)point->x;
        points[i].y = (f32)point->y;
        FUN_001835b4(1, 19, 0x1121, vec2GetXInt(anchor) + point->x, point->y, 6);
    }
    FUN_001835b4(1, 19, 0x1123, (s32)((f32)vec2GetXInt(anchor) + points[work->phase].x), (s32)points[work->phase].y, 6);
    FUN_001835b4(1, 19, 0x1122, (s32)((f32)vec2GetXInt(anchor) + points[next].x), (s32)points[next].y, 6);
    s32 opposite = (work->phase + 4) & 7;
    s32 oppositeNext = (opposite + 1) & 7;
    FUN_001835b4(1, 19, 0x1123, (s32)((f32)vec2GetXInt(anchor) + points[opposite].x), (s32)points[opposite].y, 6);
    FUN_001835b4(1, 19, 0x1122, (s32)((f32)vec2GetXInt(anchor) + points[oppositeNext].x), (s32)points[oppositeNext].y, 6);
    TextureTableEntryIV *label = asdTMTexTableEntryAt(19, 0x1120);
    char text[27];
    __aeabi_memcpy4(text, "\x82\x60\x82\x83\x82\x94\x82\x89\x82\x96\x82\x81\x82\x94\x82\x89\x82\x8E\x82\x87\x81\x44\x81\x44\x81\x44", sizeof(text));
    textDrawString(4, g_uiTextFontSettings.font, text, (f32)(vec2GetXInt(anchor) - 20 + label->x), (f32)label->y, 0.0f,
                 0.0f, 1.0f);
    renderCtxPopState(g_renderCtx, 3);
    efctSetSpeed(1.0f);
    FUN_00163aa4(anchor, 1.0f);
    if (work->requested == 0) {
        return;
    }
    if (uiSpriteGetCompletionState(anchor) != 0) {
        work->shown = 1;
    }
}

} /* extern "C" */
