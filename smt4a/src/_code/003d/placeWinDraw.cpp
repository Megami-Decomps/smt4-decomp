/* NON_MATCHING: stack-address evaluation order now matches retail (renderCtxPush wrappers); 12 diff lines remain, scheduling/register allocation only. */
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"

struct PlaceWindowPosition {
    f32 x, y;
};

struct PlaceWindowSpritePosition {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x, y;
};

struct PlaceWindow {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 state;
    /* 0x0c */ u8 unk0c[4];
    /* 0x10 */ u8 visible;
    /* 0x11 */ u8 unk11[0x23];
    /* 0x34 */ PlaceWindowPosition position;
    /* 0x3c */ u8 unk3c[0x84];
    /* 0xc0 */ u8 text[1];
};

extern "C" {
extern PlaceWindow *g_placeWin;
s32 FUN_001692ac(s32 mode, s32 flags);
s32 vec2GetXInt(const PlaceWindowPosition *);
s32 vec2GetYInt(const PlaceWindowPosition *);
f32 renderCtxCalculateStereoParallax(RenderCtxA *, f32 offset);
void FUN_00164b5c(s32 layer, u32 group, u32 sprite, s32 x, s32 y, s32 priority);
PlaceWindowSpritePosition *FUN_001834a4(u32 group, u32 sprite);
void FUN_00162790(s32 layer, u32 color, const void *text, f32 x, f32 y,
                  f32 parameter, f32 offset, f32 speed);
void FUN_00183bb0(void);
void efctSetSpeed(f32 speed);

// Draw the active place-name window at its animated position.
u8 placeWinDraw(void)
{
    PlaceWindow *window = g_placeWin;
    if (window->state && window->visible) {
        FUN_00157558(g_renderCtx);
        RenderCtxA *context = g_renderCtx;
        renderCtxPushA(context, FUN_001692ac(1, 0));
        s32 x = vec2GetXInt(&window->position);
        s32 translatedX = x + static_cast<s32>(renderCtxCalculateStereoParallax(g_renderCtx, 0.25f));
        s32 y = vec2GetYInt(&window->position);
        FUN_00164b5c(2, 8, 0xe, translatedX, y, 0x65);
        PlaceWindowSpritePosition *sprite = FUN_001834a4(8, 0x10b);
        FUN_00162790(3, 0xffffffff, window->text,
                      static_cast<f32>(sprite->x + translatedX),
                      static_cast<f32>(sprite->y + y), 0.56640625f, 0.0f, 1.0f);
        FUN_00183bb0();
        efctSetSpeed(1.0f);
        renderStackPop(&g_renderCtx->stackA);
    }
    return 0;
}
}
