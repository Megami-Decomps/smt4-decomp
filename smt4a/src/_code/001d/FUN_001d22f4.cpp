#include "shard/DriverVoice.h"

extern "C" {

void nw_snd_internal_driver_Voice_AppendWaveBuffer(DriverVoice *voice, s32 channel, u32 buffer, s32 flag);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ DriverVoice *voice;
} Holder;

/* Appends the wave buffer to the held voice's channel 0, if there is a voice. */
void FUN_001d22f4(Holder *object, u32 buffer, u32 flag)
{
    if (object->voice != NULL) {
        nw_snd_internal_driver_Voice_AppendWaveBuffer(object->voice, 0, buffer, flag);
        return;
    }
}

} /* extern "C" */
