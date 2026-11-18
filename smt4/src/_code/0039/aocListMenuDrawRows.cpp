#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

/* The embedded number panel (0x2E8); `shown` is the byte at 0x64. */
struct MenuSlider {
    u8 unk00[0x50];
    u32 sprite;
    s16 first;
    s16 second;
    s16 value;
    u8 unk5A[0xA];
    u8 shown;
};

/* A selection screen with a scrolling list and a number panel (observed fields). */
struct ListMenu {
    u32 flags;
    u8 unk04[0x23C];
    u8 holder[4];
    s32 rowCount;
    u8 unk248[0xA0];
    MenuSlider slider;
};

extern "C" {

void gxResetColorQuadToWhite(void);
void efctSetSpeed(f32 speed);
s32 renderCtxPackPassFlags(u32 kind, bool enabled);
void texDrawCompositeSprite(u32 screen, u32 table, u32 frame, s32 x, s32 y, u32 priority);
s32 FUN_0029e924(void *holder);
s32 flaggedEntryGetValueByState(void *holder);
s32 flaggedValueHolderGetTotal(void *holder);
void FUN_003909d0(ListMenu *menu, s32 row, s32 value, bool selected);
void FUN_002332e8(MenuSlider *panel, s32 first, s32 second);
void uiDrawListScrollBar(u32 object, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j,
    s32 x, s32 y, s32 z, u32 priority, u32 last);

void renderCtxResetColorScale(RenderCtx *context);
s32 numberPanelGetValue(MenuSlider *panel);
s32 numberPanelGetFirst(MenuSlider *panel);
s32 numberPanelGetSecond(MenuSlider *panel);
}

/* Draws the number panel's digits (or blanks when it is hidden) at `priority`. */
static __inline void numberPanelDraw(MenuSlider *panel, u32 priority)
{
    s32 a = numberPanelGetValue(panel);
    s32 b = numberPanelGetFirst(panel);
    s32 c = numberPanelGetSecond(panel);
    if (!panel->shown) {
        a = -1;
        b = -1;
        c = -1;
    }
    uiDrawListScrollBar(panel->sprite, 0, 0, 0x3A, 0x4B, 0x4C, 0x4D, 0x47, 0x49, 0x48, 0x4A, a, b, c, priority, 0);
}

/* Draw the list menu's rows and slider unless the menu is hidden. */
extern "C" void aocListMenuDrawRows(ListMenu *menu)
{
    if ((menu->flags & 0x10000) != 0)
        return;
    renderCtxSelectStereoLayout(g_titleScene);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, false));
    texDrawCompositeSprite(2, 0x3A, 7, 0, 0, 0x81);
    s32 first = FUN_0029e924(menu->holder);
    flaggedEntryGetValueByState(menu->holder);
    s32 rows = menu->rowCount;
    for (s32 row = 0; row < rows; row++) {
        bool selected = false;
        if (flaggedValueHolderGetTotal(menu->holder) == first + row)
            selected = true;
        FUN_003909d0(menu, row, first + row, selected);
    }
    s32 last = flaggedEntryGetValueByState(menu->holder);
    FUN_002332e8(&menu->slider, FUN_0029e924(menu->holder), last);
    numberPanelDraw(&menu->slider, 0x81);
    renderStackPop(&g_titleScene->stackA);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
}
