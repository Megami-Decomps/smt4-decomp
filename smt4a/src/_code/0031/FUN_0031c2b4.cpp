/* NON_MATCHING: The three-float amplitude copy is split into scalar and two-word copies. */
#include "event/bustupEvent/BustupCutAnim.h"
#include "script/ScriptArgs.h"
extern "C" {
void jobSetParent(u32, u32);
u32 FUN_0036c580(f32*, f32*, f32, f32);
s32 jobIsValid(u32);
extern const ShakeAmplitudes DAT_0052f6b4;
extern BustupCutAnimA* g_bustupCutAnim;

// Starts a bust-up shake, parents its job, and publishes the job handle to the script.
u32 FUN_0031c2b4(void)
{
    s32 strength = scrGetArg(0);
    f32 duration = (f32)scrGetArg(1);
    ShakeAmplitudes amplitudes = DAT_0052f6b4;
    u32 job = FUN_0036c580(&g_bustupCutAnim->shakeX, &g_bustupCutAnim->shakeY,
                         amplitudes.values[strength], duration);
    if (jobIsValid(job)) {
        jobSetParent(g_bustupCutAnim->job, job);
    }
    scrSetResult(job);
    return 1;
}
}
