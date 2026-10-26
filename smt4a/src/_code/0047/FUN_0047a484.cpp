/* NON_MATCHING: render-stack push schedules its second address add earlier and the last call's 0x81 is rematerialised in r7 instead of reusing fp. */
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "Model/MoriModelShadowMap.h"
#include "code/Code002a.h"

extern "C" {
void FUN_00183bb0(void);
void efctSetSpeed(f32 speed);
s32 FUN_001692ac(u32 kind, bool enabled);
void FUN_00164b5c(u32 screen, u32 table, u32 frame, s32 x, s32 y, u32 priority);
s32 FUN_0031d174(void *holder);
s32 flaggedValueHolderGetTotal(void *holder);
void FUN_00479b6c(void *menu, s32 row, s32 value, bool selected);
void size40Set(void *object, s32 first, s32 second);
void FUN_00344cd0(u32 object, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j,
    s32 x, s32 y, s32 z, u32 priority, u32 last);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);
}

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

extern "C" {
s32 numberPanelGetValue(MenuSlider *panel);
s32 numberPanelGetFirst(MenuSlider *panel);
s32 numberPanelGetSecond(MenuSlider *panel);
}

struct ListMenu {
    u32 flags;
    u8 unk04[0x23C];
    u8 holder[4];
    s32 rowCount;
    u8 unk248[0xA0];
    MenuSlider slider;
};

/* Draw the list menu's rows and slider unless the menu is hidden. */
extern "C" void FUN_0047a484(ListMenu *menu)
{
    if ((menu->flags & 0x10000) != 0)
        return;
    FUN_00157558(g_renderCtx);
    FUN_00183bb0();
    efctSetSpeed(1.0f);
    renderCtxPushA(g_renderCtx, FUN_001692ac(1, false));
    FUN_00164b5c(2, 0x2F, 7, 0, 0, 0x81);
    s32 first = FUN_002a482c(menu->holder);
    FUN_0031d174(menu->holder);
    s32 rows = menu->rowCount;
    for (s32 row = 0; row < rows; row++) {
        bool selected = false;
        if (flaggedValueHolderGetTotal(menu->holder) == first + row)
            selected = true;
        FUN_00479b6c(menu, row, first + row, selected);
    }
    FUN_001835b4(2, 0x2F, 0x51, 0, 0, 0x81);
    s32 last = FUN_0031d174(menu->holder);
    size40Set(&menu->slider, FUN_002a482c(menu->holder), last);
    MenuSlider *panel = &menu->slider;
    s32 a = numberPanelGetValue(panel);
    s32 b = numberPanelGetFirst(panel);
    s32 c = numberPanelGetSecond(panel);
    if (!panel->shown) {
        a = -1;
        b = -1;
        c = -1;
    }
    FUN_00344cd0(panel->sprite, 0, 0, 0x2F, 0x4B, 0x4C, 0x4D, 0x47, 0x49, 0x48, 0x4A, a, b, c, 0x81, 0);
    renderStackPop(&g_renderCtx->stackA);
    FUN_00183bb0();
    efctSetSpeed(1.0f);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}
