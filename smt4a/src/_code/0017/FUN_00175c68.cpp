#include "common.h"

extern "C" {

typedef struct Voice Voice;
typedef void (*VoiceCallback)(Voice *voice, s32 reason, u32 userData);

struct Voice {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u8 unk004[0x134];
    /* 0x138 */ u8 active;
    /* 0x139 */ u8 playing;
    /* 0x13A */ u8 queued;
    /* 0x13B */ u8 unk13B[0x65];
    /* 0x1A0 */ VoiceCallback callback;
    /* 0x1A4 */ u32 userData;
    /* 0x1A8 */ s32 driverVoice;
};

void FUN_001b2040(u32 queue, Voice *voice);
u32 FUN_00191548(void);
void nw_snd_internal_driver_Voice_Free(s32 driverVoice);
void nw_snd_internal_driver_Voice_Stop(s32 driverVoice);

/* Releases a playing voice: stops and frees its driver voice, clears its state, notifies the callback (reason 0) and, if it was queued, removes it from the queue. */
void FUN_00175c68(Voice *voice)
{
    if (voice->driverVoice != 0) {
        nw_snd_internal_driver_Voice_Stop(voice->driverVoice);
        nw_snd_internal_driver_Voice_Free(voice->driverVoice);
        voice->driverVoice = 0;
        voice->active = 0;
        voice->playing = 0;
        if (voice->callback != NULL) {
            voice->callback(voice, 0, voice->userData);
        }
        if (voice->queued != 0) {
            voice->queued = 0;
            FUN_001b2040(FUN_00191548(), voice);
            return;
        }
    }
}

} /* extern "C" */
