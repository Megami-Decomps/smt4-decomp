/* NON_MATCHING: 116 lines (187 vs 185 rows): frame size (char text[64]) and __2sprintf match; retail swaps r5/r6 (y vs unit) and loads slot->x before slot->y. */
#include "common.h"
#include "runtime/Stdio.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

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

extern const char DAT_0052d83c[];
s32 renderCtxPackPassFlags(s32 a, s32 b);
PartnerUnitView *partyGetSlot(u16 index);
void FUN_004bde34(PartnerScreenView *screen, PartnerUnitView *unit, s32 index, s32 x, s32 y, f32 scale);
void uiDrawSelectedSpriteIndicator(PartnerScreenView *screen, s32 x, s32 y, f32 scale);
void efctSetSpeed(f32 speed);
s32 fontMeasureLineAdvance(void *text, u32 kind);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Draws the partner screen at (`x`, `y`) with fade `scale`: the partner slots (or the "no
 * partners" notice), the frame parts and the selection mark, inside a pushed render state. */
void FUN_004bee88(PartnerScreenView *screen, s32 x, s32 y, f32 scale)
{
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    s32 shown = 0;

    for (s32 i = 0; i < 12; i++) {
        PartnerUnitView *unit = partyGetSlot((u16)screen->partners[i]);

        if (unit != NULL && (unit->flags & 1) != 0) {
            TextureTableEntryIV *slot = asdTMTexTableEntryAt(0x11, shown + 0xAE);

            FUN_004bde34(screen, unit, i, slot->x + x, slot->y + y, scale);
            shown++;
        }
    }
    if (shown > 0) {
        uiDrawSelectedSpriteIndicator(screen, x, y, scale);
    } else {
        efctSetSpeed(scale);
        for (s32 i = 0; i < 6; i++) {
            texDrawTableEntryAtStoredOrigin(2, 0x11, i + 0xBE, 0, 0, 0x6F);
        }
        TextureTableEntryIV *notice = asdTMTexTableEntryAt(0x11, 0xC4);
        char text[64];

        __2sprintf(text, DAT_0052d83c);
        s32 width = fontMeasureLineAdvance(text, 3);
        s32 offset = (notice->placement->width - width) / 2;

        textDrawString((f32)(x + notice->x + offset), (f32)(notice->y + y), 0.0f, 3,
                     0.0f, -1, scale, (const char *)text);
        efctSetSpeed(1.0f);
    }
    efctSetSpeed(scale);
    for (s32 i = 0; i < 3; i++) {
        texDrawTableEntryAtStoredOrigin(2, 0x11, i + 0x81, x, y, 0x97);
    }
    texDrawTableEntryAtStoredOrigin(2, 0x11, 0xAD, x, y, 0x97);
    if (screen->current >= 0) {
        TextureTableEntryIV *mark = asdTMTexTableEntryAt(0x11, screen->current + 0xAE);

        texDrawTableEntryAtStoredOrigin(2, 0x11, 0xAB, mark->x + x, mark->y + y, 0x97);
        efctSetSpeed(1.0f);
    }
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}

}
