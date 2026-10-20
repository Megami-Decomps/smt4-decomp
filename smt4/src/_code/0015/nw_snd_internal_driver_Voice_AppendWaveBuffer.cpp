#include "common.h"

extern "C" {

int FUN_001565e4(u32 sdkVoice, u32 buffer);

typedef struct Voice {
    /* 0x00 */ u32 sdkVoice[7];
    /* 0x1C */ u32 lastBuffer;
} Voice;

void nw_snd_internal_driver_Voice_AppendWaveBuffer(Voice *voice, s32 index, u32 buffer, s32 setLast)
{
    FUN_001565e4(voice->sdkVoice[index], buffer);
    if (setLast != 0) {
        voice->lastBuffer = buffer;
    }
}

} /* extern "C" */
