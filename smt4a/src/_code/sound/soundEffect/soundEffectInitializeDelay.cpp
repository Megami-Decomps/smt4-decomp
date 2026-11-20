#include "sound/SoundEffectDelay.h"
#include "AsdSDK/AsdDebug.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {
SoundEffectDelay g_soundDelayEffect;
SoundEffectDelayParameters g_soundDelayParameters;
extern void *g_soundEffectBuffers[2]; /* [0] delay, [1] reverb work buffer */
extern const char g_soundEffectSourceFileName[];
void nw_snd_FxDelay_SetParam(SoundEffectDelay *effect, const SoundEffectDelayParameters *parameters);
u32 nw_snd_FxDelay_GetRequiredMemSize(SoundEffectDelay *effect);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 option);
void nw_snd_FxDelay_AssignWorkBuffer(SoundEffectDelay *effect, void *buffer, u32 size);
void queueRequesterNode(u32 bus, SoundEffectDelay *effect);
void soundEffectInitializeReverb();

/* Sets up the delay effect on auxiliary bus 0 (A) unless resident entry 1 is present, then the
 * reverb. */
void soundEffectInitializeDelay()
{
    if (jyoucyuGetTableEntry(1) == 0) {
        g_soundDelayParameters.time = 150; /* milliseconds */
        g_soundDelayParameters.feedback = 0.1f;
        g_soundDelayParameters.damping = 0.7f;
        g_soundDelayParameters.surround = 1;
        nw_snd_FxDelay_SetParam(&g_soundDelayEffect, &g_soundDelayParameters);
        u32 bufferSize = nw_snd_FxDelay_GetRequiredMemSize(&g_soundDelayEffect);
        asdDebugTrace(g_soundEffectSourceFileName, 71);
        g_soundEffectBuffers[0] = asdMemoryAlloc(0x10000, 0x100, 0, bufferSize, 1);
        nw_snd_FxDelay_AssignWorkBuffer(&g_soundDelayEffect, g_soundEffectBuffers[0], bufferSize);
        queueRequesterNode(0, &g_soundDelayEffect);
    }
    soundEffectInitializeReverb();
}

} /* extern "C" */
