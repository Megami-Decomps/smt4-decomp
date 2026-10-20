#include "shard/SndChannel.h"

extern "C" {

int nw_snd_internal_driver_Voice_SetPriority(void *voice, int priority);

void nw_snd_internal_driver_Channel_NoteOff(SndChannel *channel)
{
    if (channel->unk0CA == 0) {
        if (channel->state != 4) {
            if ((channel->voice != NULL) && (channel->unk0C9 == 0)) {
                nw_snd_internal_driver_Voice_SetPriority(channel->voice, 1);
            }
            channel->state = 4;
        }
        channel->unk0C5 = 0;
    }
}

} /* extern "C" */
