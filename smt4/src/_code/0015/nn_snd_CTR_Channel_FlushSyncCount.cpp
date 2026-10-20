#include "common.h"

extern "C" {

extern u8 g_dspsndState;
extern u8 nn_snd_CTR_Dspsnd_SetChannelSyncCount(u8 *state, u8 channel, s16 count);

typedef struct Channel {
    /* 0x00 */ u32 index;
    /* 0x04 */ s16 syncCount;
    /* 0x06 */ u8 unk06[0x66];
    /* 0x6C */ u16 pending;      /* bit 0x8000: syncCount needs sending */
} Channel;

void nn_snd_CTR_Channel_FlushSyncCount(Channel *channel)
{
    if ((channel->pending & 0x8000) != 0) {
        nn_snd_CTR_Dspsnd_SetChannelSyncCount(&g_dspsndState, channel->index, channel->syncCount);
        channel->pending = channel->pending & 0x7fff;
    }
}

} /* extern "C" */
