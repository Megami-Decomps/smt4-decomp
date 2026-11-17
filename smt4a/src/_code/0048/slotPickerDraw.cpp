#include "gfx/StereoParallax.h"
/* NON_MATCHING: indexed first-stack push and three-byte label restored; set/pop state registers, glyph coordinates and blink remainder allocation still differ. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"
#include "util/BitsAndBytes.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/UiSpriteApi.h"

extern "C" {

/* The fade controller inside the picker: its speed is at +0x20. */
/* The slot picker screen (only the fields used here, by their offsets). */
typedef struct SlotPicker {
    /* 0x000 */ u8 unk000;
    /* 0x001 */ u8 mode;                /* 4: no cursor */
    /* 0x002 */ u8 unk002[0xA];
    /* 0x00C */ s32 frame;
    /* 0x010 */ u8 unk010[0x12];
    /* 0x022 */ s8 selected;
    /* 0x023 */ u8 unk023[0x8D];
    /* 0x0B0 */ u8 slotText[8][2];      /* two glyph bytes per slot */
    /* 0x0C0 */ u8 unk0c0[0x2EC];
    /* 0x3AC */ UiSpriteState fade;
} SlotPicker;

void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite(void);
s32 renderCtxPackPassFlags(s32 a, s32 b);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Draws the eight-slot picker: the frame parts, then for each slot its marker, the selected
 * slot's cursor (blinking every 30 frames) and the slot's two-glyph label. */
void slotPickerDraw(SlotPicker *picker)
{
    f32 scale = vec2GetSpeed(&picker->fade);

    efctSetSpeed(scale);
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);

    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    gxResetColorQuadToWhite();
    RenderCtxA *context = g_renderCtx;
    s32 state = renderCtxPackPassFlags(1, 0);
    renderStackPushCountedDirect(&context->stackA, state);
    renderCtxSelectTexture(g_renderCtx, 0);
    texDrawTableEntryAtStoredOrigin(2, 0x23, 0, parallax, 0, 0xB);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
    texDrawTableEntryAtStoredOrigin(2, 0x23, 1, parallax, 0, 0xB);
    texDrawTableEntryAtStoredOrigin(2, 0x23, 2, parallax, 0, 0xB);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    char label[3] = {0, 0, 0};

    for (s32 i = 0; i < 8; i++) {
        TextureTableEntryIV *slot = asdTMTexTableEntryAt(0x23, i + 8);

        if (picker->mode != 4) {
            if (picker->slotText[i][0] == 0 && picker->slotText[i][1] == 0) {
                texDrawTableEntryAtStoredOrigin(2, 0x23, 5, slot->x + parallax, slot->y, 0x10);
            } else {
                texDrawTableEntryAtStoredOrigin(2, 0x23, 0x10, slot->x + parallax, slot->y, 0x10);
            }
        }
        u32 color = 0xFFFFFFFF;

        if (picker->selected == i && picker->mode != 4) {
            color = 0x57D8FFFF;
            texDrawTableEntryAtStoredOrigin(2, 0x23, 4, slot->x + parallax, slot->y, 0x10);
            if (picker->frame % 30 < 15) {
                texDrawTableEntryAtStoredOrigin(2, 0x23, 6, slot->x + parallax, slot->y, 0x10);
            }
        }
        TextureTableEntryIV *text = asdTMTexTableEntryAt(0x23, 7);

        label[0] = picker->slotText[i][0];
        label[1] = picker->slotText[i][1];
        textDrawString(4, color, label, (f32)(slot->x + text->x + parallax), (f32)(slot->y + text->y), 0.91796875f, 0.0f,
                     scale);
    }
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}

}
