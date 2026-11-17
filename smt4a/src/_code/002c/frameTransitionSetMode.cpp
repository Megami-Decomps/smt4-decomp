/* NON_MATCHING: the 60-byte preset copy now matches retail (local struct copy: one vldmia/vstmia of 15 registers); retail keeps one preserved register and stack word fewer (r7 for the frame pointer global, 4-byte frame) than the build (r8, 8 bytes). */
#include "ui/UiSpriteApi.h"
#include "frame_tex/FrameTexA.h"

static __inline void frameTransitionPresetsCopy(const FrameTexTransitionPresets *source, FrameTexTransitionPresets *destination)
{
    FrameTexTransitionPresets value = *source;
    *destination = value;
}
extern "C" {
extern const FrameTexTransitionPresets g_frameTransitionDefaultPresets;
void sysPlayVoice(u32 sound);
void FUN_003b7b4c(FrameTexWorkA *work);

/* Resets (0), opens (1) or closes (2) the CAMP transition. */
void frameTransitionSetMode(s32 mode)
{
    FrameTexWorkA *work = g_frameTex;
    switch (mode) {
    case 0:
        work->campActive = 0;
        work->campFrame = 0;
        work->campClosing = 0;
        work->campWidthScale = 0.25f;
        work->campHeightScale = 0.25f;
        work->campSpeed = 20.0f;
        work->campEnabled = 0;
        work->campCapturedLeft = 0;
        work->campCapturedRight = 0;
        return;
    case 1:
        sysPlayVoice(0x10000be);
        work->campActive = 1;
        work->campFrame = 0;
        work->campClosing = 0;
        work->campWidthScale = 0.25f;
        work->campHeightScale = 0.25f;
        work->campSpeed = 20.0f;
        g_frameTex->value = 1;
        uiSpriteStateInitFromSource(&work->campWidgets[0], 20, 2000, &work->campResources, 11, 1.0f);
        uiSpriteSetImageKeyframe(&work->campWidgets[0], 0, 0);
        frameTransitionPresetsCopy(&g_frameTransitionDefaultPresets, &work->transitionPresets);
        FUN_003b7b4c(work);
        uiSpriteStateInitFromSource(&work->campWidgets[2], 20, 2000, &work->campResources, 11, 1.0f);
        uiSpriteSetImageKeyframe(&work->campWidgets[2], 2, 0);
        uiSpriteStateInitFromSource(&work->campWidgets[3], 20, 2000, &work->campResources, 11, 1.0f);
        uiSpriteSetImageKeyframe(&work->campWidgets[3], 1, 0);
        return;
    case 2:
        sysPlayVoice(0x10000bf);
        work->campFrame = 0;
        work->campClosing = 1;
        work->campSpeed = 7.0f;
        uiSpriteSetImageKeyframe(&work->campWidgets[3], 0, 1);
        uiSpriteSetImageKeyframe(&work->campWidgets[2], 0, 1);
        uiSpriteSetImageKeyframe(&work->campWidgets[0], 0, 1);
        return;
    }
}
}
