#include "common.h"

extern "C" {

extern void nn_snd_CTR_Voice_SetState(u32 sdkVoice, int state);

typedef struct Voice {
    /* 0x00 */ u32 sdkVoices[2];
    /* 0x08 */ int count;
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ u8 allocated;
    /* 0x15 */ u8 unk15;
    /* 0x16 */ u8 playing;
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u8 unk18;
} Voice;

void nw_snd_internal_driver_Voice_Stop(Voice *voice)
{
    u32 sdkVoice;
    int i;

    if (voice->playing != 0) {
        i = 0;
        if (i < voice->count) {
            do {
                sdkVoice = voice->sdkVoices[i];
                if (sdkVoice != 0) {
                    nn_snd_CTR_Voice_SetState(sdkVoice, 1);
                }
                i = i + 1;
            } while (i < voice->count);
        }
        voice->playing = 0;
    }
    voice->unk18 = 0;
    voice->unk17 = 0;
    voice->unk15 = 0;
}

} /* extern "C" */
