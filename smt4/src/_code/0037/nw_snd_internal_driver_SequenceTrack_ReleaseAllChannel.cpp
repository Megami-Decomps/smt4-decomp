#include "shard/SndChannel.h"

extern "C" {

int FUN_002358b4(u8 *state, u32 value);
int FUN_0023592c(void *track);
int nw_snd_internal_driver_Channel_Release(SndChannel *channel);

typedef struct SequenceTrack {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u8 mute;
    /* 0x49 */ u8 unk49[0x7B];
    /* 0xC4 */ SndChannel *channels;
} SequenceTrack;

void nw_snd_internal_driver_SequenceTrack_ReleaseAllChannel(SequenceTrack *track, u32 release)
{
    SndChannel *channel;

    FUN_0023592c(track);
    for (channel = track->channels; channel != NULL; channel = channel->next) {
        if (channel->unk0C6 != 0) {
            if ((int)release >= 0) {
                FUN_002358b4(&channel->state, release & 0xff);
            }
            nw_snd_internal_driver_Channel_Release(channel);
        }
    }
}

} /* extern "C" */
