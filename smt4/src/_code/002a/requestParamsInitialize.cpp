#include "gfx/TextureDrawRequest.h"

/* Sets the base draw flags, position and transparency, with no size or transparency overrides. */
extern "C" void requestParamsInitialize(TextureDrawRequest *request, u32 flags, s32 x, s32 y, u32 transparency)
{
    request->transparencyOverride = 0;
    request->sourceWidth = 0;
    request->sourceHeight = 0;
    request->horizontalRepeat = 1;
    request->verticalRepeat = 1;
    request->flags = flags;
    request->x = x;
    request->y = y;
    request->transparency = transparency;
}
