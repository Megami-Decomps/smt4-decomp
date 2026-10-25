/* NON_MATCHING: the 0.0f spawn depth is loaded into s23 at the top in retail (here after FUN_002573d8), the colour word/alpha loads use different registers, and the pool loads of the angle constants are ordered differently. */
#include "camp/RenderCtx.h"
#include "shard/Shard0036.h"

struct TitleGradientPoint {
    f32 x, y;
};
struct TitleGradientBlock {
    RgbaWord color;
    u8 unk04[4];
    TitleGradientPoint first;
    TitleGradientPoint last;
};
struct TitleRadialGradient {
    u8 prefix[0xC];
    TitleGradientBlock block;
};
typedef char TitleRadialGradientOffsets[offsetof(TitleRadialGradient, block) == 0xC &&
    offsetof(TitleGradientBlock, first) == 8 && offsetof(TitleGradientBlock, last) == 0x10 ? 1 : -1];

extern "C" {
extern RenderCtx *g_titleScene;
void FUN_002c1b64(RenderCtx *, u32);
s32 FUN_002c5d80(u32, u32);
void FUN_002573d8(void);
void effectSpawnPositionDefault(RgbaWord, f32, f32, f32);
f32 phaseCosInterpolate(f32);
f32 FUN_002b70cc(f32);
void forwardRecoveredCallback(void);

/* Angle of the i-th of the 19 points on the ring (a full turn in 18 steps, in the interpolation tables' units). */
static __inline f32 titleRingPhase(s32 i)
{
    return static_cast<f32>(i) * 6.2831855f * (1.0f / 18.0f) * 40.743664f;
}

/* The gradient colour with its stored byte order swapped, alpha byte kept as stored. */
static __inline u32 titleGradientColorWord(const RgbaWord *color)
{
    return (__rev(color->word) & ~0xFFu) | color->rgba.a;
}

void FUN_001f67ec(const TitleRadialGradient *gradient)
{
    const TitleGradientBlock *block = &gradient->block;
    RgbaWord centerColor;
    centerColor.word = titleGradientColorWord(&block->color);
    RgbaWord edgeColor;
    edgeColor.word = centerColor.word & ~0xFFu;
    FUN_002c1b64(g_titleScene, 0);
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, FUN_002c5d80(1, 0));
    f32 centerX = block->first.x + (block->last.x - block->first.x) * 0.5f;
    f32 centerY = block->first.y + (block->last.y - block->first.y) * 0.5f;
    f32 radius = (block->last.x - block->first.x) * 0.5f;
    FUN_002573d8();
    effectSpawnPositionDefault(centerColor, centerX, centerY, 0.0f);
    for (s32 i = 0; i < 19; ++i) {
        f32 x = centerX + radius * phaseCosInterpolate(titleRingPhase(i));
        f32 y = centerY + radius * FUN_002b70cc(titleRingPhase(i));
        effectSpawnPositionDefault(edgeColor, x, y, 0.0f);
    }
    forwardRecoveredCallback();
    renderStackPop(&g_titleScene->stackA);
}
}
