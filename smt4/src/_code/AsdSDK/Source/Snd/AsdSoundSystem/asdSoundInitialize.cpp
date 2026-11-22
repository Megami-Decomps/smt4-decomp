#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W6_W6Match7_SoundInit.h"
#include "nn/Result.h"

namespace {
// Startup writes the complete volume word, including the byte view's padding.
struct SoundSlotBVolumeView {
    u8 unk00[0x48];
    u32 volume;
};

struct SoundAuxiliarySlotView {
    u8 unk00[0x34];
    u32 unk34;
    u8 unk38;
    u8 volume;
    u8 unk3a[2];
};
}

extern "C" {
extern AsdSoundSystem g_asdSound;
/* AsdSoundSystem.cpp's duck state and the sound status block after it. The file defines them: armcc addresses the
 * status from the duck's pool word (duck + 0x1c), as retail does, only for data defined in the same file. */
AsdSndDuck g_asdSoundDuck;
AsdSndStatus g_asdSoundStatus;
s32 FUN_0011be58();
s32 dspComponentLoadEmbedded();
s32 dspsndInitializeManagers();
void nw_snd_SoundSystem_SetMasterVolume(f32 volume);
u32 FUN_0012a740(u32 value);
void sndMasterManagerApply(u32 mode);
void asdFatalError();
void* asdMemoryAlloc(s32 heap, s32 alignment, s32 option, u32 size, s32 fromFront);

/* asdSoundDuckSetup's body: AsdSoundSystem.cpp's own callers inline it (startup clears the duck with enable 0). */
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

// Start the sound services, provision their work area and reset slot/control state.
void asdSoundInitialize(s32 auxiliaryMode)
{
    if (nnResultIsFailure(FUN_0011be58())) {
        asdFatalError();
    }
    if (nnResultIsFailure(dspComponentLoadEmbedded())) {
        asdFatalError();
    }
    if (nnResultIsFailure(dspsndInitializeManagers())) {
        asdFatalError();
    }
    nw_snd_SoundSystem_SetMasterVolume(1.0f);
    AsdSoundSystem* sound = &g_asdSound;
    if (auxiliaryMode > 0) {
        FUN_0012a740(30);
        sndMasterManagerApply(3);
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
    u32 size = nw_snd_SoundSystem_GetRequiredMemSize(&parameters);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Snd\\AsdSoundSystem.cpp", 0x212);
    u8* work = static_cast<u8*>(
        asdMemoryAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, size, 1));
    sound->workBuffer = work;
    nwSoundSystemInitializeBuffers(&parameters, work, size);

    for (s32 slot = 0; slot < ASD_SND_SLOT_B_COUNT; ++slot) {
        reinterpret_cast<SoundSlotBVolumeView*>(&sound->slotsB[slot])->volume =
            ASD_SND_VOLUME_DEFAULT;
    }
    SoundAuxiliarySlotView* auxiliary =
        reinterpret_cast<SoundAuxiliarySlotView*>(sound->unk5fc);
    for (s32 slot = 0; slot < 2; ++slot) {
        auxiliary[slot].unk34 = 0;
        auxiliary[slot].unk38 = 0;
        auxiliary[slot].volume = ASD_SND_VOLUME_DEFAULT;
    }
    for (s32 slot = 0; slot < ASD_SND_SLOT_C_COUNT; ++slot) {
        sound->slotsC[slot].unk08 = 0;
        sound->slotsC[slot].flag = 0;
        sound->slotsC[slot].volume = ASD_SND_VOLUME_DEFAULT;
        sound->slotsC[slot].active = 0;
    }
    for (s32 slot = 0; slot < ASD_SND_SLOT_A_COUNT; ++slot) {
        sound->slotsA[slot].volume = ASD_SND_VOLUME_DEFAULT;
        sound->slotsA[slot].active = 0;
        sound->slotsA[slot].hasHeap = 0;
    }
    sound->sound3d.enabled = 0;
    sound->sound3d.volume = ASD_SND_VOLUME_DEFAULT;
    duckSetup(0.0f, 0, 0, 0, 0, 0);
    g_asdSoundStatus.unk15 = 0;
    g_asdSoundStatus.hasStream = 0;
    g_asdSoundStatus.objects = NULL;
    g_asdSoundStatus.objectCount = 0;
    sound->archiveLoaded = 0;
}
}
