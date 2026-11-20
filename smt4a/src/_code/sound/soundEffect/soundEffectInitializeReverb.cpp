#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "kernel/jyoucyuGetTableEntry.h"

extern "C" {
extern const char g_soundEffectSourceFileName[];
SoundReverbEffect g_soundReverbEffect;
SoundReverbParameters g_soundReverbParameters;
SoundReverbFilterSize g_soundReverbFilterSize;
extern void *g_soundEffectBuffers[2]; /* [0] delay, [1] reverb work buffer */
s32 nw_snd_FxReverb_SetParam(SoundReverbEffect *effect,
                             const SoundReverbParameters *parameters);
u32 nw_snd_FxReverb_GetRequiredMemSize(SoundReverbEffect *effect);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 kind);
s32 nw_snd_FxReverb_AssignWorkBuffer(SoundReverbEffect *effect,
                                    void *buffer, u32 size);
s32 queueRequesterNode(u32 bus, SoundReverbEffect *effect);

/* Sets up the reverb effect on auxiliary bus 1 (B) unless resident entry 1 is present. */
void soundEffectInitializeReverb(void)
{
    if (jyoucyuGetTableEntry(1) != 0)
        return;
    g_soundReverbParameters.earlyReflectionTime = 90;
    g_soundReverbParameters.fusedTime = 1200;
    g_soundReverbParameters.preDelayTime = 30;
    g_soundReverbParameters.coloration = 0.5f;
    g_soundReverbParameters.damping = 0.8f;
    g_soundReverbFilterSize.comb0 = 3040;
    g_soundReverbFilterSize.comb1 = 3680;
    g_soundReverbFilterSize.allPass = 2080;
    g_soundReverbParameters.filterSize = &g_soundReverbFilterSize;
    g_soundReverbParameters.earlyGain = 0.4f;
    g_soundReverbParameters.fusedGain = 0.4f;
    g_soundReverbParameters.surround = 1;
    g_soundReverbParameters.useHighPassDamping = 0;
    nw_snd_FxReverb_SetParam(&g_soundReverbEffect, &g_soundReverbParameters);
    u32 bufferSize = nw_snd_FxReverb_GetRequiredMemSize(&g_soundReverbEffect);
    asdDebugTrace(g_soundEffectSourceFileName, 108);
    void *buffer = g_soundEffectBuffers[1] = asdMemoryAlloc(0x10000, 0x100, 0, bufferSize, 1);
    nw_snd_FxReverb_AssignWorkBuffer(&g_soundReverbEffect, buffer, bufferSize);
    queueRequesterNode(1, &g_soundReverbEffect);
}

} /* extern "C" */
