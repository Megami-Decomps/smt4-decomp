/* NON_MATCHING: retail addresses the work pointer from the textures' pool word (DAT_0043df00 - 24: EventEffect.cpp defines
 * both); declared extern here they take two pool words, which moves the rest of the literal pool. Everything else matches. */
#include "event/2dEvent/BlinkFade.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern BlinkFadeWork *g_eventEffect;
extern BlinkFadeTexture DAT_0043df00[2];
s32 lerpIntSplitClamped(s32 start, s32 end, s32 duration, s32 frame);
f32 mathInterpolateTimed(s32 duration, s32 frame, f32 from, f32 to);
s32 eventIsSkipping(void);

/* Update the blink-fade event effect: waits for its textures, then slides and fades for 300 frames. */
s32 eventEffectBlinkFadeUpdate(void)
{
    BlinkFadeWork *work = g_eventEffect;
    switch (work->state) {
    case 0: {
        s32 loaded = 0;
        for (s32 i = 0; i < 2; i++) {
            if (asdTMTexTableNodeIsLoaded(DAT_0043df00[i].table, DAT_0043df00[i].node) != 0) {
                loaded++;
            }
        }
        if (loaded == 2) {
            screenFadeSlotReset(0);
            work->state = 1;
            work->visible = 1;
        }
        break;
    }
    case 1:
        if ((u32)(work->frame - 15) <= 120) {
            work->position = lerpIntSplitClamped(40, -180, 120, work->frame - 15);
        }
        if ((u32)(work->frame - 136) <= 6) {
            work->position = lerpIntSplitClamped(-180, 40, 6, work->frame - 136);
        }
        if ((u32)(work->frame - 143) <= 7) {
            work->position = lerpIntSplitClamped(40, -180, 7, work->frame - 143);
        }
        if ((u32)(work->frame - 195) <= 4) {
            work->position = lerpIntSplitClamped(-180, 40, 4, work->frame - 195);
        }
        if ((u32)(work->frame - 200) <= 6) {
            work->position = lerpIntSplitClamped(40, -180, 6, work->frame - 200);
        }
        if ((u32)(work->frame - 207) <= 4) {
            work->position = lerpIntSplitClamped(-180, 40, 4, work->frame - 207);
        }
        if (work->frame >= 212) {
            work->position = lerpIntSplitClamped(40, -180, 45, work->frame - 212);
        }
        if ((u32)(work->frame - 15) <= 187) {
            work->alpha = mathInterpolateTimed(202, work->frame - 15, 1.0f, 0.6f);
        }
        if ((u32)(work->frame - 203) <= 7) {
            work->alpha = mathInterpolateTimed(8, work->frame - 203, 0.6f, 0.7f);
        }
        if (work->frame >= 240) {
            work->alpha = mathInterpolateTimed(60, work->frame - 240, 0.7f, 0.0f);
        }
        work->frame++;
        if (work->frame > 300) {
            work->visible = 0;
            work->state = 2;
        }
        break;
    }
    if (eventIsSkipping() != 0) {
        s32 loaded = 0;
        for (s32 i = 0; i < 2; i++) {
            if (asdTMTexTableNodeIsLoaded(DAT_0043df00[i].table, DAT_0043df00[i].node) != 0) {
                loaded++;
            }
        }
        if (loaded == 2) {
            work->state = 2;
        }
    }
    return 0;
}

}
