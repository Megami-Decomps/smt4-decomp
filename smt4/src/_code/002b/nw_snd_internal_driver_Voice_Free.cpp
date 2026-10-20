#include "common.h"

extern "C" {

int sndVoiceFree(u32 sdkVoice);
int nw_snd_internal_driver_VoiceManager_FreeVoice(u32 manager, void *voice);
extern u32 FUN_002baf30(void);

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

void nw_snd_internal_driver_Voice_Free(Voice *voice)
{
    u32 manager;
    int i;

    if (voice->allocated != 0) {
        i = 0;
        if (i < voice->count) {
            do {
                if (voice->sdkVoices[i] != 0) {
                    sndVoiceFree(voice->sdkVoices[i]);
                    voice->sdkVoices[i] = 0;
                }
                i = i + 1;
            } while (i < voice->count);
        }
        voice->count = 0;
        manager = FUN_002baf30();
        nw_snd_internal_driver_VoiceManager_FreeVoice(manager, voice);
        voice->allocated = 0;
    }
}

} /* extern "C" */
