#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFECTTIMELINE_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFECTTIMELINE_H

#include "shard/Resource.h"

struct EffectTimelinePart {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ s32 startFrame;
    /* 0x84 */ s32 duration;
    /* 0x88 */ u8 unk88[4];
    /* 0x8C */ EffectTimelinePart *children;
    /* 0x90 */ Resource *block;
    /* 0x94 */ u8 unk94[0x18];
    /* 0xAC */ EffectTimelinePart *next;
};

#endif
