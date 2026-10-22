/* NON_MATCHING: The three-float amplitude copy is split into a scalar load/store and a two-word transfer. */
#include "event/bustupEvent/BustupCutAnim.h"
extern "C" {
s32 scrGetArg(s32);
void jobSetParent(u32, u32);
u32 FUN_002ebe68(f32*, f32*, f32, f32);
s32 jobIsValid(u32);
extern const ShakeAmplitudes DAT_0040372c;
extern BustupCutAnim* g_bustupCutAnim;

// Starts a random-offset shake for the bust-up animation and parents its job.
u32 FUN_002221a0(void)
{
    s32 slot = scrGetArg(0);
    f32 duration = (f32)scrGetArg(1);
    ShakeAmplitudes amplitudes = DAT_0040372c;
    u32 job = FUN_002ebe68(&g_bustupCutAnim->shakeX, &g_bustupCutAnim->shakeY,
                         amplitudes.values[slot], duration);
    if (jobIsValid(job)) {
        jobSetParent(g_bustupCutAnim->job, job);
    }
    return 1;
}
}
