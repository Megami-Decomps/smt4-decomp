#include "event/bustupEvent/BustupCutAnim.h"
extern "C" {
s32 scrGetArg(s32);
void jobSetParent(u32, u32);
u32 bustupShakeStart(f32*, f32*, f32, f32);
s32 jobIsValid(u32);
extern const ShakeAmplitudes DAT_0040372c;
extern BustupCutAnim* g_bustupCutAnim;

// Starts a random-offset shake for the bust-up animation and parents its job.
u32 FUN_002221a0(void)
{
    s32 slot = scrGetArg(0);
    s32 duration = scrGetArg(1);
    ShakeAmplitudes amplitudes = DAT_0040372c;
    u32 job = bustupShakeStart(&g_bustupCutAnim->shakeX, &g_bustupCutAnim->shakeY,
                         amplitudes.values[slot], static_cast<f32>(duration));
    if (jobIsValid(job)) {
        jobSetParent(g_bustupCutAnim->job, job);
    }
    return 1;
}
}
