/* NON_MATCHING: horizontal-extent constant uses s3 instead of s6, and zero/global literal ordering differs; named rectangle bounds recover the remaining VFP constants. */
#include "ui/FrameTex.h"

extern "C" {
extern FrameWorkA* g_frameTex;

// Builds the padded 400-by-240 overlay quad and publishes its rendering parameters.
void FUN_00283cf4(u32 first, u32 second, u8 option, u32 param, f32 horizontalPadding, f32 verticalPadding)
{
    FrameWorkA* work = g_frameTex;
    f32 left = -horizontalPadding;
    f32 right = horizontalPadding + 400.0f;
    f32 top = -verticalPadding;
    f32 bottom = verticalPadding + 240.0f;
    work->overlayX[0] = left;
    work->overlayX[1] = right;
    work->overlayX[2] = left;
    work->overlayX[3] = right;
    work->overlayY[0] = top;
    work->overlayY[1] = top;
    work->overlayY[2] = bottom;
    work->overlayY[3] = bottom;
    work->overlayResource = second;
    work->overlayValue = 0.0f;
    work->overlayOption = option;
    work->overlayParam = param;
    work->overlayFirst = first;
    work->overlayActive = 1;
}
}
