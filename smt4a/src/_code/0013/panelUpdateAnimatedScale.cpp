/* NON_MATCHING: scale arithmetic scheduling, short-circuit guards and visibility accessor differ; -O2 candidate. */
#include "ui/UiSpriteApi.h"
#include "frame_tex/FrameTexA.h"

static __inline s32 scaleBits(f32 scale)
{
    union { f32 value; s32 bits; } representation;
    representation.value = scale;
    return representation.bits;
}
// Positive IEEE-754 scales retain numeric order when compared as signed words.
static const s32 kContractedScaleBits = 0x3e800000;
static const s32 kExpandedXBits = 0x3ec28f5c;
static const s32 kExpandedYBits = 0x3eb851ec;

extern "C" {
void FUN_001536e4(FrameTexWorkA *);
void FUN_0014aa9c(s32);

// "CAMPDL" draw: animates the CAMP panel toward its expanded or contracted scale and draws it.
u8 panelUpdateAnimatedScale(u32 job)
{
    FrameTexWorkA *panel = (FrameTexWorkA *)jobGetWork(job);
    if (panel->campEnabled && panel->campCapturedLeft && panel->campActive) {
        if (panel->campClosing) {
            ++panel->campFrame;
            f32 x = panel->campWidthScale;
            if (scaleBits(x) > kContractedScaleBits) {
                x -= 0.13f / panel->campSpeed;
                panel->campWidthScale = x;
            }
            if (scaleBits(x) > kContractedScaleBits) {
                panel->campWidthScale = x;
            } else {
                panel->campWidthScale = 0.25f;
            }
            f32 y = panel->campHeightScale;
            if (scaleBits(y) > kContractedScaleBits) {
                y -= 0.110000014f / panel->campSpeed;
                panel->campHeightScale = y;
            }
            if (scaleBits(y) > kContractedScaleBits) {
                panel->campHeightScale = y;
            } else {
                panel->campHeightScale = 0.25f;
            }
            for (s32 i = 0; i < 24; ++i)
                uiSpriteAdvanceAnimation(&panel->campItems[i], 1.0f);
            uiSpriteAdvanceAnimation(&panel->campWidgets[2], 1.0f);
            uiSpriteAdvanceAnimation(&panel->campWidgets[3], 1.0f);
            if (panel->campWidgets[3].finished)
                uiSpriteAdvanceAnimation(&panel->campWidgets[0], 1.0f);
        } else {
            f32 x = panel->campWidthScale;
            if (scaleBits(x) < kExpandedXBits) {
                x = 0.13f / panel->campSpeed + x;
                panel->campWidthScale = x;
            }
            if (scaleBits(x) <= kExpandedXBits) {
                panel->campWidthScale = x;
            } else {
                panel->campWidthScale = 0.38f;
            }
            f32 y = panel->campHeightScale;
            if (scaleBits(y) < kExpandedYBits) {
                y = 0.110000014f / panel->campSpeed + y;
                panel->campHeightScale = y;
            }
            if (scaleBits(y) > kExpandedYBits) {
                panel->campHeightScale = 0.36f;
            } else {
                panel->campHeightScale = y;
            }
            FUN_001536e4(panel);
        }
        FUN_0014aa9c(1);
    }
    return 0;
}
}
