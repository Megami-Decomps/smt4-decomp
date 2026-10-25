/* NON_MATCHING: grouped FloatPoint corners reproduce all retail VFP registers; only the zero/global literal-pool order differs. */
#include "ui/FrameTex.h"
#include "shard/W5_W5Match2_ScalarArguments.h"

extern "C" {
extern FrameWork* g_frameTex;

// Builds the padded 400-by-240 overlay quad and publishes its rendering parameters.
void FUN_001dd1e0(u32 first, u32 second, u8 option, u32 param, f32 horizontalPadding, f32 verticalPadding)
{
    FloatPoint minimum = {-horizontalPadding, -verticalPadding};
    FloatPoint maximum = {horizontalPadding + 400.0f, verticalPadding + 240.0f};
    FrameWork* work = g_frameTex;
    work->overlayX[0] = minimum.x;
    work->overlayX[1] = maximum.x;
    work->overlayX[2] = minimum.x;
    work->overlayX[3] = maximum.x;
    work->overlayY[0] = minimum.y;
    work->overlayY[1] = minimum.y;
    work->overlayY[2] = maximum.y;
    work->overlayY[3] = maximum.y;
    work->overlayResource = second;
    work->overlayValue = 0.0f;
    work->overlayOption = option;
    work->overlayParam = param;
    work->overlayFirst = first;
    work->overlayActive = 1;
}
}
