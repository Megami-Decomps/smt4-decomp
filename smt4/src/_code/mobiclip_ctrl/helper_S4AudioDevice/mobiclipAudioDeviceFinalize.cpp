/* NON_MATCHING: retail inlines CloseHandle SVC 0x23; honest C calls the existing svcCloseHandle wrapper. RAII lock registers and inlined range guards also differ. */
#include "shard/S3AsdMemInit.h"
#include "shard/W6_W6Match1_CriticalSection.h"
#include "shard/W6_W6Match3_ThreadHandleState.h"

struct MovieAudioAllocator;
struct MovieAudioAllocatorVtable {
    void *unk00;
    void (*release)(MovieAudioAllocator *, void *);
};
struct MovieAudioAllocator { const MovieAudioAllocatorVtable *vtable; };
struct MovieAudioVoice { u32 handle; void *buffer; u8 unk08[0x68]; };
struct MovieAudioState {
    u8 running;
    u8 unk01[3];
    MovieAudioAllocator *allocator;
    MovieAudioVoice *voices;
    void *buffer, *threadObject;
    u32 voiceCount;
};
extern "C" {
extern MovieAudioState DAT_0044d0f8;
extern AsdCriticalSectionInit DAT_004c40f8;
extern ThreadHandleState DAT_0044d128;
void nn_snd_CTR_Voice_SetState(u32, u32);
s32 FUN_002c40f8(s32 *, const u32 *, s32, u32, s64);
void FUN_002c526c(u32);
void nn_os_Thread_FinalizeImpl(ThreadHandleState *);
void svcCloseHandle(u32);
void FUN_002c3f5c(void *);
void asdMemFreeNonNull(void *);
void asdMemFree(void *);
void sndVoiceFree(u32);
void FUN_0010ff4c();
void dspComponentUnload();
void FUN_0010fc90();

void mobiclipAudioDeviceFinalize()
{
    MovieAudioState *state = &DAT_0044d0f8;
    if (!state->allocator)
        return;
    {
        ScopedCriticalLock lock(*(CriticalSection *)&DAT_004c40f8);
        for (u32 i = 0; i < state->voiceCount; ++i) {
            if (state->voices[i].handle)
                nn_snd_CTR_Voice_SetState(state->voices[i].handle, 1);
        }
    }
    state->running = 0;
    u32 handle = DAT_0044d128.handle;
    s32 index;
    s32 result = FUN_002c40f8(&index, &handle, 1, 0, -1);
    if (result < 0)
        FUN_002c526c(result);
    DAT_0044d128.unk04 = 1; // Finalization requested.
    nn_os_Thread_FinalizeImpl(&DAT_0044d128);
    if (DAT_0044d128.handle) {
        svcCloseHandle(DAT_0044d128.handle);
        DAT_0044d128.handle = 0;
    }
    FUN_002c3f5c(state->threadObject);
    void *thread = state->threadObject;
    if (thread) {
        FUN_002c3f5c(thread);
        asdMemFreeNonNull(thread);
    }
    state->threadObject = NULL;
    asdMemFree(state->buffer);
    state->buffer = NULL;
    for (u32 i = 0; i < state->voiceCount; ++i) {
        ScopedCriticalLock lock(*(CriticalSection *)&DAT_004c40f8);
        MovieAudioVoice *voice = &state->voices[i];
        if (voice->handle) {
            sndVoiceFree(voice->handle);
            voice->handle = 0;
        }
        if (voice->buffer) {
            state->allocator->vtable->release(state->allocator, voice->buffer);
            voice->buffer = NULL;
        }
    }
    DAT_004c40f8.owner = -1;
    state->allocator->vtable->release(state->allocator, state->voices);
    state->allocator = NULL;
    FUN_0010ff4c();
    dspComponentUnload();
    FUN_0010fc90();
}
}
