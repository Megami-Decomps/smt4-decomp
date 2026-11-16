/* NON_MATCHING: x is now one expression (offset + parallax) and the text position adds the frame offset second, like retail; remaining: the text call loads its color/depth constants in a different order and the zero return is materialised before the stack restore. */
#include "camp/RenderCtx.h"
#include "text/TextDraw.h"

struct PlaceWindowPosition {
    u8 unk00[0xc];
    s32 x; /* 20.12 fixed point */
    s32 y;
};
struct PlaceWindowWork {
    u8 unk00[8];
    u32 ready;
    u8 unk0c[4];
    u8 visible;
    u8 unk11[0x23];
    PlaceWindowPosition position;
    u8 unk48[0x78];
    char text[1];
};
struct PlaceWindowFrame {
    u8 unk00[8];
    s16 offsetX;
    s16 offsetY;
};

extern "C" {
extern PlaceWindowWork *g_placeWin;
extern RenderCtx *g_titleScene;
void renderCtxSelectStereoLayout(RenderCtx *context);
u32 renderCtxPackPassFlags(u32 slot, u32 flags);
s32 vec2GetXInt(const PlaceWindowPosition *position);
s32 vec2GetYInt(const PlaceWindowPosition *position);
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 scale);
void texDrawCompositeSprite(s32 layer, u32 group, u32 frame, s32 x, s32 y, s32 flags);
PlaceWindowFrame *asdTMTexTableEntryAt(u32 group, u32 frame);
void gxResetColorQuadToWhite(void);
void efctSetSpeed(f32 speed);

u32 placeWindowDrawLabel(void)
{
    PlaceWindowWork *window = g_placeWin;
    if (!window->ready || !window->visible) {
        return 0;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    RenderCtx *context = g_titleScene;
    u32 state = renderCtxPackPassFlags(1, 0);
    renderCtxPushA(context, state);
    s32 x = vec2GetXInt(&window->position) + static_cast<s32>(renderCtxCalculateStereoParallax(g_titleScene, 0.27f));
    s32 y = vec2GetYInt(&window->position);
    texDrawCompositeSprite(2, 0xe, 0xe, x, y, 0x65);
    PlaceWindowFrame *frame = asdTMTexTableEntryAt(0xe, 0x10b);
    textDrawString(3, 0xffffffff, window->text,
        static_cast<f32>(x + frame->offsetX), static_cast<f32>(y + frame->offsetY),
        0.56640625f, 0.0f, 1.0f);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderStackPop(&g_titleScene->stackA);
    return 0;
}
}
