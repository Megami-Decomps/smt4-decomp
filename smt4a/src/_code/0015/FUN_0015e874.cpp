#include "sound/SoundParameterCommand.h"

/* An object that owns a value fade at 0xB8. */
struct Fader {
    /* 0x00 */ u8 unk00[0xB8];
    /* 0xB8 */ SoundFadeState fade;
};

extern "C" {

f32 interpolationStateEvaluate(const SoundFadeState *state);

/* Restarts the fade from its current value toward `target` over `duration` frames. */
static __inline void fadeRestart(SoundFadeState *fade, f32 target, s32 duration)
{
    fade->start = interpolationStateEvaluate(fade);
    fade->end = target;
    fade->duration = duration;
    fade->elapsed = 0;
}

/* Starts a fade from the current value to `target` (clamped to 0 or more) over `duration` frames. */
void FUN_0015e874(Fader *fader, u32 duration, f32 target)
{
    if (target < 0.0f) {
        target = 0.0f;
    }
    fadeRestart(&fader->fade, target, duration);
}

} /* extern "C" */
