/* The Arousal Skill scene process object. */
#ifndef SHARD_S1AROUSALSKILL_H
#define SHARD_S1AROUSALSKILL_H

#include "common.h"

typedef struct ArousalSkillScene {
    /* 0x00 */ u32 process;           /* asd process handle */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ s32 state;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 listBase[6];       /* cleared on creation */
    /* 0x30 */ u32 unk30;
    /* 0x34 */ s32 mode;              /* negative: no mode selected */
    /* 0x38 */ u16 id;
    /* 0x3A */ u16 unk3A;
    /* 0x3C */ u8 unk3C[4];
    /* 0x40 */ u8 modeUnset;
    /* 0x41 */ u8 unk41;
    /* 0x42 */ u16 slot;
} ArousalSkillScene;

/* The global at 0x588C40; its third word points to the live scene. */
typedef struct ArousalSkillGlobals {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ArousalSkillScene *scene;
} ArousalSkillGlobals;

#endif
