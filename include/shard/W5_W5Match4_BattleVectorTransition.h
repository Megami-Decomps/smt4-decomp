#ifndef SHARD_W5_W5MATCH4_BATTLEVECTORTRANSITION_H
#define SHARD_W5_W5MATCH4_BATTLEVECTORTRANSITION_H

#include "common.h"

struct BattleVector3 { f32 x, y, z; };

struct BattleVectorTransition {
    /* 0x000 */ u8 unk000[0x5ac];
    /* 0x5ac */ BattleVector3 destination;
    /* 0x5b8 */ u8 unk5b8[0xc];
    /* 0x5c4 */ BattleVector3 alternateDestination;
    /* 0x5d0 */ u8 unk5d0[0x64];
    /* 0x634 */ u32 flags;
    /* 0x638 */ u8 unk638[0x94];
    /* 0x6cc */ BattleVector3 elapsed;
    /* 0x6d8 */ s32 target;
    /* 0x6dc */ u8 unk6dc[0x4];
    /* 0x6e0 */ s32 mode;
    /* 0x6e4 */ BattleVector3 current;
    /* 0x6f0 */ s32 alternateTarget;
    /* 0x6f4 */ s32 alternateFrame;
    /* 0x6f8 */ s32 alternateMode;
    /* 0x6fc */ u8 unk6fc[0x48];
    /* 0x744 */ BattleVector3 axisDestination;
    /* 0x750 */ s32 axisTarget;
    /* 0x754 */ s32 axisFrame;
    /* 0x758 */ s32 axisMode;
    /* 0x75c */ u8 unk75c[0x14];
    /* 0x770 */ BattleVector3 axisElapsed;
    /* 0x77c */ u8 unk77c[0x6c];
    /* 0x7e8 */ BattleVector3 secondaryElapsed;
    /* 0x7f4 */ u8 unk7f4[0x18];
    /* 0x80c */ s32 secondaryTarget;
    /* 0x810 */ s32 secondaryFrame;
    /* 0x814 */ s32 secondaryMode;
};

#endif
