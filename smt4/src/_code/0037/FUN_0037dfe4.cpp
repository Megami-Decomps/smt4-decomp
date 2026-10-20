#include "common.h"

extern "C" {

int FUN_0023592c(void *track);
int nw_snd_internal_driver_Channel_FreeChannel(int channel);
int nw_snd_internal_driver_Channel_Release(int channel);
extern u8 DAT_00421d54;

typedef struct Track {
    /* 0x000 */ const void *vtbl;
    /* 0x004 */ u8 unk004;
    /* 0x005 */ u8 opened;
    /* 0x006 */ u8 unk006[0xBE];
    /* 0x0C4 */ int channels;
} Track;

/* Destructor of a sequence track: releases and frees its channel list. */
Track *FUN_0037dfe4(Track *track)
{
    int channel;

    track->vtbl = &DAT_00421d54;
    FUN_0023592c(track);
    for (channel = track->channels; channel != 0; channel = *(int *)(channel + 0x138)) {
        if (*(char *)(channel + 0xc6) != 0) {
            nw_snd_internal_driver_Channel_Release(channel);
        }
    }
    for (channel = track->channels; channel != 0; channel = *(int *)(channel + 0x138)) {
        nw_snd_internal_driver_Channel_FreeChannel(channel);
    }
    track->channels = 0;
    track->opened = 0;
    return track;
}

} /* extern "C" */
