#include "common.h"

extern "C" {

int nn_snd_CTR_Voice_SetInterpolationType(int sdkVoice, int type);

typedef struct Voice {
    /* 0x0 */ int sdkVoices[2];
    /* 0x8 */ int count;
} Voice;

/* Applies the interpolation type (0 -> 0, 1 -> 1, 2 -> 2, else 0) to every SDK voice. */
void nw_snd_internal_driver_Voice_SetInterpolationType(Voice *voice, int type)
{
    int sdkVoice;
    int i;
    u8 value;

    i = 0;
    if (i < voice->count) {
        do {
            sdkVoice = voice->sdkVoices[i];
            if (sdkVoice != 0) {
                value = 0;
                if (((type != 0) && (value = type == 1, !value)) && (type == 2)) {
                    value = 2;
                }
                nn_snd_CTR_Voice_SetInterpolationType(sdkVoice, value);
            }
            i = i + 1;
        } while (i < voice->count);
    }
}

} /* extern "C" */
