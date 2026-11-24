/* NON_MATCHING: the cycle steps load and store the four alpha/scale fields one by one in retail (the build pairs the
 * first scale and second alpha with vldmia/vstmia); the rest only shifts. */
#include "battle/BtlGameOverTransition.h"
#include "code/Code002c.h"
#include "ui/UiControl.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code0013.h"

extern "C" {
void asdTMTexTableLoadTmx(s32 group, s32 option);
void asdTMTexTableLoadEntryAsync(s32 group, s32 index);
void asdTMTexTableReleaseNode(s32 group, s32 index);
s32 ifTouchRegionAdd(u16 x, u16 y, u16 width, u16 height);
void ifTouchRegionRemove(void);
s32 ifTouchGetSelectionMode(void);
s32 padIsButtonPressed(u32 button);
s32 bgmGetStateById(u32 sound);
void soundChannelRequestIfEnabled(u32 sound, u32 option, u32 fadeFrames);
void soundChannelStopAll(s32 channel);
void titleSetSlotValueState2(s32 slot, s32 frames);
void slotSetRequest(s32 slot, s32 group, s32 amount);

/* Loads the splash sprites, cycles their crossfade, and releases them after dismissal. */
s32 FUN_0023ed64(BtlGameOver *state)
{
    if (state->splashPhase == 0) {
        state->layers[0].alpha = 0.0f;
        state->layers[1].scale = 1.5f;
        state->splashWait = 300;
        state->crossfadeFrame = 60.0f;
        state->layers[0].scale = 1.0f;
        state->layers[1].alpha = 1.0f;
        asdTMTexTableLoadTmx(0x2d, 0);
        for (s32 index = 1; index < 7; ++index)
            asdTMTexTableLoadEntryAsync(0x2d, index);
        state->touchRegion = 0;
        state->touchRegion = ifTouchRegionAdd(0, 0, 320, 240);
        if (bgmGetStateById(0x1000051) != 1)
            soundChannelRequestIfEnabled(0x1000051, 0, 60);
        ++state->splashPhase;
    }
    if (pairedAvailabilityGetState(0) == 0 &&
        (ifTouchGetSelectionMode() == 6 || padIsButtonPressed(0))) {
        state->splashPhase = 2;
        state->splashWait = 0;
    } else if (state->splashPhase == 0) {
        return 0;
    }

    state->crossfadeFrame -= 1.0f;
    if (state->crossfadeFrame <= 0.0f) {
        state->crossfadeFrame = 60.0f;
        state->layers[0].alpha = 0.0f;
        state->layers[0].scale = 1.0f;
    }
    if (state->crossfadeFrame <= 30.0f && state->layers[1].alpha <= 0.0f) {
        state->layers[1].alpha = 0.0f;
        state->layers[1].scale = 1.0f;
    }
    if (state->crossfadeFrame > 30.0f) {
        state->layers[0].alpha += 0.033333335f;
        state->layers[0].scale += 0.016666668f;
        state->layers[1].alpha -= 0.033333335f;
        state->layers[1].scale += 0.016666668f;
    }
    if (state->crossfadeFrame < 30.0f) {
        state->layers[0].alpha -= 0.033333335f;
        state->layers[0].scale += 0.016666668f;
        state->layers[1].alpha += 0.033333335f;
        state->layers[1].scale += 0.016666668f;
    }
    if (state->splashPhase == 1) {
        if (!asdTMTexTableNodeIsLoaded(0x2d, 6))
            return 0;
        if (pairedAvailabilityGetState(0) == 3)
            titleSetSlotValueState2(0, 30);
        if (pairedAvailabilityGetState(0) == 2)
            return 0;
        if (state->frontAlpha < 1.0f)
            state->frontAlpha += 0.033333335f;
        else
            state->splashWait = 300;
    }
    if (state->splashPhase == 2) {
        if (--state->splashWait >= 0)
            return 0;
        state->splashPhase = 3;
        state->splashWait = 300;
        slotSetRequest(0, 0x2d, 0xff);
    }
    if (state->splashPhase == 3 && pairedAvailabilityGetState(0) == 3) {
        for (s32 index = 1; index < 7; ++index)
            asdTMTexTableReleaseNode(0x2d, index);
        asdTMTexTableFreeEntry(0x2d);
        ifTouchRegionRemove();
        soundChannelStopAll(0xf);
        state->state = 9;
    }
    return 0;
}

} /* extern "C" */
