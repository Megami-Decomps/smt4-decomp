/* NON_MATCHING: readable rewrite of the stream voice pump; retail copies the request words through VFP registers (vldr/vstr, vpush d8), uses ldrd/strd for the voice indices and a single state-block base register, none of which the build reproduces. */
#include "common.h"

// One wave buffer of a stream voice (0x18 bytes, nn::snd::CTR::WaveBuffer).
struct StreamWaveBuffer {
    /* 0x00 */ u32 data;
    /* 0x04 */ u32 size;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u8 queued;
    /* 0x11 */ u8 status;  // 3: finished playing
    /* 0x12 */ u8 unk12[6];
};

// A streaming voice (0x70 bytes).
struct StreamVoice {
    /* 0x00 */ u32 voice;               // 0: slot unused
    /* 0x04 */ StreamWaveBuffer *buffers;
    /* 0x08 */ u8 unk08[0x30];
    /* 0x38 */ u32 bufferCount;
    /* 0x3c */ u8 unk3c[4];
    /* 0x40 */ u32 chunkFrames;
    /* 0x44 */ u32 writeIndex;
    /* 0x48 */ u32 readIndex;
    /* 0x4c */ u32 queuedCount;
    /* 0x50 */ u32 freeCount;
    /* 0x54 */ u8 unk54[4];
    /* 0x58 */ u64 sampleCount;         // samples handed to the voice
    /* 0x60 */ u64 playedCount;         // samples the voice has played
    /* 0x68 */ u8 unk68[8];
};

// A queued request to feed a voice (0xc bytes).
struct StreamRequest {
    StreamVoice *voice;
    u32 data;
    u32 samples;
};

// The stream layer's state block.
struct StreamState {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 active;                 // the stream layer is active
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ StreamVoice *voices;       // voice table
    /* 0x0c */ u8 unk0c[8];
    /* 0x14 */ u32 voiceCount;
    /* 0x18 */ u32 requestsQueued;        // requests queued so far
    /* 0x1c */ u32 requestsHandled;       // requests handled so far
};

extern "C" {
extern StreamState DAT_005880d0;
extern StreamRequest DAT_00618524[0x40];
extern u8 DAT_00618518;               // critical section

void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void nn_snd_CTR_InitializeWaveBuffer(StreamWaveBuffer *buffer);
void FUN_001c76b8(void);
void FUN_001c7c44(u32 voice, StreamWaveBuffer *buffer);
void FUN_001cd5ac(void);
u32 FUN_00439e0c(u32 samples, u32 flag, u32 chunkFrames);

// Retires the wave buffers the voices have finished, then feeds the queued requests into the voices' free buffers.
void FUN_00422c48(void)
{
    nn_os_CriticalSection_Enter(&DAT_00618518);
    if (DAT_005880d0.active != 0) {
        FUN_001cd5ac();
    }
    u32 count = DAT_005880d0.voiceCount;
    for (u32 i = 0; i < count; i++) {
        StreamVoice *voice = &DAT_005880d0.voices[i];
        if (voice->voice != 0 && voice->queuedCount != 0 && voice->buffers[voice->readIndex].status == 3) {
            s32 size = (s32)voice->buffers[voice->readIndex].size;
            voice->playedCount += (s64)size;
            voice->queuedCount--;
            voice->readIndex++;
            if (voice->readIndex == voice->bufferCount) {
                voice->readIndex = 0;
            }
        }
    }
    while (DAT_005880d0.requestsHandled < DAT_005880d0.requestsQueued) {
        StreamRequest *request = &DAT_00618524[DAT_005880d0.requestsHandled & 0x3f];
        StreamVoice *voice = request->voice;
        if (voice != NULL) {
            if (voice->bufferCount <= voice->queuedCount) {
                break;
            }
            u32 data = DAT_00618524[DAT_005880d0.requestsHandled & 0x3f].data;
            u32 samples = DAT_00618524[DAT_005880d0.requestsHandled & 0x3f].samples;
            StreamWaveBuffer *buffer = &voice->buffers[voice->writeIndex];
            nn_snd_CTR_InitializeWaveBuffer(buffer);
            buffer->data = data;
            u32 size = FUN_00439e0c(samples, 1, voice->chunkFrames);
            voice->sampleCount += size;
            buffer->size = size;
            buffer->queued = 0;
            FUN_001c7c44(voice->voice, buffer);
            voice->queuedCount++;
            voice->writeIndex++;
            if (voice->writeIndex == voice->bufferCount) {
                voice->writeIndex = 0;
            }
            voice->freeCount--;
        }
        DAT_005880d0.requestsHandled++;
    }
    if (DAT_005880d0.active != 0) {
        FUN_001c76b8();
    }
    nn_os_CriticalSection_Leave(&DAT_00618518);
}
}
