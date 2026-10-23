#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFECTTIMELINE_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFECTTIMELINE_H

#include "shard/Resource.h"
#include "gfx/QuaternionWorkspace.h"

struct EffectTimelinePart {
    union {
        /* 0x00 */ u8 unk00[0x80];
        struct {
            /* 0x00 */ f32 position[4];
            /* 0x10 */ f32 localPosition[4];
            u8 unk20[0x20];
            /* 0x40 */ f32 origin[4];
            /* 0x50 */ RotationQuaternion rotation;
        } transform;
        struct {
            /* 0x00 */ u8 unk00BeforeColor[0x64];
            /* 0x64 */ u32 color;
        } tint;
    };
    /* 0x80 */ s32 startFrame;
    /* 0x84 */ s32 duration;
    /* 0x88 */ u8 unk88[4];
    /* 0x8C */ EffectTimelinePart *children;
    /* 0x90 */ Resource *block;
    /* 0x94 */ u8 unk94[0x18];
    /* 0xAC */ EffectTimelinePart *next;
};
typedef char EffectTimelinePartTransformOffsetsCheck[
    offsetof(EffectTimelinePart, transform.localPosition) == 0x10 &&
    offsetof(EffectTimelinePart, transform.origin) == 0x40 &&
    offsetof(EffectTimelinePart, transform.rotation) == 0x50 &&
    sizeof(EffectTimelinePart) == 0xB0 ? 1 : -1];
typedef char EffectTimelinePartColorOffsetCheck[
    offsetof(EffectTimelinePart, tint.color) == 0x64 &&
    sizeof(EffectTimelinePart) == 0xB0 ? 1 : -1];

#endif
