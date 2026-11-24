#ifndef SOUND_AUDIOSTREAMWORKER_H
#define SOUND_AUDIOSTREAMWORKER_H

#include "shard/W6_W6Match7_WaveBuffer.h"
#include <stddef.h>

class S4Allocator;
struct ThreadStackStorage;

/* The audio stream worker thread's state (global g_soundVoicePool, the same block DeferredTransferState
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
    explicit AudioStreamWorker(s64 initialValue) : initialTimestamp(initialValue) {}
    /* 0x00 */ volatile u8 running;
    /* 0x01 */ u8 mixThreadRequested;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ S4Allocator *allocator;
    /* 0x08 */ AudioStreamSlot *streams;
    /* 0x0C */ void *stackMemory;
    /* 0x10 */ ThreadStackStorage *stackRegion;
    /* 0x14 */ u32 streamCount;
    /* 0x18 */ volatile u32 written;
    /* 0x1C */ volatile u32 read;
    /* 0x20 */ s64 initialTimestamp; /* initialized to -1 by the S4 audio device startup */
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
    offsetof(AudioStreamWorker, mixThreadRequested) == 1 && offsetof(AudioStreamWorker, allocator) == 4 &&
    offsetof(AudioStreamWorker, streams) == 8 && offsetof(AudioStreamWorker, stackMemory) == 0xC &&
    offsetof(AudioStreamWorker, stackRegion) == 0x10 && offsetof(AudioStreamWorker, streamCount) == 0x14 &&
    offsetof(AudioStreamWorker, written) == 0x18 && offsetof(AudioStreamWorker, read) == 0x1C &&
    offsetof(AudioStreamWorker, initialTimestamp) == 0x20 && sizeof(AudioStreamWorker) == 0x28 &&
    offsetof(AudioStreamSlot, writeIndex) == 0x44 && offsetof(AudioStreamSlot, submittedSamples) == 0x58 ? 1 : -1];

#endif
