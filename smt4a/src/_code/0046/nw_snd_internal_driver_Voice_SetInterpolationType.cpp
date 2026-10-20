#include "shard/Shard0046.h"

extern "C" {

typedef struct VoiceList {
    /* 0x00 */ s32 voices[2];
    /* 0x08 */ s32 count;
} VoiceList;

extern void nn_snd_CTR_Voice_SetInterpolationType(s32 voice, u8 mode);

void nw_snd_internal_driver_Voice_SetInterpolationType(VoiceList *list, s32 type)
{
    s32 i;
    s32 voice;
    u8 mode;

    for (i = 0; i < list->count; i++) {
        voice = list->voices[i];
        if (voice != 0) {
            mode = 0;
            if (type != 0 && (mode = type == 1, !mode) && type == 2) {
                mode = 2;
            }
            nn_snd_CTR_Voice_SetInterpolationType(voice, mode);
        }
    }
}

} /* extern "C" */
