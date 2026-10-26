/* NON_MATCHING: float constants, UV division scheduling and quad-argument register reuse differ; 64 built versus 68 retail rows. */
#include "ui/FrameTex.h"
#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {
extern FrameWork *g_frameTex;
extern RenderCtx *g_titleScene;
void FUN_002ba1e0(u32 color0, u32 color1, u32 color2, u32 color3,
    f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1,
    f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3,
    f32 u0, f32 v0, f32 u1, f32 v1, f32 u2, f32 v2, f32 u3, f32 v3);

void FUN_001132fc(s32 alternate)
{
    FrameWork *work = g_frameTex;
    u32 color = work->color;
    f32 textureExtent = work->useStandardTextureExtent ? 240.0f : 480.0f;
    AsdTexture *surface;
    if (alternate == 0 && work->unkF9D) {
        surface = reinterpret_cast<AsdTexture *>(work->surface);
    } else {
        surface = static_cast<AsdTexture *>(work->bufferA);
    }
    surface->filterX = 1;
    surface->filterY = 1;
    f32 u = textureExtent / static_cast<f32>(surface->dimensions.width);
    f32 v = 400.0f / static_cast<f32>(surface->dimensions.height);
    renderCtxSelectTexture(g_titleScene, surface);
    FUN_002ba1e0(color, color, color, color,
        0.0f, 0.0f, 0.0f, 400.0f, 0.0f, 0.0f,
        0.0f, 240.0f, 0.0f, 400.0f, 240.0f, 0.0f,
        u, 0.0f, u, v, 0.0f, 0.0f, 0.0f, v);
}
}
