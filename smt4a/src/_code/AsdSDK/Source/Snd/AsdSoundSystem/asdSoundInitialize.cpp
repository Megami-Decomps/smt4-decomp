#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W6_W6Match7_SoundInit.h"
#include "nn/Result.h"

extern "C" {
/* AsdSoundSystem.cpp's duck state and the sound status block after it. The file defines them: armcc addresses the
 * status from the duck's pool word (duck + 0x1c), as retail does, only for data defined in the same file. */
AsdSndDuck g_asdSoundDuck;
AsdSndStatusApoc g_asdSoundStatus;
s32 FUN_00158f64(void);
s32 dspComponentLoadEmbeddedAndStart(void);
s32 dspsndInitializeManagers(void);
void sysFatalBreak(void);
void sndMasterManagerSetVolume(f32 volume);
void FUN_00159e58(u32 mode);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 options, u32 bytes, s32 clear);
void FUN_0015de34(const SoundSystemInitParameters *parameters, u8 *buffer, u32 bytes);

/* asdSoundDuckSetup's body: AsdSoundSystem.cpp's own callers inline it. */
static __inline void duckSetup(f32 level, s32 enable, u32 holdFrames, u32 unk08, u32 fadeInFrames, u32 fadeOutFrames)
{
    if (enable != 0) {
        AsdSndDuck *duck = &g_asdSoundDuck;
        duck->flags |= 1;
        duck->level = level;
        if (duck->level <= 0.0f) {
            duck->level = 0.0f;
        }
        if (duck->level > 1.0f) {
            duck->level = 1.0f;
        }
        duck->holdFrames = holdFrames;
        duck->fadeInFrames = fadeInFrames;
        duck->fadeOutFrames = fadeOutFrames;
        duck->unk08 = unk08;
        if (g_asdSoundStatus.hasStream == 0) {
            return;
        }
        duck->active = 1;
    } else {
        g_asdSoundDuck.holdFrames = 0;
        g_asdSoundDuck.level = 0.0f;
        g_asdSoundDuck.fadeInFrames = 0;
        g_asdSoundDuck.fadeOutFrames = 0;
        g_asdSoundDuck.unk08 = 0;
        g_asdSoundDuck.timer = 0;
        g_asdSoundDuck.fading = 0;
        g_asdSoundDuck.flags = 0;
        g_asdSoundDuck.active = 0;
    }
}

/* Starts the sound services, provisions their work area and resets the slot and control state. */
void asdSoundInitialize(s32 auxiliaryMode)
{
    if (nnResultIsFailure(FUN_00158f64()))
        sysFatalBreak();
    if (nnResultIsFailure(dspComponentLoadEmbeddedAndStart()))
        sysFatalBreak();
    if (nnResultIsFailure(dspsndInitializeManagers()))
        sysFatalBreak();
    sndMasterManagerSetVolume(1.0f);
    AsdSoundSystemA *sound = &g_asdSoundSystem;
    if (auxiliaryMode > 0) {
        FUN_00171424(30);
        FUN_00159e58(3);
    }
    SoundSystemInitParameters parameters;
    parameters.soundPriority = 4;
    parameters.threadMode = 0;
    parameters.soundStackSize = 0x4000;
    parameters.poolSizeA = 0x20000;
    parameters.taskPriority = 3;
    parameters.taskStackSize = 0x4000;
    parameters.poolSizeB = 0x2000;
    parameters.startThread = 1;
    parameters.profiling = 0;
    parameters.auxiliary = 1;
    parameters.profileBufferSize = -1;
    if (auxiliaryMode > 0) {
        parameters.threadMode = 1;
    }
    u32 bytes = nw_snd_SoundSystem_GetRequiredMemSize(&parameters);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Snd\\AsdSoundSystem.cpp", 617);
    u8 *buffer = static_cast<u8 *>(asdMemoryAlloc(0x10000, 0x100, 0, bytes, 1));
    sound->workBuffer = buffer;
    FUN_0015de34(&parameters, buffer, bytes);
    for (s32 slot = 0; slot < 4; ++slot)
        sound->slotsB[slot].volume = ASD_SND_VOLUME_DEFAULT;
    for (s32 slot = 0; slot < 2; ++slot) {
        sound->auxSlots[slot].unk34 = 0;
        sound->auxSlots[slot].unk38 = 0;
        sound->auxSlots[slot].volume = ASD_SND_VOLUME_DEFAULT;
    }
    sound->registered.count = 0;
    sound->registered.handles = NULL;
    for (s32 slot = 0; slot < 4; ++slot) {
        sound->slotsA[slot].volume = ASD_SND_VOLUME_DEFAULT;
        sound->slotsA[slot].active = 0;
        sound->slotsA[slot].hasHeap = 0;
    }
    sound->sound3d.enabled = 0;
    sound->sound3d.volume = ASD_SND_VOLUME_DEFAULT;
    duckSetup(0.0f, 0, 0, 0, 0, 0);
    g_asdSoundStatus.ready = 0;
    g_asdSoundStatus.hasStream = 0;
    g_asdSoundStatus.objects = NULL;
    g_asdSoundStatus.objectCount = 0;
    sound->archiveLoaded = 0;
}
}
