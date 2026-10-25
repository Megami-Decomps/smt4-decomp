#include "event/2dEvent/2dEventTex.h"
#include <stddef.h>

/* The shake output cells follow the shared event-texture prefix. */
struct EventTextureShakeState : EventTex {
    f32 shakeX;
    f32 shakeY;
};
typedef char EventTextureShakeStateOffsets[
    offsetof(EventTextureShakeState, shakeX) == 0x60 &&
    offsetof(EventTextureShakeState, shakeY) == 0x64 ? 1 : -1];

extern "C" {

extern EventTextureShakeState *g_eventTex;

s32 scrGetArg(u32 index);
u32 FUN_002ebe68(f32 *outputX, f32 *outputY, f32 amplitude, f32 duration);
s32 jobIsValid(u32 job);
void jobSetParent(u32 parent, u32 job);

/* Script command: shake the event textures with amplitude 2, 4 or 6 for the requested duration. */
s32 FUN_0018c054(void)
{
    s32 index = scrGetArg(0);
    s32 duration = scrGetArg(1);
    const f32 amplitudes[3] = {2.0f, 4.0f, 6.0f};
    u32 job = FUN_002ebe68(&g_eventTex->shakeX, &g_eventTex->shakeY, amplitudes[index], (f32)duration);

    if (jobIsValid(job) != 0) {
        jobSetParent(g_eventTex->job, job);
    }
    return 1;
}

} /* extern "C" */
