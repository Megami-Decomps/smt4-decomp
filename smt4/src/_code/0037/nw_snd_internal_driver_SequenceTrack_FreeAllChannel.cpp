#include "shard/SndChannel.h"

extern "C" {

int nw_snd_internal_driver_Channel_FreeChannel(SndChannel *channel);

typedef struct SequenceTrack {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u8 mute;
    /* 0x49 */ u8 unk49[0x7B];
    /* 0xC4 */ SndChannel *channels;
} SequenceTrack;

void nw_snd_internal_driver_SequenceTrack_FreeAllChannel(SequenceTrack *track)
{
    SndChannel *channel;

    for (channel = track->channels; channel != NULL; channel = channel->next) {
        nw_snd_internal_driver_Channel_FreeChannel(channel);
    }
    track->channels = NULL;
}

} /* extern "C" */
