#include "common.h"

extern "C" {

extern u8 g_dspsndState;
extern u8 nn_snd_CTR_Dspsnd_SetChannelPlayStart(u8 *state, u8 channel);

typedef struct Channel {
    /* 0x00 */ u32 index;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u8 playing;
} Channel;

void FUN_0015f000(Channel *channel)
{
    nn_snd_CTR_Dspsnd_SetChannelPlayStart(&g_dspsndState, channel->index);
    channel->playing = 1;
}

} /* extern "C" */
