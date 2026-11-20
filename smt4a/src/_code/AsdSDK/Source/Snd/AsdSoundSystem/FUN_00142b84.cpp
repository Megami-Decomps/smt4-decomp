/* NON_MATCHING: sound initialization stack setup and reset-state address scheduling differ. */
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W6_W6Match7_SoundInit.h"
#include "nn/Result.h"

extern "C" {
extern AsdSndControlA g_asdSoundDuck;
s32 FUN_00158f64(void);
s32 dspComponentLoadEmbeddedAndStart(void);
s32 dspsndInitializeManagers(void);
void sysFatalBreak(void);
void sndMasterManagerSetVolume(f32 volume);
void FUN_00159e58(u32 mode);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 options, u32 bytes, s32 clear);
void FUN_0015de34(const SoundSystemInitParameters *parameters, u8 *buffer, u32 bytes);

void FUN_00142b84(s32 auxiliaryMode)
{
    if (nnResultIsFailure(FUN_00158f64()))
        sysFatalBreak();
    if (nnResultIsFailure(dspComponentLoadEmbeddedAndStart()))
        sysFatalBreak();
    if (nnResultIsFailure(dspsndInitializeManagers()))
        sysFatalBreak();
    sndMasterManagerSetVolume(1.0f);
    if (auxiliaryMode > 0) {
        FUN_00171424(30);
        FUN_00159e58(3);
    }
    SoundSystemInitParameters parameters;
    parameters.soundPriority = 4;
    parameters.threadMode = auxiliaryMode > 0;
    parameters.soundStackSize = 0x4000;
    parameters.poolSizeA = 0x20000;
    parameters.taskPriority = 3;
    parameters.taskStackSize = 0x4000;
    parameters.poolSizeB = 0x2000;
    parameters.startThread = 1;
    parameters.profiling = 0;
    parameters.auxiliary = 1;
    parameters.profileBufferSize = -1;
    u32 bytes = nw_snd_SoundSystem_GetRequiredMemSize(&parameters);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Snd\\AsdSoundSystem.cpp", 617);
    u8 *buffer = static_cast<u8 *>(asdMemoryAlloc(0x10000, 0x100, 0, bytes, 1));
    g_asdSoundSystem.workBuffer = buffer;
    FUN_0015de34(&parameters, buffer, bytes);
    for (s32 slot = 0; slot < 4; ++slot)
        g_asdSoundSystem.slotsB[slot].volume = ASD_SND_VOLUME_DEFAULT;
    for (s32 slot = 0; slot < 2; ++slot) {
        g_asdSoundSystem.auxSlots[slot].unk34 = 0;
        g_asdSoundSystem.auxSlots[slot].unk38 = 0;
        g_asdSoundSystem.auxSlots[slot].volume = ASD_SND_VOLUME_DEFAULT;
    }
    g_asdSoundSystem.registered.count = 0;
    g_asdSoundSystem.registered.handles = NULL;
    for (s32 slot = 0; slot < 4; ++slot) {
        g_asdSoundSystem.slotsA[slot].volume = ASD_SND_VOLUME_DEFAULT;
        g_asdSoundSystem.slotsA[slot].active = 0;
        g_asdSoundSystem.slotsA[slot].hasHeap = 0;
    }
    g_asdSoundSystem.sound3d.enabled = 0;
    g_asdSoundSystem.sound3d.volume = ASD_SND_VOLUME_DEFAULT;
    g_asdSoundDuck.duck.holdFrames = 0;
    g_asdSoundDuck.duck.level = 0.0f;
    g_asdSoundDuck.duck.fadeInFrames = 0;
    g_asdSoundDuck.duck.fadeOutFrames = 0;
    g_asdSoundDuck.duck.unk08 = 0;
    g_asdSoundDuck.duck.timer = 0;
    g_asdSoundDuck.duck.fading = 0;
    g_asdSoundDuck.duck.flags = 0;
    g_asdSoundDuck.duck.active = 0;
    g_asdSoundDuck.status.ready = 0;
    g_asdSoundDuck.status.hasStream = 0;
    g_asdSoundDuck.status.objects = NULL;
    g_asdSoundDuck.status.objectCount = 0;
    g_asdSoundSystem.archiveLoaded = 0;
}
}
