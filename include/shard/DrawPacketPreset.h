#ifndef SHARD_DRAWPACKETPRESET_H
#define SHARD_DRAWPACKETPRESET_H

#include "shard/W6_W6Match8_UiResourceParameters.h"

struct DrawPacketPreset {
    /* 0x000 */ u32 unk000[5];
    /* 0x014 */ u8 unk014[0x400];
    /* 0x414 */ u8 unk414;
    /* 0x415 */ u8 unk415;
    /* 0x416 */ u8 unk416[2];
    /* 0x418 */ u32 unk418;
    /* 0x41c */ u32 unk41c;
    /* 0x420 */ UiResourceParameters packet;
};

#endif
