#include "ui/UiSpriteApi.h"
#include "frame_tex/FrameTexA.h"

extern "C" {
void FUN_001536e4(FrameTexWorkA *);
void frameTexDrawCampTransition(s32);

/* "CAMPDL" draw: animates the CAMP panel toward its expanded or contracted scale and draws it. */
u8 panelUpdateAnimatedScale(u32 job)
{
    FrameTexWorkA *panel = (FrameTexWorkA *)jobGetWork(job);
    if (!panel->campEnabled)
        return 0;
    if (!panel->campCapturedLeft)
        return 0;
    if (panel->campActive) {
        if (!panel->campClosing) {
            if (panel->campWidthScale < 0.38f) {
                panel->campWidthScale = 0.13f / panel->campSpeed + panel->campWidthScale;
            }
            panel->campWidthScale = panel->campWidthScale <= 0.38f ? panel->campWidthScale : 0.38f;
            if (panel->campHeightScale < 0.36f) {
                panel->campHeightScale = 0.110000014f / panel->campSpeed + panel->campHeightScale;
            }
            panel->campHeightScale = panel->campHeightScale > 0.36f ? 0.36f : panel->campHeightScale;
            FUN_001536e4(panel);
        } else {
            ++panel->campFrame;
            if (panel->campWidthScale > 0.25f) {
                panel->campWidthScale -= 0.13f / panel->campSpeed;
            }
            panel->campWidthScale = panel->campWidthScale > 0.25f ? panel->campWidthScale : 0.25f;
            if (panel->campHeightScale > 0.25f) {
                panel->campHeightScale -= 0.110000014f / panel->campSpeed;
            }
            panel->campHeightScale = panel->campHeightScale > 0.25f ? panel->campHeightScale : 0.25f;
            for (s32 i = 0; i < 24; ++i)
                uiSpriteAdvanceAnimation(&panel->campItems[i], 1.0f);
            uiSpriteAdvanceAnimation(&panel->campWidgets[2], 1.0f);
            uiSpriteAdvanceAnimation(&panel->campWidgets[3], 1.0f);
            if (uiSpriteGetCompletionState(&panel->campWidgets[3]))
                uiSpriteAdvanceAnimation(&panel->campWidgets[0], 1.0f);
        }
        frameTexDrawCampTransition(1);
    }
    return 0;
}
} /* extern "C" */
