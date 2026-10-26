/* NON_MATCHING: spatial/status base-address formation and tail scheduling differ (117/118 normalized rows); -O2 may change the address CSE. */
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

struct SoundSpatialTailView {
    u8 unk000[0xa48];
    u8 flag;
    u8 volume;
    u8 unka4a[2];
};

// The initializer accesses the duck state and the immediately following status
// as one contiguous control block; the canonical component layouts are reused.
struct SoundControlView {
    AsdSndDuck duck;
    AsdSndStatus status;
};
}

extern "C" {
extern AsdSoundSystem g_asdSound;
extern SoundControlView g_asdSoundDuck;
s32 FUN_0011be58();
s32 FUN_0011bf24();
s32 dspsndInitializeManagers();
void nw_snd_SoundSystem_SetMasterVolume(f32 volume);
u32 FUN_0012a740(u32 value);
void sndMasterManagerApply(u32 mode);
void asdFatalError();
void* asdMemoryAlloc(s32 heap, s32 alignment, s32 option, u32 size, s32 fromFront);

// Start the sound services, provision their work area and reset slot/control state.
void asdSoundInitialize(s32 auxiliaryMode)
{
    if (nnResultIsFailure(FUN_0011be58())) {
        asdFatalError();
    }
    if (nnResultIsFailure(FUN_0011bf24())) {
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
        sound->slotsC[slot].pad0e[0] = 0;
    }
    for (s32 slot = 0; slot < ASD_SND_SLOT_A_COUNT; ++slot) {
        sound->slotsA[slot].volume = ASD_SND_VOLUME_DEFAULT;
        sound->slotsA[slot].active = 0;
        sound->slotsA[slot].hasHeap = 0;
    }
    SoundSpatialTailView* spatial =
        reinterpret_cast<SoundSpatialTailView*>(sound->unk784);
    spatial->flag = 0;
    spatial->volume = ASD_SND_VOLUME_DEFAULT;
    g_asdSoundDuck.duck.holdFrames = 0;
    g_asdSoundDuck.duck.level = 0.0f;
    g_asdSoundDuck.duck.fadeInFrames = 0;
    g_asdSoundDuck.duck.fadeOutFrames = 0;
    g_asdSoundDuck.duck.unk08 = 0;
    g_asdSoundDuck.duck.timer = 0;
    g_asdSoundDuck.duck.fading = 0;
    g_asdSoundDuck.duck.flags = 0;
    g_asdSoundDuck.duck.active = 0;
    AsdSndStatus* status = &g_asdSoundDuck.status;
    status->unk15 = 0;
    status->hasStream = 0;
    status->objects = NULL;
    status->objectCount = 0;
    sound->archiveLoaded = 0;
}
}
