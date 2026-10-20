/* Effect (particle) emitter objects of the asd effect system. */
#ifndef SHARD_S1EFFECT_H
#define SHARD_S1EFFECT_H

#include "common.h"

typedef struct EffectEmitter {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 transform[0x14]; /* transform input of the sprite */
    /* 0x24 */ u32 color; /* base color ARGB */
    /* 0x28 */ u8 unk28[0x4];
    /* 0x2C */ s32 frame; /* frames elapsed */
    /* 0x30 */ u8 colorB[0x24]; /* interpolated second color */
    /* 0x54 */ u8 colorTrack[0x4]; /* color track */
    /* 0x58 */ u32 flags;
    /* 0x5C */ u8 unk5C[0x8];
    /* 0x64 */ u8 scaleTrack[0x10];
    /* 0x74 */ s8 loop; /* restart when the length is reached */
    /* 0x75 */ u8 unk75[0x1B];
    /* 0x90 */ u8 sizeTrack[0x2C];
    /* 0xBC */ s32 length; /* length in frames */
    /* 0xC0 */ f32 scale;
    /* 0xC4 */ s8 faceCamera;
    /* 0xC5 */ u8 unkC5[0x3];
    /* 0xC8 */ u16 * sprite; /* the sprite this emitter drives */
    /* 0xCC */ s32 refA;
    /* 0xD0 */ s32 refB;
} EffectEmitter;

typedef struct EffectEmitterB {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 transform[0x14]; /* transform input of the sprite */
    /* 0x24 */ u32 color; /* base color ARGB */
    /* 0x28 */ u8 unk28[0x4];
    /* 0x2C */ s32 frame; /* frames elapsed */
    /* 0x30 */ u8 colorB[0x24]; /* interpolated second color */
    /* 0x54 */ u8 colorTrack[0x4]; /* color track */
    /* 0x58 */ u32 flags;
    /* 0x5C */ u8 unk5C[0x8];
    /* 0x64 */ u8 scaleTrack[0x10];
    /* 0x74 */ s8 loop; /* restart when the length is reached */
    /* 0x75 */ u8 unk75[0x1B];
    /* 0x90 */ u8 sizeTrack[0x2C];
    /* 0xBC */ s32 length; /* length in frames */
    /* 0xC0 */ f32 scale;
    /* 0xC4 */ s8 faceCamera;
    /* 0xC5 */ u8 unkC5[0x3];
    /* 0xC8 */ f32 pivotX;
    /* 0xCC */ f32 pivotY;
    /* 0xD0 */ u8 rotationTrack[0x2C];
    /* 0xFC */ u8 axisTrack[0x2C];
    /* 0x128 */ f32 directionX; /* billboard axis */
    /* 0x12C */ f32 directionY;
    /* 0x130 */ f32 directionZ;
    /* 0x134 */ f32 unk134;
    /* 0x138 */ f32 unk138;
    /* 0x13C */ u16 * sprite; /* the sprite this emitter drives */
    /* 0x140 */ s32 refA;
    /* 0x144 */ s32 refB;
} EffectEmitterB;

#endif
