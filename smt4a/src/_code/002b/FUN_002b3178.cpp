/* NON_MATCHING: The angle is retained across trig calls, render-state push address scheduling and saved float registers differ. */
#include "camp/RenderCtx.h"

struct RadialGradientWork {
    u8 unk00[0xC];
    union {
        u32 packed;
        struct { u8 r, g, b, a; } channels;
    } color;
    u32 unk10;
    f32 firstX, firstY;
    f32 lastX, lastY;
};
extern "C" {
extern RenderCtxA *g_renderCtx;
void FUN_0016c4b8(RenderCtxA *context, s32 mode);
s32 FUN_001692ac(s32 first, s32 second);
void FUN_00186940(void);
f32 FUN_001b63b0(f32 angle);
f32 FUN_001a1ee0(f32 angle);
void effectSpawnPositionDefault(u32 color, f32 x, f32 y, f32 z);
void FUN_002371b0(void);

/* Draws a colored center and an eighteen-segment transparent rim under a temporary render state. */
void FUN_002b3178(RadialGradientWork *work)
{
    u32 packed = work->color.packed;
    u8 alpha = work->color.channels.a;
    u32 color = (packed << 24) | (((packed >> 8) & 0xFF) << 16) |
                (((packed >> 16) & 0xFF) << 8) | alpha;
    u32 rimColor = color & ~0xFF;
    FUN_0016c4b8(g_renderCtx, 0);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, FUN_001692ac(1, 0));
    f32 width = work->lastX - work->firstX;
    f32 height = work->lastY - work->firstY;
    f32 centerX = work->firstX + width * 0.5f;
    f32 centerY = work->firstY + height * 0.5f;
    f32 radius = width * 0.5f;
    FUN_00186940();
    effectSpawnPositionDefault(color, centerX, centerY, 0.0f);
    for (s32 vertex = 0; vertex < 19; ++vertex) {
        f32 angle = (f32)vertex * 6.283185307179586f * (1.0f / 18.0f) * 40.7436654315252f;
        f32 x = centerX + radius * FUN_001b63b0(angle);
        f32 y = centerY + radius * FUN_001a1ee0(angle);
        effectSpawnPositionDefault(rimColor, x, y, 0.0f);
    }
    FUN_002371b0();
    renderStackPop(&g_renderCtx->stackA);
}
}
