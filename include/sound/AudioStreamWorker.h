#ifndef SOUND_AUDIOSTREAMWORKER_H
#define SOUND_AUDIOSTREAMWORKER_H

#include "shard/W6_W6Match7_WaveBuffer.h"
#include <stddef.h>

/* The audio stream worker thread's state (global DAT_0044d0f8, the same block DeferredTransferState
 * and SoundVoicePool view). The worker polls the flag and ring cursors while other threads update them,
 * so those fields are volatile: retail reloads them after its own stores and between tests. */
struct AudioStreamSlot {
    u32 voice; // 0x00
    WaveBuffer *buffers; // 0x04
    u8 unk08[0x30];
    u32 capacity; // 0x38
    u32 unk3c;
    s32 channels; // 0x40
    volatile u32 writeIndex; // 0x44
    volatile u32 readIndex; // 0x48
    volatile u32 queued; // 0x4c
    u32 pending; // 0x50
    u32 unk54;
    volatile u64 submittedSamples; // 0x58
    volatile s64 consumedSamples; // 0x60
    u8 unk68[8];
};
struct AudioStreamWorker {
    volatile u8 running; // 0x00
    u8 unk01[7];
    AudioStreamSlot *streams; // 0x08
    u8 unk0c[8];
    u32 streamCount; // 0x14
    volatile u32 written; // 0x18
    volatile u32 read; // 0x1c
};
struct AudioStreamRequest {
    AudioStreamSlot *stream;
    u8 *data;
    u32 bytes;
};
typedef char CheckStreamSlotSize[sizeof(AudioStreamSlot) == 0x70 ? 1 : -1];
typedef char CheckWaveBufferSize[sizeof(WaveBuffer) == 0x18 ? 1 : -1];
typedef char CheckWaveBufferStatus[offsetof(WaveBuffer, playback.status) == 0x11 ? 1 : -1];

typedef char AudioStreamWorkerLayoutCheck[
    offsetof(AudioStreamWorker, streams) == 8 && offsetof(AudioStreamWorker, streamCount) == 0x14 &&
    offsetof(AudioStreamWorker, written) == 0x18 && offsetof(AudioStreamWorker, read) == 0x1C &&
    offsetof(AudioStreamSlot, writeIndex) == 0x44 && offsetof(AudioStreamSlot, submittedSamples) == 0x58 ? 1 : -1];

#endif
