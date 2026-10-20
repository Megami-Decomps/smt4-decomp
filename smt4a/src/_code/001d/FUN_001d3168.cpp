#include "common.h"

extern "C" {

void nn_snd_CTR_Dspsnd_SetChannelPlayStart(u8 *state, u8 channel);
extern u8 g_dspsndState[];

typedef struct Channel {
    /* 0x00 */ u32 index;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u8 playing;
} Channel;

/* Starts the channel on the DSP and marks it playing. */
void FUN_001d3168(Channel *channel)
{
    nn_snd_CTR_Dspsnd_SetChannelPlayStart(g_dspsndState, (u8)channel->index);
    channel->playing = 1;
}

} /* extern "C" */
