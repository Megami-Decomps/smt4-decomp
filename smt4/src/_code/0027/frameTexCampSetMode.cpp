#include "frame_tex/FrameTex.h"
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "font/ComWin/ComWin.h"

extern "C" {
void rangeSelectionSelectEndpoint(UiSpriteState *sprite, s32 key, s32 mode);
void uiStoreTextureEntryCenter(UiSpriteState *sprite, s32 group, s32 image);
void soundPlaySeUnpanned(u32 sound);

// Reset, open or close the CAMP frame-texture transition and initialize its 24 animated tiles.
void frameTexCampSetMode(s32 mode)
{
    switch (mode) {
    case 0: {
        FrameTexWork *work = g_frameTex;
        work->campActive = 0;
        work->campFrame = 0;
        work->campClosing = 0;
        work->campWidthScale = 0.25f;
        work->campHeightScale = 0.25f;
        work->campSpeed = 20.0f;
        work->campEnabled = 0;
        work->campCapturedLeft = 0;
        work->campCapturedRight = 0;
        break;
    }
    case 1: {
        FrameTexWork *work = g_frameTex;
        work->campActive = 1;
        work->campFrame = 0;
        work->campClosing = 0;
        work->campWidthScale = 0.25f;
        work->campHeightScale = 0.25f;
        work->campSpeed = 20.0f;
        work->value = 1;
        uiSpriteStateInitFromSource(&work->campFrameWidget, 0x1D, 2000, &work->campResources, 0xB, 1.0f);
        uiSpriteSetImageKeyframe(&work->campFrameWidget, 0, 0);
        uiSpriteStateInitFromSource(&work->campCloseWidget, 0x1D, 2000, &work->campResources, 0xB, 1.0f);
        spriteStartAnimationByIndex(&work->campCloseWidget, 0);
        s8 tileKinds[24] = {0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0,
                            0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0};
        for (s32 index = 0; index < 24; ++index) {
            uiSpriteStateInitFromSource((&work->campItems[index]), 0x1D, tileKinds[index] + 0x7D1, &work->campResources, 0xB, 1.0f);
            rangeSelectionSelectEndpoint((&work->campItems[index]), 0, 0);
            uiStoreTextureEntryCenter((&work->campItems[index]), 0x1D, index + 0x7D5);
        }
        break;
    }
    case 2: {
        FrameTexWork *work = g_frameTex;
        soundPlaySeUnpanned(0x100025B);
        work->campFrame = 0;
        work->campClosing = 1;
        work->campSpeed = 7.0f;
        uiSpriteSetImageKeyframe(&work->campFrameWidget, 0, 1);
        break;
    }
    }
}
}
