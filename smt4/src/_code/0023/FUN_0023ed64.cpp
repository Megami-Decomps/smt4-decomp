/* NON_MATCHING: alpha/scale pair transfers, VFP constant registers, and phase-one branch placement differ. */
#include "ui/SplashAnimationState.h"

extern "C" {
void asdTMTexTableLoadTmx(s32 group, s32 option);
void asdTMTexTableLoadEntryAsync(s32 group, s32 index);
s32 asdTMTexTableNodeIsLoaded(u32 group, u32 index);
void asdTMTexTableReleaseNode(s32 group, s32 index);
void asdTMTexTableFreeEntry(s32 group);
s32 ifTouchRegionAdd(u16 x, u16 y, u16 width, u16 height);
void ifTouchRegionRemove(void);
s32 ifTouchGetSelectionMode(void);
s32 padIsButtonPressed(u32 button);
s32 bgmGetStateById(u32 sound);
void soundChannelRequestIfEnabled(u32 sound, u32 option, u32 fadeFrames);
void soundChannelStopAll(s32 channel);
s32 FUN_002c2a04(u32 slot);
void FUN_002a03d8(s32 slot, s32 frames);
void slotSetRequest(s32 slot, s32 group, s32 amount);

// Load the splash sprites, cycle their crossfade, and release them after dismissal.
s32 FUN_0023ed64(SplashAnimationState *state)
{
    if (state->phase == 0) {
        state->firstAlpha = 0.0f;
        state->secondScale = 1.5f;
        state->wait = 300;
        state->frame = 60.0f;
        state->firstScale = 1.0f;
        state->secondAlpha = 1.0f;
        asdTMTexTableLoadTmx(0x2d, 0);
        for (s32 index = 1; index < 7; ++index)
            asdTMTexTableLoadEntryAsync(0x2d, index);
        state->touchRegion = 0;
        state->touchRegion = ifTouchRegionAdd(0, 0, 320, 240);
        if (bgmGetStateById(0x1000051) != 1)
            soundChannelRequestIfEnabled(0x1000051, 0, 60);
        ++state->phase;
    }
    if (FUN_002c2a04(0) == 0 &&
        (ifTouchGetSelectionMode() == 6 || padIsButtonPressed(0))) {
        state->phase = 2;
        state->wait = 0;
    } else if (state->phase == 0) {
        return 0;
    }

    state->frame -= 1.0f;
    if (state->frame <= 0.0f) {
        state->frame = 60.0f;
        state->firstAlpha = 0.0f;
        state->firstScale = 1.0f;
    }
    // The original compares the raw words at these positive float thresholds.
    if (state->frameBits <= 0x41f00000 && state->secondAlpha <= 0.0f) {
        state->secondAlpha = 0.0f;
        state->secondScale = 1.0f;
    }
    if (state->frameBits > 0x41f00000) {
        state->firstAlpha += 0.033333335f;
        state->firstScale += 0.016666668f;
        state->secondAlpha -= 0.033333335f;
        state->secondScale += 0.016666668f;
    }
    if (state->frameBits < 0x41f00000) {
        state->firstAlpha -= 0.033333335f;
        state->firstScale += 0.016666668f;
        state->secondAlpha += 0.033333335f;
        state->secondScale += 0.016666668f;
    }
    if (state->phase == 1) {
        if (!asdTMTexTableNodeIsLoaded(0x2d, 6))
            return 0;
        if (FUN_002c2a04(0) == 3)
            FUN_002a03d8(0, 30);
        if (FUN_002c2a04(0) == 2)
            return 0;
        if (state->fadeBits < 0x3f800000)
            state->fade += 0.033333335f;
        else
            state->wait = 300;
    }
    if (state->phase == 2) {
        if (--state->wait >= 0)
            return 0;
        state->phase = 3;
        state->wait = 300;
        slotSetRequest(0, 0x2d, 0xff);
    }
    if (state->phase == 3 && FUN_002c2a04(0) == 3) {
        for (s32 index = 1; index < 7; ++index)
            asdTMTexTableReleaseNode(0x2d, index);
        asdTMTexTableFreeEntry(0x2d);
        ifTouchRegionRemove();
        soundChannelStopAll(0xf);
        state->scriptState = 9;
    }
    return 0;
}
}
