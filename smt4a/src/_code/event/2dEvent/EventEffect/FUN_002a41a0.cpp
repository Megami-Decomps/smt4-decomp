/* NON_MATCHING: switch uses comparison tree rather than retail jump table; fade arithmetic scheduling differs. */
#include "event/2dEvent/EventFilter.h"

extern "C" {
extern EventEffectGlobalsA g_eventEffect;
s32 asdTMTexTableNodeIsLoaded(u32, u32);
f32 FUN_001bbf0c(f32);
s32 FUN_00203d74(void);

// Advance the filter's texture loading, fade-in, pulse and fade-out phases.
u32 FUN_002a41a0(void)
{
    EventFilterWork *work = g_eventEffect.filterState.work;
    switch (work->state) {
    case 0:
        if (work->texture < 6 && asdTMTexTableNodeIsLoaded(
                g_eventEffect.filterTextures[work->texture].table,
                g_eventEffect.filterTextures[work->texture].node))
            work->state = 1;
        break;
    case 2:
        if (work->duration > 0 && FUN_00203d74() == 0) {
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
            work->pulse = (FUN_001bbf0c((f32)work->frame * 0.07f) + 1.0f) * 0.5f * 0.5f + 0.5f;
        break;
    case 4:
        if (work->duration > 0 && FUN_00203d74() == 0) {
            work->opacity = (f32)(work->duration - work->frame) / (f32)work->duration;
            if (work->opacity > 0.0f)
                break;
        }
        work->state = 5;
        work->frame = 0;
        work->opacity = 0.0f;
        break;
    }
    ++work->frame;
    return 0;
}
}
