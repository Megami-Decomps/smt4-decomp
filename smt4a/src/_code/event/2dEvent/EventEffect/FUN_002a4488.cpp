/* NON_MATCHING: pulse-end order recovered; prologue constant scheduling and steady-state blink branch folding differ. */
#include "event/2dEvent/SnowNoise.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern EventEffectGlobalsA g_eventEffect;
extern EventFilterTexture DAT_0057f430;

u32 FUN_002a4488()
{
    EventSnowNoiseWork *work = static_cast<EventSnowNoiseWork *>(g_eventEffect.unk08);
    switch (work->state) {
    case 0:
        if (asdTMTexTableNodeIsLoaded(DAT_0057f430.table, DAT_0057f430.node)) {
            work->frame = 0;
            work->opacity = 0.0f;
            if (work->style) {
                work->state = 2;
            } else {
                work->state = 1;
            }
        }
        break;
    case 1: {
        s32 frame = work->frame;
        if (frame > 4) {
            if (frame <= 8) {
                frame = 8 - frame;
            } else {
                work->opacity = 0.0f;
                work->state = 5;
                work->frame = 0;
                break;
            }
        }
        work->complete = 0;
        work->opacity = (f32)frame * 0.25f * 0.5f;
        break;
    }
    case 2:
        if (work->frame <= 4) {
            work->complete = 0;
            work->opacity = (f32)work->frame * 0.25f * 0.5f;
        } else {
            work->frame = 0;
            work->opacity = 0.5f;
            work->state = 3;
            work->complete = 0;
        }
        if (work->frame % 4 < 2) {
            work->complete = 1;
        }
        break;
    case 3: {
        s32 frame = work->frame;
        work->opacity = 0.5f;
        if (frame % 4 >= 2)
            work->complete = 0;
        else
            work->complete = 1;
        break;
    }
    case 4:
        if (work->frame < 4) {
            work->complete = 0;
            work->opacity = (f32)(4 - work->frame) * 0.25f * 0.5f;
        } else {
            work->opacity = 0.0f;
            work->complete = 0;
            work->state = 5;
        }
        if (work->frame % 4 < 2) {
            work->complete = 1;
        }
        break;
    }
    ++work->frame;
    return 0;
}
}
