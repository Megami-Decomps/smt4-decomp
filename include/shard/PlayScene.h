/* The big per-scene work block (state machine at 0x3048, timers at 0x12B8) shared by the 0x20xxxx-0x22xxxx scene helpers */
#ifndef SHARD_PLAYSCENE_H
#define SHARD_PLAYSCENE_H

#include "common.h"

typedef struct PlayScene {
    /* 0x0000 */ u8 unk0000[0x1C4];
    /* 0x01C4 */ u8 timerSub[1];
    /* 0x01C5 */ u8 unk01C5[0x7A7];
    /* 0x096C */ u8 timerC[1];
    /* 0x096D */ u8 unk096D[0x94B];
    /* 0x12B8 */ u8 timer[1];
    /* 0x12B9 */ u8 unk12B9[0x8B];
    /* 0x1344 */ u8 blockE[1];
    /* 0x1345 */ u8 unk1345[0xDAB];
    /* 0x20F0 */ u8 timerFade[1];
    /* 0x20F1 */ u8 unk20F1[0x8B];
    /* 0x217C */ u32 unk217C;
    /* 0x2180 */ s32 unk2180;
    /* 0x2184 */ u8 unk2184[0xEC0];
    /* 0x3044 */ u32 unk3044;
    /* 0x3048 */ s32 state;
    /* 0x304C */ s32 mode;
    /* 0x3050 */ u32 unk3050;
    /* 0x3054 */ u32 unk3054;
    /* 0x3058 */ u8 unk3058[0x4];
    /* 0x305C */ u32 unk305C;
    /* 0x3060 */ u8 unk3060;
    /* 0x3061 */ u8 unk3061[0x1E];
    /* 0x307F */ u8 unk307F;
    /* 0x3080 */ u8 unk3080;
    /* 0x3081 */ u8 unk3081;
    /* 0x3082 */ u8 unk3082;
    /* 0x3083 */ u8 unk3083[0x1];
    /* 0x3084 */ u8 unk3084;
    /* 0x3085 */ u8 unk3085[0x2893];
    /* 0x5918 */ u32 unk5918;
} PlayScene;

#endif
