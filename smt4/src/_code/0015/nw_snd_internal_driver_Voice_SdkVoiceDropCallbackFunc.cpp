#include "common.h"

extern "C" {

int nw_snd_internal_driver_VoiceManager_FreeVoice(u32 manager, void *voice);
extern u32 FUN_002baf30(void);

typedef struct Voice {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ void (*callback)(struct Voice *voice, int status, u32 userData);
    /* 0x10 */ u32 callbackData;
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 unk15;
    /* 0x16 */ u8 unk16;
    /* 0x17 */ u8 unk17;
} Voice;

/* The DSP dropped the voice: clears it, returns it to the voice manager and reports status 3 to its callback. */
void nw_snd_internal_driver_Voice_SdkVoiceDropCallbackFunc(u32 sdkVoice, Voice *voice)
{
    voice->unk00 = 0;
    voice->unk17 = 0;
    voice->unk15 = 0;
    voice->unk08 = 0;
    nw_snd_internal_driver_VoiceManager_FreeVoice(FUN_002baf30(), voice);
    voice->unk14 = 0;
    if (voice->callback != NULL) {
        voice->callback(voice, 3, voice->callbackData);
    }
}

} /* extern "C" */
