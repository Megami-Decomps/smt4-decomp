/* NON_MATCHING: jump table now matches; retail reads the filter textures through their own literal (DAT_0057f3e8, not a g_eventEffect offset) and uses bhi for the fade-out test; fade division register choice differs. */
#include "event/2dEvent/EventFilter.h"
#include "code/Code0020.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern EventEffectGlobalsA g_eventEffect;
extern EventFilterTexture DAT_0057f3e8[6];
f32 FUN_001bbf0c(f32);

// Advance the filter's texture loading, fade-in, pulse and fade-out phases.
u32 FUN_002a41a0(void)
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
            if (!(work->opacity <= 0.0f))
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
