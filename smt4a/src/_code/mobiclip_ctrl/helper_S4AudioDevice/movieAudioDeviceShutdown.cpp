/* NON_MATCHING: svc 0x24 (wrapper) and svc 0x23 match; the shutdown otherwise matches except for scheduling: retail predicates the thread-address load ahead of the branch (ldrne r5) and reloads the address for the clear, compares loop index against the count with the operands the other way round, and loads the stack region straight into r5 for the delete. */
#include "common.h"
#include "mobiclip_ctrl/S4FsReader.h"
#include "nn/os/AddressSpaceManager.h"
#include "nn/Result.h"
#include "nn/svc.h"
#include "mobiclip_ctrl/helper_S4AudioDevice.h"
#include "sys/ResultReport.h"

/* The memory mapped for the mixer thread's stack: its destructor unmaps it, and the block goes
 * back through the engine's operator delete. */
struct StackRegion : AddressSpaceRegion {
    ~StackRegion();
    static void operator delete(void *block);
};

/* One voice slot of the movie audio device (0x70 bytes). */
struct AudioVoiceSlot {
    u32 voice;   // 0x00: nn::snd::CTR::Voice, 0 when free
    void *data;  // 0x04: the buffer the voice plays from
    u8 unk08[0x68];
};

/* The movie audio device. */
struct AudioDevice {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 threadRunning;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ S4Allocator *allocator;
    /* 0x08 */ AudioVoiceSlot *voices;
    /* 0x0c */ void *stackMemory;
    /* 0x10 */ StackRegion *stackRegion;
    /* 0x14 */ u32 voiceCount;
};

/* The mixer thread's kernel handle and whether it has been joined (nn::os::Thread). */
struct AudioThread {
    u32 handle;  // 0x00
    u8 joined;   // 0x04
    u8 unk05[3];
};

/* The lock around the voices (nn::os::CriticalSection). */
struct AudioLock {
    u32 unk00;
    u32 unk04;
    s32 owner;  // 0x08: reset to -1 once the device is gone
};

extern "C" {
extern AudioDevice g_soundVoicePool;
extern AudioThread g_threadRecordA;
extern AudioLock g_soundVoiceCriticalSection;

void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void nn_snd_CTR_Voice_SetState(u32 voice, s32 state);
void nn_snd_CTR_FreeVoice(u32 voice);
s32 svcWaitSynchronization1(u32 handle, s64 timeout);
void nn_os_Thread_FinalizeImpl(u32 *thread);
void addressSpaceRegionFree(AddressSpaceRegion *region);
void asdOperatorDelete(void *block);
void asdMemFree(void *block);
u32 dspUnloadIdleComponent(void);
void dspCallbackShutdown(void);
}

inline StackRegion::~StackRegion()
{
    addressSpaceRegionFree(this);
}

inline void StackRegion::operator delete(void *block)
{
    asdOperatorDelete(block);
}

/* Frees the voice and the buffer of one slot. */
static void audioFreeVoiceSlot(s32 index)
{
    if (index >= 0 && (u32)index < g_soundVoicePool.voiceCount) {
        nn_os_CriticalSection_Enter(&g_soundVoiceCriticalSection);
        AudioVoiceSlot *slot = &g_soundVoicePool.voices[index];
        if (slot->voice != 0) {
            nn_snd_CTR_FreeVoice(slot->voice);
            slot->voice = 0;
        }
        if (slot->data != NULL) {
            g_soundVoicePool.allocator->release(slot->data);
            slot->data = NULL;
        }
        nn_os_CriticalSection_Leave(&g_soundVoiceCriticalSection);
    }
}

/* Shuts the movie audio device down: stops every voice, joins the mixer thread, frees its stack,
 * the voice slots and the DSP component. */
extern "C" void movieAudioDeviceShutdown(void)
{
    if (g_soundVoicePool.allocator == NULL) {
        return;
    }
    nn_os_CriticalSection_Enter(&g_soundVoiceCriticalSection);
    for (u32 i = 0; g_soundVoicePool.voiceCount > i; ++i) {
        if (g_soundVoicePool.voices[i].voice != 0) {
            nn_snd_CTR_Voice_SetState(g_soundVoicePool.voices[i].voice, 1);
        }
    }
    nn_os_CriticalSection_Leave(&g_soundVoiceCriticalSection);
    g_soundVoicePool.active = 0;
    if (g_soundVoicePool.threadRunning != 0) {
        u32 handle = g_threadRecordA.handle;
        s32 result = svcWaitSynchronization1(handle, -1);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            resultHandleFailure(result, failed);
        }
        g_threadRecordA.joined = 1;
        nn_os_Thread_FinalizeImpl(&g_threadRecordA.handle);
        if (g_threadRecordA.handle != 0) {
            svcCloseHandle(g_threadRecordA.handle);
            g_threadRecordA.handle = 0;
        }
    }
    addressSpaceRegionFree(g_soundVoicePool.stackRegion);
    StackRegion *region = g_soundVoicePool.stackRegion;
    delete region;
    g_soundVoicePool.stackRegion = NULL;
    asdMemFree(g_soundVoicePool.stackMemory);
    g_soundVoicePool.stackMemory = NULL;
    for (u32 i = 0; i < g_soundVoicePool.voiceCount; ++i) {
        audioFreeVoiceSlot(i);
    }
    g_soundVoiceCriticalSection.owner = -1;
    g_soundVoicePool.allocator->release(g_soundVoicePool.voices);
    g_soundVoicePool.allocator = NULL;
    sndSystemShutdown();
    dspUnloadIdleComponent();
    dspCallbackShutdown();
}
