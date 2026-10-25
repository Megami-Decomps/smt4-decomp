/* NON_MATCHING: readable rebuild from asm of a state scene's draw (a tiled panel, its sprite table and the current state's handler); armcc here orders the render-state pushes and the float stereo offsets differently, and keeps the x offset and loop counters in other registers. */
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"


struct LayoutPoint {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

/* One sprite of the panel table (12 bytes). */
struct PanelSprite {
    s32 point;
    s32 sprite;
    f32 alpha;
};

class StateScene;
typedef void (StateScene::*StateHandler)();

/* A scene whose current state selects the handler called after drawing. */
class StateScene {
public:
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 state;
    /* 0x08 */ u8 unk08[0xB0];
    /* 0xB8 */ StateHandler handlers[8];
};

extern "C" {
extern RenderCtxA *g_renderCtx;
extern PanelSprite DAT_00526314[24];

void FUN_00183bb0(void);
void efctSetSpeed(f32 speed);
void FUN_00157558(RenderCtxA *ctx);
u32 FUN_001692ac(s32 a, s32 b);
s32 packNibblesAndByte(u32 a, u32 b, u32 c);
f32 renderCtxCalculateStereoParallax(RenderCtxA *ctx, f32 depth);
s32 textureGetIndexedResource(s32 index);
LayoutPoint *FUN_001834a4(s32 group, s32 part);
void skinObjectUpdateMatrices(RenderCtxA *ctx);
void renderCtxResetColorScale(RenderCtxA *ctx);

/* Draws the panel (tiled background, its sprite table and the edge sprites) inside two render
 * states, then calls the handler of the scene's current state. */
void FUN_0047c00c(StateScene *scene)
{
    if (scene->state <= 0)
        return;
    FUN_00183bb0();
    efctSetSpeed(1.0f);
    FUN_00157558(g_renderCtx);
    RenderCtxA *first = g_renderCtx;
    u32 firstState = FUN_001692ac(1, 0);
    renderStackPushCountedDirect(&first->stackA, firstState);
    RenderCtxA *second = g_renderCtx;
    s32 secondState = packNibblesAndByte(6, 7, 0);
    renderCtxPushB(second, secondState);
    renderCtxCalculateStereoParallax(g_renderCtx, 0.38f);
    s32 x = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.36f);
    if (textureGetIndexedResource(0x2F) != 0) {
        FUN_001835b4(2, 0x2F, 0x7A, x, 0, 11);
        FUN_001835b4(2, 0x2F, 0x7B, x, 0, 11);
    }
    for (s32 i = 0; i < 24; i++) {
        if (DAT_00526314[i].sprite >= 0) {
            efctSetSpeed(DAT_00526314[i].alpha);
            LayoutPoint *point = FUN_001834a4(20, DAT_00526314[i].point);
            FUN_001835b4(2, 20, DAT_00526314[i].sprite, point->x + x, point->y, 11);
        }
    }
    efctSetSpeed(1.0f);
    for (s32 row = 0; row < 9; row++) {
        for (s32 column = 0; column < 13; column++)
            FUN_001835b4(2, 20, 0x7F2, x + column * 32, row * 32, 11);
    }
    for (s32 i = 0; i < 11; i++)
        FUN_001835b4(2, 20, 0x7F4 + i, x, 0, 16);
    renderStackPop(&g_renderCtx->stackB);
    renderStackPop(&g_renderCtx->stackA);
    FUN_00183bb0();
    efctSetSpeed(1.0f);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    if (scene->handlers[scene->state])
        (scene->*scene->handlers[scene->state])();
}

} /* extern "C" */
