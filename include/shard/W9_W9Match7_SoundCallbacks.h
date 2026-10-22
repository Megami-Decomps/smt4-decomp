#ifndef SHARD_W9_W9MATCH7_SOUNDCALLBACKS_H
#define SHARD_W9_W9MATCH7_SOUNDCALLBACKS_H
#include "common.h"
#include <stddef.h>

struct SoundCallbackState {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 active;
    /* 0x02 */ u8 pending;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u16 readIndex;
    /* 0x06 */ u16 writeIndex;
    /* 0x08 */ u32 *resource;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u32 resourceWord;
    /* 0x14 */ u32 openedResource;
    /* 0x18 */ u32 count;
    /* 0x1C */ u32 position;
};

struct SoundCallbackBanks {
    /* 0x00 */ u32 owners[8];
    /* 0x20 */ u32 arguments[8];
    /* 0x40 */ u32 functions[8];
};

typedef char SoundCallbackStateOffsetsCheck[
    offsetof(SoundCallbackState, resource) == 8 &&
    offsetof(SoundCallbackState, resourceWord) == 0x10 &&
    offsetof(SoundCallbackState, openedResource) == 0x14 &&
    sizeof(SoundCallbackState) == 0x20 ? 1 : -1];
typedef char SoundCallbackBanksSizeCheck[sizeof(SoundCallbackBanks) == 0x60 ? 1 : -1];
#endif
