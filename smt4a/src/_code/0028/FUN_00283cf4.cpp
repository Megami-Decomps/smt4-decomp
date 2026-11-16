#include "ui/FrameTex.h"

extern "C" {
extern FrameWorkA* g_frameTex;

// Builds the padded 400-by-240 overlay quad and publishes its rendering parameters.
void FUN_00283cf4(u32 first, u32 second, u8 option, u32 param, f32 horizontalPadding, f32 verticalPadding)
{
    f32 left = -horizontalPadding;
    f32 top = -verticalPadding;
    f32 right = horizontalPadding + 400.0f;
    f32 bottom = verticalPadding + 240.0f;
    f32 initialValue = 0.0f;
    FrameWorkA* work = g_frameTex;
    work->overlayX[0] = left;
    work->overlayX[1] = right;
    work->overlayX[2] = left;
    work->overlayX[3] = right;
    work->overlayY[0] = top;
    work->overlayY[1] = top;
    work->overlayY[2] = bottom;
    work->overlayY[3] = bottom;
    work->overlayResource = second;
    work->overlayValue = initialValue;
    work->overlayOption = option;
    work->overlayParam = param;
    work->overlayFirst = first;
    work->overlayActive = 1;
}
}
