#include "common.h"

extern "C" {

int FUN_00360110(int sdkVoice, int priority);
int nw_snd_internal_driver_VoiceManager_ChangeVoicePriority(u32 manager, void *voice);
extern u32 FUN_002baf30(void);

typedef struct Voice {
    /* 0x00 */ int sdkVoices[2];
    /* 0x08 */ int count;
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 unk15;
    /* 0x16 */ u8 unk16;
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ u16 dirtyFlags;
    /* 0x22 */ u8 unk22[0x1E];
    /* 0x40 */ int priority;
} Voice;

void nw_snd_internal_driver_Voice_SetPriority(Voice *voice, u32 priority)
{
    u32 manager;
    int sdkVoice;
    int i;

    voice->priority = priority;
    manager = FUN_002baf30();
    nw_snd_internal_driver_VoiceManager_ChangeVoicePriority(manager, voice);
    if ((voice->priority == 1) && (i = 0, 0 < voice->count)) {
        do {
            sdkVoice = voice->sdkVoices[i];
            if (sdkVoice != 0) {
                FUN_00360110(sdkVoice, 1);
            }
            i = i + 1;
        } while (i < voice->count);
    }
}

} /* extern "C" */
