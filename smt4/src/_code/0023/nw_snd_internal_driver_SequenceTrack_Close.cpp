#include "shard/SndChannel.h"

extern "C" {

int FUN_0023592c(void *track);
int nw_snd_internal_driver_Channel_FreeChannel(SndChannel *channel);
int nw_snd_internal_driver_Channel_Release(SndChannel *channel);

typedef struct SequenceTrack {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 opened;
    /* 0x06 */ u8 unk06[0xBE];
    /* 0xC4 */ SndChannel *channels;
} SequenceTrack;

void nw_snd_internal_driver_SequenceTrack_Close(SequenceTrack *track)
{
    SndChannel *channel;

    FUN_0023592c(track);
    for (channel = track->channels; channel != NULL; channel = channel->next) {
        if (channel->unk0C6 != 0) {
            nw_snd_internal_driver_Channel_Release(channel);
        }
    }
    for (channel = track->channels; channel != NULL; channel = channel->next) {
        nw_snd_internal_driver_Channel_FreeChannel(channel);
    }
    track->channels = NULL;
    track->opened = 0;
}

} /* extern "C" */
