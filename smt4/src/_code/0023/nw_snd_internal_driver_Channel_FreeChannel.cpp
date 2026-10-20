#include "shard/SndChannel.h"

extern "C" {

void nw_snd_internal_driver_Channel_FreeChannel(SndChannel *channel)
{
    if (channel != NULL) {
        channel->callback = NULL;
        channel->callbackData = 0;
    }
}

} /* extern "C" */
