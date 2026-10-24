/* NON_MATCHING: only the VFP constant registers differ (retail loads 400,240,0 into s6,s5,s4). */
#include "ui/FrameTex.h"

extern "C" {
extern FrameWorkA* g_frameTex;

// Builds the padded 400-by-240 overlay quad and publishes its rendering parameters.
void FUN_00283cf4(u32 first, u32 second, u8 option, u32 param, f32 horizontalPadding, f32 verticalPadding)
{
    FrameWorkA* work = g_frameTex;
    work->overlayX[0] = -horizontalPadding;
    work->overlayX[1] = horizontalPadding + 400.0f;
    work->overlayX[2] = -horizontalPadding;
    work->overlayX[3] = horizontalPadding + 400.0f;
    work->overlayY[0] = -verticalPadding;
    work->overlayY[1] = -verticalPadding;
    work->overlayY[2] = verticalPadding + 240.0f;
    work->overlayY[3] = verticalPadding + 240.0f;
    work->overlayResource = second;
    work->overlayValue = 0.0f;
    work->overlayOption = option;
    work->overlayParam = param;
    work->overlayFirst = first;
    work->overlayActive = 1;
}
}
