#include "common.h"

extern "C" {

int nw_snd_internal_driver_Voice_AppendWaveBuffer(void *voice, int index, u32 buffer, u32 flag);

typedef struct StreamChannel {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ void *voice;
} StreamChannel;

void nw_snd_internal_driver_StreamChannel_AppendWaveBuffer(StreamChannel *channel, u32 buffer, u32 flag)
{
    if (channel->voice != NULL) {
        nw_snd_internal_driver_Voice_AppendWaveBuffer(channel->voice, 0, buffer, flag);
    }
}

} /* extern "C" */
