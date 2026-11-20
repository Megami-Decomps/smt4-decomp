#include "sound/StreamSetup.h"

extern "C" {
s32 FUN_0012f59c(void);
s32 nw_snd_SoundArchivePlayer_SetupMram(StreamSetupState *state, u32 soundId, u32 mode, u32 options);
s32 nw_snd_SoundArchive_ReadSoundArchivePlayerInfo(u32 soundId, StreamSetupInfo *info);
u32 nnosGetHeapSize(void);
u32 nnosGetHeapBase(void);
s32 nw_snd_internal_driver_StreamBufferPool_Initialize(void *pool, void *buffer, u32 size, u32 channels);
}

/* The stream buffer size the sound's streams need: the body of
 * nw_snd_SoundArchivePlayer_GetRequiredStreamBufferSize, 0xa000 bytes per stream channel. */
static __inline u32 streamRequiredSize(u32 soundId)
{
    s32 channels = 0;
    StreamSetupInfo requirements;
    if (nw_snd_SoundArchive_ReadSoundArchivePlayerInfo(soundId, &requirements)) {
        channels = requirements.channels;
    }
    return channels * 0xa000;
}

/* Checks the buffer against the archive's stream needs and initialises the stream buffer pool. */
static __inline bool streamBufferSetup(StreamSetupState *state, u32 soundId, void *buffer, u32 size)
{
    if (size < streamRequiredSize(soundId)) {
        return false;
    }
    StreamSetupInfo poolInfo;
    s32 poolChannels = 0;
    if (nw_snd_SoundArchive_ReadSoundArchivePlayerInfo(soundId, &poolInfo)) {
        poolChannels = poolInfo.channels;
    }
    nw_snd_internal_driver_StreamBufferPool_Initialize(state->pool, buffer, size, poolChannels);
    return true;
}

extern "C" {
// Prepare a stream using a caller-owned buffer inside the heap.
u32 nw_snd_SoundArchivePlayer_Initialize(StreamSetupState *state, u32 soundId, u32 callback, u32 mode, u32 options,
                 void *buffer, u32 size)
{
    if (!FUN_0012f59c()) {
        return 0;
    }
    if (size != 0) {
        u32 bufferAddr = reinterpret_cast<u32>(buffer);
        u32 start = nnosGetHeapBase();
        u32 end = start + nnosGetHeapSize();
        if (bufferAddr < start) {
            return 0;
        }
        if (bufferAddr + size > end) {
            return 0;
        }
    }
    if (!nw_snd_SoundArchivePlayer_SetupMram(state, soundId, mode, options)) {
        return 0;
    }
    if (!streamBufferSetup(state, soundId, buffer, size)) {
        return 0;
    }
    state->buffer = state->inlineBuffer;
    state->callback = callback;
    return 1;
}
}
