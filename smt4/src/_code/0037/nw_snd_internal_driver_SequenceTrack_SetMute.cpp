#include "shard/SndChannel.h"

extern "C" {

int nw_snd_internal_driver_SequenceTrack_UpdateChannelParam(void);
int nw_snd_internal_driver_Channel_FreeChannel(SndChannel *channel);
int nw_snd_internal_driver_Channel_Release(SndChannel *channel);
int nw_snd_internal_driver_Channel_Stop(SndChannel *channel);

typedef struct SequenceTrack {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u8 mute;
    /* 0x49 */ u8 unk49[0x7B];
    /* 0xC4 */ SndChannel *channels;
} SequenceTrack;

/* Mute modes: 0 unmuted, 1 muted, 2 release all channels then mute, 3 free and stop all channels then mute. */
void nw_snd_internal_driver_SequenceTrack_SetMute(SequenceTrack *track, int mode)
{
    SndChannel *channel;

    if (mode == 0) {
        track->mute = 0;
    } else if (mode == 1) {
        track->mute = 1;
    } else {
        if (mode != 2) {
            if (mode != 3) {
                return;
            }
            for (channel = track->channels; channel != NULL; channel = channel->next) {
                nw_snd_internal_driver_Channel_FreeChannel(channel);
                nw_snd_internal_driver_Channel_Stop(channel);
            }
        } else {
            nw_snd_internal_driver_SequenceTrack_UpdateChannelParam();
            for (channel = track->channels; channel != NULL; channel = channel->next) {
                if (channel->unk0C6 != 0) {
                    nw_snd_internal_driver_Channel_Release(channel);
                }
            }
            for (channel = track->channels; channel != NULL; channel = channel->next) {
                nw_snd_internal_driver_Channel_FreeChannel(channel);
            }
        }
        track->channels = NULL;
        track->mute = 1;
    }
}

} /* extern "C" */
