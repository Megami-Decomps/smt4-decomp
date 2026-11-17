// Mirror the viewport origin and clip negative mirrored bounds before applying the scissor.
#include "common.h"
#include "camp/RenderCtxA.h"
#include "gfx/ScissorCoordinates.h"

extern "C" {
void gxSetMirroredClippedScissor(s32 x, s32 y, u32 width, s32 height,
                  s32 useNarrowScreen)
{
    u32 screenWidth = 320u;
    if (useNarrowScreen == 0)
        screenWidth = 400u;
    u32 left = screenWidth - (static_cast<u32>(x) + width);
    u32 top = 240u - static_cast<u32>(height) - static_cast<u32>(y);
    u32 clippedWidth = width;
    u32 clippedHeight = static_cast<u32>(height);

    if (static_cast<s32>(left) < 0) {
        clippedWidth += left;
        if (static_cast<s32>(clippedWidth) < 0)
            clippedWidth = 0;
        left = 0;
    }
    if (static_cast<s32>(top) < 0) {
        clippedHeight += top;
        if (static_cast<s32>(clippedHeight) < 0)
            clippedHeight = 0;
        top = 0;
    }

    {
      RenderCtxA *scene = g_renderCtx;
      u32 packed = packScissorCoordinates(left, top);
      renderStackSet(&scene->scissorMinimum, static_cast<s32>(packed));
    }
    // The first state callback may replace the global scene.
    {
      RenderCtxA *scene = g_renderCtx;
      u32 packed = packScissorCoordinates(clippedWidth, clippedHeight);
      renderStackSet(&scene->scissorMaximum, static_cast<s32>(packed));
    }
}
}
