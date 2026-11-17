#include "ui/UiSpriteApi.h"
#include "frame_tex/FrameTex.h"

extern "C" {

// Builds the padded 400-by-240 overlay quad and publishes its rendering parameters.
void FUN_001dd1e0(u32 first, u32 second, u8 option, u32 param, f32 horizontalPadding, f32 verticalPadding)
{
    f32 left = -horizontalPadding;
    f32 top = -verticalPadding;
    f32 right = horizontalPadding + 400.0f;
    f32 bottom = verticalPadding + 240.0f;
    f32 initialValue = 0.0f;
    FrameTexWork* work = g_frameTex;
    work->zan.x[0] = left;
    work->zan.x[1] = right;
    work->zan.x[2] = left;
    work->zan.x[3] = right;
    work->zan.y[0] = top;
    work->zan.y[1] = top;
    work->zan.y[2] = bottom;
    work->zan.y[3] = bottom;
    work->zan.color = second;
    work->zan.depth = initialValue;
    work->zan.filtered = option;
    work->zan.levels = param;
    work->zan.blendMode = first;
    work->zan.ready = 1;
}
}
