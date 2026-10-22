#include "event/2dEvent/2dEventEffect.h"

extern "C" {
extern EventTexEffectA *g_eventTex;
extern const EventEffectPresets DAT_0052f4e0;
s32 scrGetArg(u32 index);
void scrSetResult(u32 result);
u32 FUN_0036c580(f32 *first, f32 *second, f32 magnitude, f32 duration);
s32 jobIsValid(u32 job);
void jobSetParent(u32 parent, u32 child);

// Start the selected event-texture effect and attach its job to the event scene.
u32 scrCommStartEventTextureEffect(void)
{
    s32 preset = scrGetArg(0);
    s32 duration = scrGetArg(1);
    EventEffectPresets presets = DAT_0052f4e0;
    u32 job = FUN_0036c580(&g_eventTex->effectValues[0], &g_eventTex->effectValues[1],
                          presets.values[preset], static_cast<f32>(duration));
    if (jobIsValid(job))
        jobSetParent(g_eventTex->textures.job, job);
    scrSetResult(job);
    return 1;
}
}
