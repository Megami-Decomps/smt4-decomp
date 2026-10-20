/* result/WhisperEffect.c: the whisper (demon chatter) effect shown on the result screen. */
#ifndef RESULT_WHISPEREFFECT_H
#define RESULT_WHISPEREFFECT_H

#include "common.h"

/* One whisper line: two strings, a count of candidate texts and the one picked. */
typedef struct WhisperLine {
    /* 0x00 */ const char *textA;
    /* 0x04 */ const char *textB;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ const char *name;
    /* 0x14 */ s32 count;     /* number of candidates */
    /* 0x18 */ s32 pick;      /* random index below count, chosen at start */
    /* 0x1C */ u32 unk1C[6];
} WhisperLine;

typedef struct WhisperEffect {
    /* 0x00 */ u32 task;       /* the effect's update task */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 finished;    /* set to end the effect */
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 handle;     /* resource handle, released at the start */
    /* 0x10 */ f32 unk10;
    /* 0x14 */ u32 unk14[3];
    /* 0x20 */ f32 phaseA;     /* random start phase */
    /* 0x24 */ f32 rateA;
    /* 0x28 */ s32 periodA;
    /* 0x2C */ u32 unk2C[5];
    /* 0x40 */ f32 phaseB;     /* random start phase */
    /* 0x44 */ f32 rateB;
    /* 0x48 */ s32 periodB;
    /* 0x4C */ u32 unk4C[9];
    /* 0x70 */ u32 unk70;
    /* 0x74 */ u32 unk74[7];
    /* 0x90 */ u32 unk90;
    /* 0x94 */ u32 unk94[3];
    /* 0xA0 */ f32 rateC;
    /* 0xA4 */ u32 unkA4[3];
    /* 0xB0 */ s32 periodC;
    /* 0xB4 */ u32 unkB4[4];
    /* 0xC4 */ WhisperLine lines[5];
} WhisperEffect;

#endif
