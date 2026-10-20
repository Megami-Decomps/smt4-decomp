#include "shard/SndChannel.h"

extern "C" {

int nw_snd_internal_driver_ChannelManager_Free(void *manager, SndChannel *channel);
int nw_snd_internal_driver_Voice_Free(void *voice);
int nw_snd_internal_driver_Voice_Stop(void *voice);
extern void *FUN_002bafb0(void);

/* Stops and frees the channel's voice, notifies the callback, and returns the channel to its manager. */
void nw_snd_internal_driver_Channel_Stop(SndChannel *channel)
{
    if (channel->voice != NULL) {
        nw_snd_internal_driver_Voice_Stop(channel->voice);
        nw_snd_internal_driver_Voice_Free(channel->voice);
        channel->voice = NULL;
        channel->unk0C5 = 0;
        channel->unk0C6 = 0;
        if (channel->callback != NULL) {
            channel->callback(channel, 0, channel->callbackData);
        }
        if (channel->allocated != 0) {
            channel->allocated = 0;
            nw_snd_internal_driver_ChannelManager_Free(FUN_002bafb0(), channel);
        }
    }
}

} /* extern "C" */
