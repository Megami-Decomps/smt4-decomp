#include "common.h"

extern "C" {

extern u8 g_dspsndState;
extern u8 nn_snd_CTR_Dspsnd_InitializeChannelParameters(u8 *state, u8 channel);
extern u8 nn_snd_CTR_Dspsnd_SetChannelPlayStop(u8 *state, u8 channel);

typedef struct Channel {
    /* 0x00 */ u32 index;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u8 unk0C;
    /* 0x0D */ u8 state;
} Channel;

/* Applies a play state: 1 stops the channel and reinitializes its parameters, 2 stops it. */
void nn_snd_CTR_VoiceImpl_SetState(Channel *channel, s32 state)
{
    channel->state = state;
    if (state != 0) {
        if (state == 1) {
            nn_snd_CTR_Dspsnd_SetChannelPlayStop(&g_dspsndState, channel->index);
            channel->unk0C = 0;
            nn_snd_CTR_Dspsnd_InitializeChannelParameters(&g_dspsndState, channel->index);
            return;
        }
        if (state == 2) {
            nn_snd_CTR_Dspsnd_SetChannelPlayStop(&g_dspsndState, channel->index);
            return;
        }
    }
}

} /* extern "C" */
