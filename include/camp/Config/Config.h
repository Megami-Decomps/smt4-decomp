/* camp/Config/Config.c: the camp's Config (options) screen. */
#ifndef CAMP_CONFIG_CONFIG_H
#define CAMP_CONFIG_CONFIG_H

#include "common.h"

/* Work area, Shin Megami Tensei IV. */
typedef struct ConfigWork {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ s32 state;
    /* 0x68 */ u8 unk68[0xC];
    /* 0x74 */ s16 countA;
    /* 0x76 */ u8 unk76[0x8];
    /* 0x7E */ s16 countB;
    /* 0x80 */ s32 unk80;
    /* 0x84 */ u8 unk84[0x24];
    /* 0xA8 */ u8 flag;
    /* 0xA9 */ u8 unkA9[0x3];
    /* 0xAC */ void *heapA;               /* heap block, freed on close */
    /* 0xB0 */ void *heapB;               /* heap block, freed on close */
    /* 0xB4 */ u32 resource;               /* released on close */
    /* 0xB8 */ u32 unkB8;
} ConfigWork;

/* Work area, Shin Megami Tensei IV: Apocalypse. */
typedef struct ConfigWorkA {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ s32 state;                  /* 6 = closed */
    /* 0x68 */ s32 unk68;
    /* 0x6C */ u8 unk6C[0xC];
    /* 0x78 */ s16 count;
    /* 0x7A */ u16 unk7A;
    /* 0x7C */ void *heapA;               /* heap block, freed on close */
    /* 0x80 */ void *heapB;               /* heap block, freed on close */
    /* 0x84 */ u32 resource;               /* released on close */
    /* 0x88 */ u8 unk88[0x34];
    /* 0xBC */ u32 unkBC;
    /* 0xC0 */ u8 param;
    /* 0xC1 */ u8 unkC1[0x3FF];
    /* 0x4C0 */ u8 hasType24A;
    /* 0x4C1 */ u8 hasType24B;
    /* 0x4C2 */ u8 unk4C2[0xA];
} ConfigWorkA;

#endif
