/* NON_MATCHING: the render-state push/pop, the text buffer frame and the float constant registers differ from retail (233 vs 235 rows); the quest screen drawing is the same. */
#include "common.h"
#include "camp/RenderCtx.h"

extern "C" {

/* A layout record (only the fields read here). */
typedef struct QuestLayout {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
} QuestLayout;

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

extern RenderCtxA *g_renderCtx;
extern QuestUi *g_uiQuest;

void FUN_00157558(RenderCtxA *context);
s32 FUN_001692ac(s32 a, s32 b);
void FUN_00218640(void);
void FUN_002f6048(QuestUi *ui);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);
s32 vec2GetXInt(void *vector);
s32 vec2GetYInt(void *vector);
f32 vec2GetSpeed(const void *vector);
void efctSetSpeed(f32 speed);
void uiFadeDraw(u32 id);
void FUN_001835b4(u32 a, u32 b, u32 id, s32 x, s32 y, u32 tag);
QuestLayout *FUN_001834a4(u32 group, u32 id);
void partyDrawCategorySelectionIcon(u16 category, s32 x, s32 y, u32 tag);
u32 FUN_00156850(u16 category, s32 arg);
void textFormatBuffer(void *buffer, const char *format, u32 value);
void FUN_00162790(u32 first, u32 second, const char *text, f32 x, f32 y, f32 z, f32 width, f32 height);
void FUN_001634b4(void *panel, f32 offset);
u32 packNibblesAndByte(u32 a, u32 b, u32 c);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

/* Draws the quest screen for its current state: the base screen for most states, the party
 * screen for 0x11-0x13, and for 0x14-0x16 the category picker with its panel and label.
 * Always returns 0. */
u32 FUN_0023b4cc(void)
{
    QuestUi *ui = g_uiQuest;

    FUN_00157558(g_renderCtx);
    renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));
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
        s32 x = vec2GetXInt(ui->panel);
        s32 y = vec2GetYInt(ui->panel);
        f32 speed = vec2GetSpeed(ui->panel);

        efctSetSpeed(speed);
        u16 category = ui->category;

        if (ui->hideFade == 0) {
            uiFadeDraw(0x92);
        }
        efctSetSpeed(speed);
        x += parallax;
        FUN_001835b4(2, 0x1E, 0x57, x, y, 0x97);
        FUN_001835b4(2, 0x1E, 0x58, x, y, 0x97);
        FUN_001835b4(2, 0x1E, 0x59, x, y, 0x97);
        FUN_001835b4(2, 0x1E, 0x51, x, y, 0xA1);
        QuestLayout *icon = FUN_001834a4(0x1E, 0x54);

        partyDrawCategorySelectionIcon(category, icon->x + x, icon->y + y, 0xA6);
        QuestLayout *label = FUN_001834a4(0x1E, 0x55);
        char text[64];

        textFormatBuffer(text, "%s", FUN_00156850(category, 0));
        FUN_00162790(3, -1, text, (f32)(label->x + x), (f32)(label->y + y), 0.375f, 0.0f, speed);
        FUN_001634b4(ui->panel, (f32)(s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.28f));
        efctSetSpeed(1.0f);
        break;
    }
    }
    renderStackPop(&g_renderCtx->stackA);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}

}
