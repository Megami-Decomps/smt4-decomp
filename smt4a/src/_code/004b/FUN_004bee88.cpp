/* NON_MATCHING: register assignment differs (retail keeps y in r6 and the unit in r5; built swaps them) and the notice text buffer frame is 8 bytes larger (200 vs 185 rows); the partner screen drawing is the same. */
#include "common.h"
#include "camp/RenderCtx.h"

extern "C" {

/* A party unit record (only the flags are read here). */
typedef struct PartnerUnitView {
    /* 0x000 */ u8 unk000[0x130];
    /* 0x130 */ u32 flags;
} PartnerUnitView;

/* The partner screen (only the fields used here, as in FUN_004bd794). */
typedef struct PartnerScreenView {
    /* 0x000 */ u8 unk000[0x2C4];
    /* 0x2C4 */ s32 partners[12];
    /* 0x2F4 */ u8 unk2f4[0x34];
    /* 0x328 */ s32 current;
} PartnerScreenView;

typedef struct PartnerLayout {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ s16 *size;               /* width, height */
} PartnerLayout;

extern u8 *g_renderCtx;

void FUN_00157558(u8 *context);
s32 FUN_001692ac(s32 a, s32 b);
PartnerUnitView *FUN_003e4d68(u16 index);
PartnerLayout *FUN_001834a4(u32 group, u32 id);
void FUN_004bde34(PartnerScreenView *screen, PartnerUnitView *unit, s32 index, s32 x, s32 y, f32 scale);
void uiDrawSelectedSpriteIndicator(PartnerScreenView *screen, s32 x, s32 y, f32 scale);
void efctSetSpeed(f32 speed);
void FUN_001835b4(u32 a, u32 b, u32 id, s32 x, s32 y, u32 tag);
void textFormatBuffer(void *buffer, const char *format);
s32 FUN_0018408c(void *text, u32 kind);
void FUN_00162790(u32 first, u32 second, const u16 *text, f32 x, f32 y, f32 z, f32 width, f32 height);
void skinObjectUpdateMatrices(u8 *context);
void renderCtxResetColorScale(u8 *context);

/* Draws the partner screen at (`x`, `y`) with fade `scale`: the partner slots (or the "no
 * partners" notice), the frame parts and the selection mark, inside a pushed render state. */
void FUN_004bee88(PartnerScreenView *screen, s32 x, s32 y, f32 scale)
{
    FUN_00157558(g_renderCtx);
    renderStackPush((RenderStateStack *)(g_renderCtx + 0x1258), FUN_001692ac(1, 0));
    s32 shown = 0;

    for (s32 i = 0; i < 12; i++) {
        PartnerUnitView *unit = FUN_003e4d68((u16)screen->partners[i]);

        if (unit != NULL && (unit->flags & 1) != 0) {
            PartnerLayout *slot = FUN_001834a4(0x11, shown + 0xAE);

            FUN_004bde34(screen, unit, i, slot->x + x, slot->y + y, scale);
            shown++;
        }
    }
    if (shown > 0) {
        uiDrawSelectedSpriteIndicator(screen, x, y, scale);
    } else {
        efctSetSpeed(scale);
        for (s32 i = 0; i < 6; i++) {
            FUN_001835b4(2, 0x11, i + 0xBE, 0, 0, 0x6F);
        }
        PartnerLayout *notice = FUN_001834a4(0x11, 0xC4);
        u8 text[76];

        textFormatBuffer(text,
                         "\202\170\202\217\202\225\201\100\202\204\202\217\201\100\202\216\202\217\202\224\201\100\202\210"
                         "\202\201\202\226\202\205\201\100\202\201\202\216\202\231\201\100\202\220\202\201\202\222\202\224"
                         "\202\216\202\205\202\222\202\223\201\104");
        s32 width = FUN_0018408c(text, 3);

        FUN_00162790(3, -1, (const u16 *)text, (f32)(x + notice->x + (notice->size[0] - width) / 2),
                     (f32)(notice->y + y), 0.0f, 0.0f, scale);
        efctSetSpeed(1.0f);
    }
    efctSetSpeed(scale);
    for (s32 i = 0; i < 3; i++) {
        FUN_001835b4(2, 0x11, i + 0x81, x, y, 0x97);
    }
    FUN_001835b4(2, 0x11, 0xAD, x, y, 0x97);
    if (screen->current >= 0) {
        PartnerLayout *mark = FUN_001834a4(0x11, screen->current + 0xAE);

        FUN_001835b4(2, 0x11, 0xAB, mark->x + x, mark->y + y, 0x97);
        efctSetSpeed(1.0f);
    }
    renderStackPop((RenderStateStack *)(g_renderCtx + 0x1258));
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}

}
