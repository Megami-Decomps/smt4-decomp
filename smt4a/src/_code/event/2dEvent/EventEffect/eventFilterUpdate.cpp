/* NON_MATCHING: only the literal pool order differs: retail places the g_eventEffect address before the 1.0f constant. (A local reference to g_eventEffect plus a single-use `f32 wave` temporary in case 3 gives retail's bytes: steering, not used.) */
#include "event/2dEvent/EventFilter.h"
#include "code/Code0020.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "util/TrigF32.h"

extern "C" {
extern EventEffectGlobalsA g_eventEffect;
extern EventFilterTexture DAT_0057f3e8[6];

// Advance the filter's texture loading, fade-in, pulse and fade-out phases.
s32 eventFilterUpdate(u32 process)
{
    EventFilterWork *work = g_eventEffect.filterState.work;
    switch (work->state) {
    case 0:
        if (work->texture < 6 && asdTMTexTableNodeIsLoaded(
                DAT_0057f3e8[work->texture].table,
                DAT_0057f3e8[work->texture].node))
            work->state = 1;
        break;
    case 1:
        break;
    case 2:
        if (work->duration > 0 && inputFastForwardActive() == 0) {
            work->opacity = (f32)work->frame / (f32)work->duration;
            if (work->opacity < 1.0f)
                break;
        }
        work->state = 3;
        work->frame = 0;
        work->opacity = 1.0f;
        break;
    case 3:
        if (work->texture == 3)
            work->pulse = 1.0f;
        else
            work->pulse = (libm_cosf((f32)work->frame * 0.07f) + 1.0f) * 0.5f * 0.5f + 0.5f;
        break;
    case 4:
        {
            bool finished = true;
            if (work->duration > 0 && inputFastForwardActive() == 0) {
                work->opacity = (f32)(work->duration - work->frame) / (f32)work->duration;
                finished = work->opacity <= 0.0f;
            }
            if (finished) {
                work->frame = 0;
                work->state = 5;
                work->opacity = 0.0f;
            }
        }
        break;
    }
    ++work->frame;
    return 0;
}
}
