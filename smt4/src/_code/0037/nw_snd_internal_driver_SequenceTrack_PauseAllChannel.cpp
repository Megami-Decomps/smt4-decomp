#include "shard/SndChannel.h"

extern "C" {

int nw_snd_internal_driver_Voice_Pause(void *voice, u32 pause);

typedef struct SequenceTrack {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u8 mute;
    /* 0x49 */ u8 unk49[0x7B];
    /* 0xC4 */ SndChannel *channels;
} SequenceTrack;

void nw_snd_internal_driver_SequenceTrack_PauseAllChannel(SequenceTrack *track, bool pause)
{
    SndChannel *channel;

    for (channel = track->channels; channel != NULL; channel = channel->next) {
        if ((channel->unk0C6 != 0) && ((channel->unk0C5 != 0) != pause)) {
            channel->unk0C5 = pause;
            nw_snd_internal_driver_Voice_Pause(channel->voice, pause);
        }
    }
}

} /* extern "C" */
