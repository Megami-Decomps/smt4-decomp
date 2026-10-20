#include "common.h"

extern "C" {

void nn_snd_CTR_Voice_SetState(u32 voice, s32 state);

typedef struct Voice {
    /* 0x00 */ u32 channels[2];
    /* 0x08 */ s32 channelCount;
    /* 0x0C */ u8 unk0C[9];
    /* 0x15 */ u8 started;
    /* 0x16 */ u8 playing;
    /* 0x17 */ u8 paused;
    /* 0x18 */ u8 pending;
} Voice;

/* Stops the voice: puts each of its channels into state 1 if it was playing, then clears the playing, paused, pending and started flags. */
void nw_snd_internal_driver_Voice_Stop(Voice *voice)
{
    s32 i;

    if (voice->playing != 0) {
        i = 0;
        if (i < voice->channelCount) {
            do {
                if (voice->channels[i] != 0) {
                    nn_snd_CTR_Voice_SetState(voice->channels[i], 1);
                }
                i = i + 1;
            } while (i < voice->channelCount);
        }
        voice->playing = 0;
    }
    voice->pending = 0;
    voice->paused = 0;
    voice->started = 0;
}

} /* extern "C" */
