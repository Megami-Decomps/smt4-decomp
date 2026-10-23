#ifndef GFX_CHANNELSEQUENCESTATE_H
#define GFX_CHANNELSEQUENCESTATE_H
#include "common.h"
#include <stddef.h>

struct ChannelSequenceDescription {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 active;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ s32 kind;
    /* 0x0C */ s32 index;
    /* 0x10 */ u16 channelMask;
    /* 0x12 */ u8 unk12[6];
};
struct ChannelSequenceEntry {
    /* 0x00 */ u32 channels[14];
    /* 0x38 */ s32 count;
    /* 0x3C */ s32 current;
    /* 0x40 */ f32 frame;
    /* 0x44 */ u8 active;
    /* 0x45 */ u8 unk45[3];
    /* 0x48 */ ChannelSequenceDescription description;
};
struct ChannelSequenceState {
    /* 0x000 */ ChannelSequenceEntry entries[9];
    /* 0x360 */ s32 count;
    /* 0x364 */ s32 primaryCount;
    /* 0x368 */ s32 secondaryCount;
};
typedef char ChannelSequenceLayoutCheck[sizeof(ChannelSequenceDescription) == 0x18 &&
    sizeof(ChannelSequenceEntry) == 0x60 &&
    offsetof(ChannelSequenceState, count) == 0x360 ? 1 : -1];
#endif
