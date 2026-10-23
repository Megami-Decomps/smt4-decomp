#ifndef SHARD_W5_W5MATCH4_BATTLETRANSITION_H
#define SHARD_W5_W5MATCH4_BATTLETRANSITION_H

#include "common.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include <stddef.h>

union BattleTransitionParameter {
    u32 value;
    f32 scalar;
};

/* Work fields used when starting the battle's timed transitions. */
struct BattleTransitionState {
    union {
        /* 0x000 */ u8 unk000[0x5A4];
        struct {
            u8 unk000[0xC8];
            /* 0x0C8 */ AsdTextureRegion region;
            u8 unk0E8[0x14C];
            /* 0x234 */ f32 opacity;
        } frameDraw;
    };
    /* 0x5a4 */ BattleTransitionParameter current;
    /* 0x5a8 */ u8 unk5a8[0x40];
    /* 0x5e8 */ f32 duration;
    /* 0x5ec */ f32 secondaryDuration;
    /* 0x5f0 */ u8 unk5f0[0x3c];
    /* 0x62c */ BattleTransitionParameter previous;
    /* 0x630 */ u32 unk630;
    /* 0x634 */ u32 flags;
    /* 0x638 */ u8 unk638[0x80];
    /* 0x6b8 */ f32 elapsed;
    /* 0x6bc */ s32 target;
    /* 0x6c0 */ s32 frame;
    /* 0x6c4 */ s32 mode;
    /* 0x6c8 */ u8 unk6c8[0xcc];
    /* 0x794 */ f32 globalElapsed;
    /* 0x798 */ u8 unk798[8];
    /* 0x7a0 */ s32 globalTarget;
    /* 0x7a4 */ s32 globalFrame;
    /* 0x7a8 */ s32 globalMode;
    /* 0x7ac */ f32 secondaryElapsed;
    /* 0x7b0 */ u8 unk7b0[8];
    /* 0x7b8 */ s32 secondaryTarget;
    /* 0x7bc */ s32 secondaryFrame;
    /* 0x7c0 */ s32 secondaryMode;
    /* 0x7c4 */ u8 unk7c4[12];
    /* 0x7d0 */ f32 alternateElapsed;
    /* 0x7d4 */ u8 unk7d4[8];
    /* 0x7dc */ s32 alternateTarget;
    /* 0x7e0 */ s32 alternateFrame;
    /* 0x7e4 */ s32 alternateMode;
};
typedef char BattleTransitionFrameDrawOffsetsCheck[
    offsetof(BattleTransitionState, frameDraw.region) == 0xC8 &&
    offsetof(BattleTransitionState, frameDraw.opacity) == 0x234 &&
    offsetof(BattleTransitionState, secondaryElapsed) == 0x7AC &&
    sizeof(BattleTransitionState) == 0x7E8 ? 1 : -1];

#endif
