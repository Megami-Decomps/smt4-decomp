/* nw::snd::internal::driver::Channel: a voice slot linked into its sequence track's channel list. */
#ifndef SHARD_SNDCHANNEL_H
#define SHARD_SNDCHANNEL_H

#include "common.h"

struct SndChannel;
typedef void (*ChannelCallback)(struct SndChannel *channel, int status, u32 userData);

typedef struct SndChannel {
    /* 0x0000 */ u32 unk000;
    /* 0x0004 */ u8 unk0004[0x8C];
    /* 0x0090 */ u8 state;
    /* 0x0091 */ u8 unk0091[0x34];
    /* 0x00C5 */ u8 unk0C5;
    /* 0x00C6 */ u8 unk0C6;
    /* 0x00C7 */ u8 allocated;
    /* 0x00C8 */ u8 unk00C8[0x1];
    /* 0x00C9 */ u8 unk0C9;
    /* 0x00CA */ u8 unk0CA;
    /* 0x00CB */ u8 unk00CB[0x61];
    /* 0x012C */ ChannelCallback callback;
    /* 0x0130 */ u32 callbackData;
    /* 0x0134 */ void *voice;
    /* 0x0138 */ struct SndChannel *next;
} SndChannel;

#endif
