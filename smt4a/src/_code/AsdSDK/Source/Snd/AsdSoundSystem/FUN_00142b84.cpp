/* NON_MATCHING: sound initialization stack setup and reset-state address scheduling differ. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W6_W6Match7_SoundInit.h"
#include "nn/Result.h"

namespace {
struct SoundStartupVolumeSlotA { u32 volume; u8 unk04[0x6C]; };
struct SoundStartupAuxSlotA { u32 state; u8 active, volume, unk06[0x36]; };
/* Apocalypse's startup fields do not share IV's sound-system offsets. */
struct SoundStartupStateA {
    union {
        u8 data[0x1348];
        struct { u8 unk000[0x4CC]; u8 *buffer; } memory;
        struct { u8 unk000[0x58C]; SoundStartupVolumeSlotA slots[4]; } secondary;
        struct { u8 unk000[0x718]; SoundStartupAuxSlotA slots[2]; } auxiliary;
        struct { u8 unk000[0x75C]; AsdSndHandleNode *head; u32 count; } handles;
        struct { u8 unk000[0x764]; AsdSndSlotA slots[4]; } primary;
        struct { u8 unk000[0x12DC]; u8 active, volume; } spatial;
        struct { u8 unk000[0x1344]; u8 archiveLoaded; } status;
    };
};
struct SoundStartupControlA { AsdSndDuck duck; AsdSndStatusApoc status; };
typedef char SoundStartupOffsets[sizeof(SoundStartupVolumeSlotA) == 0x70 &&
    sizeof(SoundStartupAuxSlotA) == 0x3C &&
    offsetof(SoundStartupStateA, memory.buffer) == 0x4CC &&
    offsetof(SoundStartupStateA, primary.slots) == 0x764 &&
    offsetof(SoundStartupStateA, status.archiveLoaded) == 0x1344 ? 1 : -1];
}
extern "C" {
extern SoundStartupStateA g_asdSoundSystem;
extern SoundStartupControlA g_asdSoundDuck;
s32 FUN_00158f64(void);
s32 FUN_00159030(void);
s32 FUN_00159d60(void);
void sysFatalBreak(void);
void sndMasterManagerSetVolume(f32 volume);
void FUN_00171424(u32 value);
void FUN_00159e58(u32 mode);
u32 FUN_0015e0c8(const SoundSystemInitParameters *parameters);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 options, u32 bytes, s32 clear);
void FUN_0015de34(const SoundSystemInitParameters *parameters, u8 *buffer, u32 bytes);

void FUN_00142b84(s32 auxiliaryMode)
{
    if (nnResultIsFailure(FUN_00158f64()))
        sysFatalBreak();
    if (nnResultIsFailure(FUN_00159030()))
        sysFatalBreak();
    if (nnResultIsFailure(FUN_00159d60()))
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
    u32 bytes = FUN_0015e0c8(&parameters);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Snd\\AsdSoundSystem.cpp", 617);
    u8 *buffer = static_cast<u8 *>(asdMemoryAlloc(0x10000, 0x100, 0, bytes, 1));
    g_asdSoundSystem.memory.buffer = buffer;
    FUN_0015de34(&parameters, buffer, bytes);
    for (s32 slot = 0; slot < 4; ++slot)
        g_asdSoundSystem.secondary.slots[slot].volume = ASD_SND_VOLUME_DEFAULT;
    for (s32 slot = 0; slot < 2; ++slot) {
        g_asdSoundSystem.auxiliary.slots[slot].state = 0;
        g_asdSoundSystem.auxiliary.slots[slot].active = 0;
        g_asdSoundSystem.auxiliary.slots[slot].volume = ASD_SND_VOLUME_DEFAULT;
    }
    g_asdSoundSystem.handles.count = 0;
    g_asdSoundSystem.handles.head = NULL;
    for (s32 slot = 0; slot < 4; ++slot) {
        g_asdSoundSystem.primary.slots[slot].volume = ASD_SND_VOLUME_DEFAULT;
        g_asdSoundSystem.primary.slots[slot].active = 0;
        g_asdSoundSystem.primary.slots[slot].hasHeap = 0;
    }
    g_asdSoundSystem.spatial.active = 0;
    g_asdSoundSystem.spatial.volume = ASD_SND_VOLUME_DEFAULT;
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
    g_asdSoundSystem.status.archiveLoaded = 0;
}
}
