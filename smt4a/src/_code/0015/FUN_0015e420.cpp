/* NON_MATCHING: query stack slots, preserved registers, and required-buffer-size comparison differ. */
#include "sound/StreamSetup.h"

extern "C" {
s32 FUN_001739c4(void);
u32 FUN_00188ca4(void);
u32 FUN_00188c94(void);
s32 FUN_00173f38(StreamSetupState *state, u32 soundId, u32 mode, u32 options, u32 userData);
s32 FUN_001784b0(u32 soundId, StreamSetupInfo *info);
void nw_snd_internal_driver_StreamBufferPool_Initialize(void *pool, u32 buffer, u32 size, u32 channels);
}

extern "C" {
// Prepare a stream using a caller-owned buffer inside the active sound memory region.
u32 FUN_0015e420(StreamSetupState *state, u32 soundId, u32 callback, u32 mode,
                 u32 options, u32 buffer, u32 size, u32 userData)
{
    if (!FUN_001739c4())
        return 0;
    if (size != 0) {
        u32 start = FUN_00188ca4();
        u32 length = FUN_00188c94();
        if (start > buffer)
            return 0;
        if (buffer + size > start + length)
            return 0;
    }
    if (!FUN_00173f38(state, soundId, mode, options, userData))
        return 0;

    StreamSetupInfo requirements;
    u32 channels = 0;
    if (FUN_001784b0(soundId, &requirements))
        channels = requirements.channels;
    if (channels * 0xA000 > size)
        return 0;

    StreamSetupInfo poolInfo;
    u32 poolChannels = 0;
    if (FUN_001784b0(soundId, &poolInfo))
        poolChannels = poolInfo.channels;
    nw_snd_internal_driver_StreamBufferPool_Initialize(state->pool, buffer, size, poolChannels);
    state->buffer = state->inlineBuffer;
    state->callback = callback;
    return 1;
}
}
