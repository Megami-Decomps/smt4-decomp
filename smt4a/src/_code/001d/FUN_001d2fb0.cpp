#include "common.h"

extern "C" {

void nn_snd_CTR_Dspsnd_SetChannelSyncCount(u8 *state, u8 channel, s16 count);
extern u8 g_dspsndState[];

typedef struct Channel {
    /* 0x00 */ u32 index;
    /* 0x04 */ s16 syncCount;
    /* 0x06 */ u8 unk06[0x66];
    /* 0x6C */ u16 flags;           /* bit 15: sync count pending */
} Channel;

/* Sends the channel's pending sync count to the DSP and clears the pending bit. */
void FUN_001d2fb0(Channel *channel)
{
    if ((channel->flags & 0x8000) != 0) {
        nn_snd_CTR_Dspsnd_SetChannelSyncCount(g_dspsndState, (u8)channel->index, channel->syncCount);
        channel->flags = channel->flags & 0x7FFF;
    }
}

} /* extern "C" */
