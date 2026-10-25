/* NON_MATCHING: register allocation only: retail keeps &g_renderCtx in r9, x in r6 and the record in r7 (x/record swapped here) and the icon in r8 instead of a stack slot */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"

struct StatusRecord {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ u16 count;
    /* 0x66 */ u8 unk66[0x12c - 0x66];
    /* 0x12C */ u16 iconId;
};

struct LayoutPlacement {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ s16 *width;
};

extern "C" {

extern void *g_renderCtx; /* 0x59dbb4 */

f32 renderCtxCalculateStereoParallax(void *ctx, f32 depth);
f32 jobGetScalarValue(void);
void efctSetSpeed(f32 speed);
s16 FUN_0019e52c(u16 id);
u32 FUN_00180114(void);
void textFormatBuffer(char *buffer, const char *format, ...);
LayoutPlacement *asdTMTexTableEntryAt(u32 table, s32 id);
void FUN_0018152c(s32 icon, s32 x, s32 y, s32 index, s32 flags);
void drawSetColorFromRGBA8(u32 rgba);
void FUN_00180310(s32 mode, s32 x, s32 y, s32 align, s32 digits, s32 index, const char *text);
void FUN_00183bb0(void);
s32 fontMeasureLineAdvance(const char *text, s32 mode);

/* Draws one status badge: its frame, icon, count and name text. */
void FUN_003721b0(u32 unused, f32 speed, StatusRecord *record, s32 slot, s32 x, s32 y)
{
    char name[64];
    char countText[68];
    f32 depth = 0.26f;
    f32 savedSpeed;
    s16 icon;
    s32 count;
    s32 parallax;
    s32 frameId;
    s32 frameX;
    s32 frameY;
    s32 digits;
    s32 digitsId;
    LayoutPlacement *placement;

    renderCtxCalculateStereoParallax(g_renderCtx, depth);
    savedSpeed = jobGetScalarValue();
    efctSetSpeed(speed);
    icon = FUN_0019e52c(record->iconId);
    count = record->count;
    textFormatBuffer(name, "%s", FUN_00180114());
    parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, depth);
    frameId = 0xbba;
    if (slot == 0) {
        frameId = 0xbb9;
    }
    placement = asdTMTexTableEntryAt(20, slot + 0xbbb);
    frameX = placement->x + (x + parallax);
    frameY = placement->y + y;
    FUN_001835b4(2, 20, 0xc12, frameX, frameY, 0xbf);
    FUN_001835b4(2, 20, frameId, frameX, frameY, 0xbf);
    parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, depth);
    placement = asdTMTexTableEntryAt(20, slot + 0xbda);
    frameX = x + parallax;
    FUN_0018152c(icon, placement->x + frameX, placement->y + y, 196, 0);
    placement = asdTMTexTableEntryAt(20, slot + 0xbc3);
    FUN_001835b4(2, 20, 0xbc2, placement->x + frameX, placement->y + y, 0xbf);
    digits = 2;
    digitsId = slot * 2 + 0xc68;
    if (count > 99) {
        digits = 3;
        digitsId = slot * 3 + 0xbee;
    }
    textFormatBuffer(countText, "%d", count);
    placement = asdTMTexTableEntryAt(20, digitsId);
    frameX += placement->x;
    frameY = placement->y + y;
    drawSetColorFromRGBA8(0xffffffff);
    FUN_00180310(0, frameX, frameY, 1, digits, 0xce, countText);
    FUN_00183bb0();
    placement = asdTMTexTableEntryAt(20, slot + 0xbe5);
    frameX = placement->x + (*placement->width - fontMeasureLineAdvance(name, 2)) / 2 + x + parallax;
    textDrawString(2, 0xff, name, (f32)frameX, (f32)(placement->y + y), 1.0f, 0.0f, speed);
    efctSetSpeed(savedSpeed);
}

} /* extern "C" */
