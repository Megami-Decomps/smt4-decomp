/* Default text color, render flags and renderer settings. */
#ifndef ASDSDK_TEXTDEFAULTS_H
#define ASDSDK_TEXTDEFAULTS_H
#include "common.h"
typedef struct AsdTextDefaults {
    /* 0x00 */ s8 enabled;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ f32 scale;
    /* 0x08 */ u32 color;
    /* 0x0C */ u32 flags;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 renderSetting;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 style;
    /* 0x30 */ u32 unk30;
} AsdTextDefaults;

typedef struct AsdTextDefaultsA {
    /* 0x00 */ s8 enabled;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ f32 scale;
    /* 0x08 */ u32 color;
    /* 0x0C */ u32 flags;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 renderSetting;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u32 style;
    /* 0x34 */ u32 unk34;
} AsdTextDefaultsA;

/* Retail 32-bit layout invariants. */
typedef char AsdTextDefaultsSizeCheck[sizeof(AsdTextDefaults) == 0x34 ? 1 : -1];
typedef char AsdTextDefaultsASizeCheck[sizeof(AsdTextDefaultsA) == 0x38 ? 1 : -1];

#endif
