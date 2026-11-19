#ifndef BATTLE_ACTORCARDANIMATIONS_H
#define BATTLE_ACTORCARDANIMATIONS_H

#include "ui/UiSpriteState.h"
#include "ui/GridNavigation.h"

struct ActorCardAnimationState {
    u16 states[5];
    u16 frames[5];
    f32 times[5];
    u8 blocked[6];
    u16 counters[6][5];
};
/* IV: the battle UI's party display and party menu (0x59C0 bytes). */
struct ActorCardAnimations {
    /* 0x0000 */ UiResourceParameters resources;  /* every sprite's animation tables */
    /* 0x0020 */ UiSpriteState backdrop;
    /* 0x00AC */ UiSpriteState intro;
    /* 0x0138 */ UiSpriteState unk0138[8];
    /* 0x0598 */ UiSpriteState unk0598;
    /* 0x0624 */ UiSpriteState unk0624;
    /* 0x06B0 */ UiSpriteState unk06B0;
    /* 0x073C */ UiSpriteState memberFrames[4];    /* the party panels' frames (0: the player) */
    /* 0x096C */ UiSpriteState guestFrame;
    /* 0x09F8 */ UiSpriteState memberGlows[4];
    /* 0x0C28 */ UiSpriteState memberGlowMarks[4];
    /* 0x0E58 */ UiSpriteState unk0E58[6];
    /* 0x11A0 */ UiSpriteState unk11A0;
    /* 0x122C */ UiSpriteState unk122C;
    /* 0x12B8 */ UiSpriteState slide;              /* slides the whole party display */
    /* 0x1344 */ UiSpriteState guestFlash;
    /* 0x13D0 */ UiSpriteState sprites[3][4];      /* a panel's badge: its fade, its icon and its large icon */
    /* 0x1A60 */ UiSpriteState unk1A60[25];
    /* 0x280C */ UiSpriteState unk280C[5];
    /* 0x2AC8 */ UiSpriteState unk2AC8[5];
    /* 0x2D84 */ UiSpriteState unk2D84[5];
    /* 0x3040 */ u32 unit;                         /* the guest's battle actor */
    /* 0x3044 */ u32 unk3044;
    /* 0x3048 */ s32 state;
    /* 0x304C */ s32 mode;
    /* 0x3050 */ u8 unk3050[8];
    /* 0x3058 */ u32 unk3058;
    /* 0x305C */ s32 page;
    /* 0x3060 */ u8 unk3060;
    /* 0x3061 */ u8 unk3061[0x1B];
    /* 0x307C */ u8 unk307C;
    /* 0x307D */ u8 unk307D[0x19B];
    /* 0x3218 */ GridNavigation pageBox;
    /* 0x327C */ GridNavigation headerBox;
    /* 0x32E0 */ GridNavigation skillBox;
    /* 0x3344 */ GridNavigation unk3344;
    /* 0x33A8 */ GridNavigation selector;
    /* 0x340C */ GridNavigation *activeBox;
    /* 0x3410 */ s32 memberModelIds[3];            /* the demon shown in a party member's panel, 0: none */
    /* 0x341C */ u8 unk341C[0x64];
    /* 0x3480 */ u16 usable[60];                   /* the usable ids of the skill box */
    /* 0x34F8 */ u8 unk34F8[0x38C];
    /* 0x3884 */ s32 originX;
    /* 0x3888 */ s32 originY;
    /* 0x388C */ f32 unk388C;
    /* 0x3890 */ s32 unk3890;
    /* 0x3894 */ f32 unk3894;
    /* 0x3898 */ s32 unk3898;
    /* 0x389C */ u8 unk389C[0x35];
    /* 0x38D1 */ s8 vacant[5];                     /* the panel has no unit (0: the player) */
    /* 0x38D6 */ u8 unk38D6[0x1E];
    /* 0x38F4 */ s16 unitIndices[5];               /* slot table index of a panel's unit (< 0: none) */
    /* 0x38FE */ u8 unk38FE[0x2052];
    /* 0x5950 */ ActorCardAnimationState animation;
    /* 0x59BC */ u32 messageFile;                  /* the loaded battle/BattleUI.mbm */
};
/* Apocalypse: the battle UI's party display and party menu (0x4BC4 bytes). */
struct ActorCardAnimationsA {
    /* 0x0000 */ UiResourceParameters resources;  /* every sprite's animation tables */
    /* 0x0020 */ UiSpriteState backdrop;
    /* 0x00AC */ UiSpriteState intro;
    /* 0x0138 */ UiSpriteState unk0138[8];
    /* 0x0598 */ UiSpriteState unk0598;
    /* 0x0624 */ UiSpriteState unk0624;
    /* 0x06B0 */ UiSpriteState unk06B0;
    /* 0x073C */ UiSpriteState memberFrames[4];    /* the party panels' frames (0: the player) */
    /* 0x096C */ UiSpriteState guestFrame;
    /* 0x09F8 */ UiSpriteState memberGlows[4];
    /* 0x0C28 */ UiSpriteState memberGlowMarks[4];
    /* 0x0E58 */ UiSpriteState unk0E58[6];
    /* 0x11A0 */ UiSpriteState unk11A0;
    /* 0x122C */ UiSpriteState unk122C;
    /* 0x12B8 */ UiSpriteState slide;              /* slides the whole party display */
    /* 0x1344 */ UiSpriteState guestFlash;
    /* 0x13D0 */ UiSpriteState unk13D0;
    /* 0x145C */ UiSpriteState sprites[3][4];      /* a panel's badge: its fade, its icon and its large icon */
    /* 0x1AEC */ UiSpriteState unk1AEC;
    /* 0x1B78 */ UiSpriteState unk1B78;
    /* 0x1C04 */ UiSpriteState unk1C04;
    /* 0x1C90 */ UiSpriteState unk1C90;
    /* 0x1D1C */ UiSpriteState unk1D1C;
    /* 0x1DA8 */ UiSpriteState unk1DA8[8];
    /* 0x2208 */ UiSpriteState unk2208;
    /* 0x2294 */ UiSpriteState unk2294[25];
    /* 0x3040 */ UiSpriteState unk3040[5];
    /* 0x32FC */ UiSpriteState unk32FC[5];
    /* 0x35B8 */ UiSpriteState unk35B8[5];
    /* 0x3874 */ u32 unit;                         /* the guest's battle actor */
    /* 0x3878 */ u32 unk3878;
    /* 0x387C */ s32 state;
    /* 0x3880 */ s32 mode;
    /* 0x3884 */ u8 unk3884[8];
    /* 0x388C */ u32 unk388C;
    /* 0x3890 */ s32 page;
    /* 0x3894 */ u8 unk3894;
    /* 0x3895 */ u8 unk3895[0x1B];
    /* 0x38B0 */ u8 unk38B0;
    /* 0x38B1 */ u8 unk38B1[4];
    /* 0x38B5 */ u8 unk38B5;
    /* 0x38B6 */ u8 unk38B6[4];
    /* 0x38BA */ u8 unk38BA;
    /* 0x38BB */ u8 unk38BB[0x191];
    /* 0x3A4C */ GridNavigation pageBox;
    /* 0x3AB0 */ GridNavigation headerBox;
    /* 0x3B14 */ GridNavigation skillBox;
    /* 0x3B78 */ GridNavigation unk3B78;
    /* 0x3BDC */ GridNavigation selector;
    /* 0x3C40 */ GridNavigation *activeBox;
    /* 0x3C44 */ u8 unk3C44[0x64];
    /* 0x3CA8 */ u16 usable[124];                  /* the usable ids of the skill box */
    /* 0x3DA0 */ u8 unk3DA0[0x10];
    /* 0x3DB0 */ u8 unk3DB0;
    /* 0x3DB1 */ u8 unk3DB1[0x3EF];
    /* 0x41A0 */ s32 originX;
    /* 0x41A4 */ s32 originY;
    /* 0x41A8 */ f32 unk41A8;
    /* 0x41AC */ s32 unk41AC;
    /* 0x41B0 */ f32 unk41B0;
    /* 0x41B4 */ s32 unk41B4;
    /* 0x41B8 */ u8 unk41B8[0x35];
    /* 0x41ED */ s8 vacant[5];                     /* the panel has no unit (0: the player) */
    /* 0x41F2 */ u8 unk41F2[0x1E];
    /* 0x4210 */ s16 unitIndices[5];               /* slot table index of a panel's unit (< 0: none) */
    /* 0x421A */ u8 unk421A[6];
    /* 0x4220 */ s32 memberModelIds[3];            /* the demon shown in a party member's panel, 0: none */
    /* 0x422C */ u8 unk422C[0x8AC];
    /* 0x4AD8 */ s32 unk4AD8;
    /* 0x4ADC */ u8 unk4ADC[0x33];
    /* 0x4B0F */ u8 unk4B0F;
    /* 0x4B10 */ u32 unk4B10;
    /* 0x4B14 */ u16 unk4B14;
    /* 0x4B16 */ u16 unk4B16;
    /* 0x4B18 */ u8 unk4B18[5];
    /* 0x4B1D */ u8 unk4B1D;
    /* 0x4B1E */ s16 unk4B1E;
    /* 0x4B20 */ u8 unk4B20;
    /* 0x4B21 */ u8 unk4B21[3];
    /* 0x4B24 */ u32 unk4B24;
    /* 0x4B28 */ u8 unk4B28[4];
    /* 0x4B2C */ ActorCardAnimationState animation;
    /* 0x4B98 */ u32 messageFile;                  /* the loaded battle/BattleUI.mbm */
    /* 0x4B9C */ u16 unk4B9C;
    /* 0x4B9E */ u16 unk4B9E;
    /* 0x4BA0 */ u8 unk4BA0;
    /* 0x4BA1 */ u8 unk4BA1[3];
    /* 0x4BA4 */ u32 unk4BA4;
    /* 0x4BA8 */ u8 unk4BA8[4];
    /* 0x4BAC */ u32 unk4BAC;
    /* 0x4BB0 */ s32 portraitIds[4];               /* the portraits acquired for the panels (0: the player, -1) */
    /* 0x4BC0 */ u32 unk4BC0;
};
typedef char ActorCardAnimationOffsetsCheck[
    offsetof(ActorCardAnimations, unit) == 0x3040 &&
    offsetof(ActorCardAnimations, memberFrames) == 0x73C &&
    offsetof(ActorCardAnimations, sprites) == 0x13D0 &&
    offsetof(ActorCardAnimations, unk2D84) == 0x2D84 &&
    offsetof(ActorCardAnimations, pageBox) == 0x3218 &&
    offsetof(ActorCardAnimations, activeBox) == 0x340C &&
    offsetof(ActorCardAnimations, usable) == 0x3480 &&
    offsetof(ActorCardAnimations, originX) == 0x3884 &&
    offsetof(ActorCardAnimations, vacant) == 0x38D1 &&
    offsetof(ActorCardAnimations, unitIndices) == 0x38F4 &&
    offsetof(ActorCardAnimations, messageFile) == 0x59BC &&
    offsetof(ActorCardAnimations, animation) == 0x5950 &&
    offsetof(ActorCardAnimationsA, unit) == 0x3874 &&
    offsetof(ActorCardAnimationsA, sprites) == 0x145C &&
    offsetof(ActorCardAnimationsA, unk2294) == 0x2294 &&
    offsetof(ActorCardAnimationsA, pageBox) == 0x3A4C &&
    offsetof(ActorCardAnimationsA, activeBox) == 0x3C40 &&
    offsetof(ActorCardAnimationsA, usable) == 0x3CA8 &&
    offsetof(ActorCardAnimationsA, originX) == 0x41A0 &&
    offsetof(ActorCardAnimationsA, vacant) == 0x41ED &&
    offsetof(ActorCardAnimationsA, unitIndices) == 0x4210 &&
    offsetof(ActorCardAnimationsA, memberModelIds) == 0x4220 &&
    offsetof(ActorCardAnimationsA, unk38B5) == 0x38B5 &&
    offsetof(ActorCardAnimationsA, unk4AD8) == 0x4AD8 &&
    offsetof(ActorCardAnimationsA, unk4B0F) == 0x4B0F &&
    offsetof(ActorCardAnimationsA, messageFile) == 0x4B98 &&
    offsetof(ActorCardAnimationsA, portraitIds) == 0x4BB0 &&
    offsetof(ActorCardAnimationsA, animation) == 0x4B2C &&
    offsetof(ActorCardAnimationState, counters) == 0x2E ? 1 : -1];

#endif
