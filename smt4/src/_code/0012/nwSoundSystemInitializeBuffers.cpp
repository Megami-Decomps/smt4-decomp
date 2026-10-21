/* NON_MATCHING: pool partition arithmetic scheduling, task-stack stores and saved-buffer registers differ; -O2 candidate. */
#include "shard/S3SoundThread.h"
#include "shard/W6_W6Match7_SoundInit.h"

struct SoundBufferPool;
struct SoundDriverManager;
struct SoundChannelManager;
struct SoundTaskThread;
struct SoundTaskManager;
extern "C" {
extern SoundSystemInitFlags g_nwSoundSystemInitFlags;
extern SoundInitStack g_nwSoundTaskStack;
extern u8 DAT_004ea168;
void FUN_001310d4(void *);
SoundBufferPool *FUN_002baed8();
SoundBufferPool *FUN_002bae7c();
void FUN_00130df4(SoundBufferPool *, u8 *, u32);
SoundThread *nw_snd_internal_driver_SoundThread_GetInstance();
void FUN_00130eec(SoundThread *);
SoundTaskManager *FUN_002bb020();
void nw_snd_internal_TaskManager_Initialize(SoundTaskManager *);
SoundDriverManager *FUN_002baf30();
u32 FUN_0013127c(SoundDriverManager *, u32);
void FUN_00131204(SoundDriverManager *, u8 *, u32);
SoundChannelManager *FUN_002bafb0();
u32 FUN_001310c4(SoundChannelManager *, u32);
void nw_snd_internal_driver_ChannelManager_Initialize(SoundChannelManager *, u8 *, u32);
void FUN_00131288();
SoundTaskThread *FUN_00130498();
void FUN_00130514(SoundTaskThread *, u32, SoundInitStack *);
void FUN_00130f48(SoundThread *, u8 *, u32, u32, u8 *, u32, u32, u32, u32);
void nw_snd_internal_driver_SoundThread_SetProfileBuffer(SoundThread *, void *, s32);

void nwSoundSystemInitializeBuffers(const SoundSystemInitParameters *parameters, u8 *buffer, u32 bufferSize)
{
    if (g_nwSoundSystemInitFlags.initialized)
        return;
    FUN_001310d4(&DAT_004ea168);
    if (!g_nwSoundSystemInitFlags.poolsInitialized) {
        u32 sizeA = parameters->poolSizeA;
        u32 sizeB = parameters->poolSizeB;
        FUN_00130df4(FUN_002baed8(), buffer, parameters->poolSizeA);
        FUN_00130df4(FUN_002bae7c(), buffer + sizeA, parameters->poolSizeB);
        buffer += sizeA + sizeB;
        g_nwSoundSystemInitFlags.poolsInitialized = 1;
    }
    u8 *soundStack = NULL;
    u8 *auxiliaryStack = NULL;
    if (parameters->startThread) {
        soundStack = buffer;
        buffer += parameters->soundStackSize;
        if (parameters->threadMode == 1 && parameters->auxiliary) {
            auxiliaryStack = buffer;
            buffer += parameters->soundStackSize;
        }
    }
    FUN_00130eec(nw_snd_internal_driver_SoundThread_GetInstance());
    u32 taskStackSize = parameters->taskStackSize;
    nw_snd_internal_TaskManager_Initialize(FUN_002bb020());
    g_nwSoundTaskStack.buffer = buffer;
    g_nwSoundTaskStack.size = parameters->taskStackSize;
    u8 *driverMemory = buffer + taskStackSize;
    u8 *channelMemory = driverMemory + FUN_0013127c(FUN_002baf30(), g_nwSoundSystemInitFlags.driverMode);
    u32 driverSize = FUN_0013127c(FUN_002baf30(), g_nwSoundSystemInitFlags.driverMode);
    FUN_00131204(FUN_002baf30(), driverMemory, driverSize);
    u8 *profileMemory = channelMemory + FUN_001310c4(FUN_002bafb0(), g_nwSoundSystemInitFlags.driverMode);
    u32 channelSize = FUN_001310c4(FUN_002bafb0(), g_nwSoundSystemInitFlags.driverMode);
    nw_snd_internal_driver_ChannelManager_Initialize(FUN_002bafb0(), channelMemory, channelSize);
    FUN_00131288();
    FUN_00130514(FUN_00130498(), parameters->taskPriority, &g_nwSoundTaskStack);
    if (parameters->startThread) {
        FUN_00130f48(nw_snd_internal_driver_SoundThread_GetInstance(), soundStack, parameters->soundStackSize,
                     parameters->soundPriority, auxiliaryStack, parameters->soundStackSize,
                     parameters->soundPriority, parameters->threadMode, parameters->profiling);
    }
    if (parameters->profiling && parameters->profileBufferSize > 0)
        nw_snd_internal_driver_SoundThread_SetProfileBuffer(nw_snd_internal_driver_SoundThread_GetInstance(),
                                                           profileMemory, parameters->profileBufferSize);
    g_nwSoundSystemInitFlags.usesThread = parameters->startThread;
    g_nwSoundSystemInitFlags.initialized = 1;
}
}
