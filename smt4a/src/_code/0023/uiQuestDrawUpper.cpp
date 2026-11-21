/* NON_MATCHING: the render-state push/pop, the text buffer frame and the float constant registers differ from retail (233 vs 235 rows); the quest screen drawing is the same. */
#include "common.h"
#include <stdio.h>
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/UiSpriteApi.h"

extern "C" {


/* The quest UI work block (only the fields used here, by their offsets). */
typedef struct QuestUi {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 state;
    /* 0x008 */ u8 unk008[0x400];
    /* 0x408 */ u8 panel[0x20];
    /* 0x428 */ f32 panelSpeed;
    /* 0x42C */ u8 unk42c[0x510];
    /* 0x93C */ u8 hideFade;
    /* 0x93D */ u8 unk93d[0x38D];
    /* 0xCCA */ u16 category;
} QuestUi;

extern QuestUi *g_uiQuest;

s32 renderCtxPackPassFlags(s32 a, s32 b);
void FUN_00218640(void);
void FUN_002f6048(QuestUi *ui);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);
void efctSetSpeed(f32 speed);
void uiFadeDraw(u32 id);
void partyDrawCategorySelectionIcon(u16 category, s32 x, s32 y, u32 tag);
u32 FUN_00156850(u16 category, s32 arg);
void effectRenderTransformedInstance(void *panel, f32 offset);
u32 packNibblesAndByte(u32 a, u32 b, u32 c);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Draws the quest screen for its current state: the base screen for most states, the party
 * screen for 0x11-0x13, and for 0x14-0x16 the category picker with its panel and label.
 * Always returns 0. */
u32 uiQuestDrawUpper(void)
{
    QuestUi *ui = g_uiQuest;

    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    switch (ui->state) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
        FUN_00218640();
        break;
    case 0x11:
    case 0x12:
    case 0x13:
        FUN_002f6048(ui);
        break;
    case 0x14:
    case 0x15:
    case 0x16: {
        if (ui->hideFade == 0) {
            FUN_00218640();
        }
        ui = g_uiQuest;
        s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.3f);
        s32 x = vec2GetXInt((const UiSpriteState *)ui->panel);
        s32 y = vec2GetYInt((const UiSpriteState *)ui->panel);
        f32 speed = vec2GetSpeed((const UiSpriteState *)ui->panel);

        efctSetSpeed(speed);
        u16 category = ui->category;

        if (ui->hideFade == 0) {
            uiFadeDraw(0x92);
        }
        efctSetSpeed(speed);
        x += parallax;
        texDrawTableEntryAtStoredOrigin(2, 0x1E, 0x57, x, y, 0x97);
        texDrawTableEntryAtStoredOrigin(2, 0x1E, 0x58, x, y, 0x97);
        texDrawTableEntryAtStoredOrigin(2, 0x1E, 0x59, x, y, 0x97);
        texDrawTableEntryAtStoredOrigin(2, 0x1E, 0x51, x, y, 0xA1);
        TextureTableEntryIV *icon = asdTMTexTableEntryAt(0x1E, 0x54);

        partyDrawCategorySelectionIcon(category, icon->x + x, icon->y + y, 0xA6);
        TextureTableEntryIV *label = asdTMTexTableEntryAt(0x1E, 0x55);
        char text[64];

        sprintf(text, "%s", FUN_00156850(category, 0));
        textDrawString((f32)(label->x + x), (f32)(label->y + y), 0.375f, 3, 0.0f, -1, speed, text);
        effectRenderTransformedInstance(ui->panel, (f32)(s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.28f));
        efctSetSpeed(1.0f);
        break;
    }
    }
    renderStackPopChecked(g_renderCtx->stacks + RENDER_STACK_A);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}

}
