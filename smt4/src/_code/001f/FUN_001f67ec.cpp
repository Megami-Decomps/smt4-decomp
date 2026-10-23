/* NON_MATCHING: shared angular phase uses one extra VFP register; descriptor and render-stack push scheduling differ. */
#include "camp/RenderCtx.h"
#include "shard/Shard0036.h"

struct TitleRadialGradient {
    u8 prefix[0xC];
    RgbaWord color;
    u8 unk10[4];
    f32 firstX, firstY;
    f32 lastX, lastY;
};
typedef char TitleRadialGradientOffsets[offsetof(TitleRadialGradient, color) == 0xC &&
    offsetof(TitleRadialGradient, firstX) == 0x14 && offsetof(TitleRadialGradient, lastX) == 0x1C ? 1 : -1];

extern "C" {
extern RenderCtx *g_titleScene;
void FUN_002c1b64(RenderCtx *, u32);
s32 FUN_002c5d80(u32, u32);
void FUN_002573d8(void);
void effectSpawnPositionDefault(RgbaWord, f32, f32, f32);
f32 phaseCosInterpolate(f32);
f32 FUN_002b70cc(f32);
void forwardRecoveredCallback(void);

void FUN_001f67ec(const TitleRadialGradient *gradient)
{
    RgbaWord centerColor;
    centerColor.word = (__rev(gradient->color.word) & ~0xFFu) | gradient->color.rgba.a;
    RgbaWord edgeColor;
    edgeColor.word = centerColor.word & ~0xFFu;
    FUN_002c1b64(g_titleScene, 0);
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, FUN_002c5d80(1, 0));
    f32 centerX = gradient->firstX + (gradient->lastX - gradient->firstX) * 0.5f;
    f32 centerY = gradient->firstY + (gradient->lastY - gradient->firstY) * 0.5f;
    f32 radius = (gradient->lastX - gradient->firstX) * 0.5f;
    FUN_002573d8();
    effectSpawnPositionDefault(centerColor, centerX, centerY, 0.0f);
    for (s32 i = 0; i < 19; ++i) {
        f32 phase = static_cast<f32>(i) * 6.2831855f * (1.0f / 18.0f) * 40.743664f;
        f32 x = centerX + radius * phaseCosInterpolate(phase);
        f32 y = centerY + radius * FUN_002b70cc(phase);
        effectSpawnPositionDefault(edgeColor, x, y, 0.0f);
    }
    forwardRecoveredCallback();
    renderStackPop(&g_titleScene->stackA);
}
}
