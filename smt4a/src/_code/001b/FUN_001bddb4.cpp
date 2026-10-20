#include "common.h"

extern "C" {

void nn_snd_CTR_Dspsnd_InitializeChannelParameters(u8 *state, u8 channel);
void nn_snd_CTR_Dspsnd_SetChannelPlayStop(u8 *state, u8 channel);
extern u8 g_dspsndState[];

typedef struct Channel {
    /* 0x00 */ u32 index;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u8 playing;
    /* 0x0D */ u8 mode;
} Channel;

/* Sets the channel mode: mode 1 stops the channel and re-initialises its parameters, mode 2 only stops it. */
void FUN_001bddb4(Channel *channel, s32 mode)
{
    channel->mode = (u8)mode;
    if (mode != 0) {
        if (mode == 1) {
            nn_snd_CTR_Dspsnd_SetChannelPlayStop(g_dspsndState, (u8)channel->index);
            channel->playing = 0;
            nn_snd_CTR_Dspsnd_InitializeChannelParameters(g_dspsndState, (u8)channel->index);
            return;
        }
        if (mode == 2) {
            nn_snd_CTR_Dspsnd_SetChannelPlayStop(g_dspsndState, (u8)channel->index);
            return;
        }
    }
}

} /* extern "C" */
