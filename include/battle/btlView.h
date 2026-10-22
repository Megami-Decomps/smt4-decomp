/* Alternate battle-view resources, attachment state, and script-controlled settings (Apocalypse).
 * The known prefix is 0xd4 bytes; unknown settings retain their offsets as names. */
#ifndef BATTLE_BTLVIEW_H
#define BATTLE_BTLVIEW_H

#include "common.h"
#include <stddef.h>

struct BattleViewObject {
    /* 0x00 */ void *vtable;
    /* 0x04 */ u32 flags;
};

struct BattleViewOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ BattleViewObject *object;
};

struct BattleViewVec3 {
    f32 x, y, z;
};

struct BattleViewState {
    union {
        /* 0x00 */ u8 unk00[0x24];
        struct {
            /* 0x00 */ u8 unk00[8];
            /* 0x08 */ s32 state;
            /* 0x0c */ BattleViewOwner *primary[3];
        } attachments;
        struct {
            /* 0x00 */ u8 unk00[0x18];
            /* 0x18 */ BattleViewVec3 position;
        } camera;
    };
    /* 0x24 */ f32 value;   /* heading, in degrees */
    /* 0x28 */ u32 unk28;
    /* 0x2c */ u32 unk2c;
    /* 0x30 */ u8 unk30;
    /* 0x31 */ u8 unk31[0x13];
    /* 0x44 */ s8 navigationSetting;
    /* 0x45 */ u8 unk45[0x23];
    /* 0x68 */ u32 pending;
    /* 0x6c */ u8 unk6c[4];
    /* 0x70 */ f32 unk70;
    /* 0x74 */ u8 unk74[2];
    /* 0x76 */ s8 unk76;
    /* 0x77 */ u8 unk77;
    /* 0x78 */ s32 unk78;
    /* 0x7c */ u8 disabled;
    /* 0x7d */ u8 unk7d[0x23];
    /* 0xa0 */ u8 unkA0;
    /* 0xa1 */ u8 unkA1[0x0b];
    /* 0xac */ u32 unkAC;
    /* 0xb0 */ u8 unkB0[0x18];
    /* 0xc8 */ BattleViewOwner *children[3];
};

typedef char BattleViewStateLayoutCheck[offsetof(BattleViewState, camera.position) == 0x18 &&
    offsetof(BattleViewState, unk28) == 0x28 && offsetof(BattleViewState, unk30) == 0x30 &&
    offsetof(BattleViewState, unk70) == 0x70 && offsetof(BattleViewState, unk76) == 0x76 &&
    offsetof(BattleViewState, children) == 0xc8 ? 1 : -1];

#endif
