/* NON_MATCHING: stack-push address scheduling, commutative X addition, text-call argument loads and zero-return epilogue ordering differ. */
#include "camp/RenderCtx.h"

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
void FUN_002c39a4(RenderCtx *context);
u32 FUN_002c5d80(u32 slot, u32 flags);
s32 vec2GetXInt(const PlaceWindowPosition *position);
s32 vec2GetYInt(const PlaceWindowPosition *position);
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 scale);
void FUN_002bf380(s32 layer, u32 group, u32 frame, s32 x, s32 y, s32 flags);
PlaceWindowFrame *FUN_002bf4f8(u32 group, u32 frame);
void FUN_002be5a4(s32 layer, u32 color, const char *text, f32 x, f32 y, f32 scale, f32 offset, f32 opacity);
void FUN_002bed3c(void);
void efctSetSpeed(f32 speed);

u32 placeWindowDrawLabel(void)
{
    PlaceWindowWork *window = g_placeWin;
    if (!window->ready || !window->visible) {
        return 0;
    }
    FUN_002c39a4(g_titleScene);
    RenderCtx *context = g_titleScene;
    u32 state = FUN_002c5d80(1, 0);
    renderCtxPushA(context, state);
    s32 x = vec2GetXInt(&window->position);
    x += static_cast<s32>(renderCtxCalculateStereoParallax(g_titleScene, 0.27f));
    s32 y = vec2GetYInt(&window->position);
    FUN_002bf380(2, 0xe, 0xe, x, y, 0x65);
    PlaceWindowFrame *frame = FUN_002bf4f8(0xe, 0x10b);
    FUN_002be5a4(3, 0xffffffff, window->text,
        static_cast<f32>(frame->offsetX + x), static_cast<f32>(frame->offsetY + y),
        0.56640625f, 0.0f, 1.0f);
    FUN_002bed3c();
    efctSetSpeed(1.0f);
    renderStackPop(&g_titleScene->stackA);
    return 0;
}
}
