/* The game state block pointed to by g_gameGlobals (0x44e140) + 4. */
#ifndef SHARD_GAMEGLOBALS_H
#define SHARD_GAMEGLOBALS_H

#include "common.h"

typedef struct GameData {
    /* 0x0000 */ u8 unk0000[0x274];
    /* 0x0274 */ u8 unk274[1];
    /* 0x0275 */ u8 unk0275[0x8B];
    /* 0x0300 */ u8 unk300[1];
    /* 0x0301 */ u8 unk0301[0xFDB];
    /* 0x12DC */ s32 unk12DC;
    /* 0x12E0 */ u32 unk12E0;
    /* 0x12E4 */ u32 unk12E4;
    /* 0x12E8 */ u8 unk12E8[0x6];
    /* 0x12EE */ u8 unk12EE;
    /* 0x12EF */ s8 unk12EF;
    /* 0x12F0 */ u8 unk12F0;
    /* 0x12F1 */ s8 unk12F1;
    /* 0x12F2 */ u8 unk12F2[0x2];
    /* 0x12F4 */ u8 unk12F4;
    /* 0x12F5 */ u8 unk12F5[0x7];
    /* 0x12FC */ s16 unk12FC;
    /* 0x12FE */ u8 unk12FE[0x2];
    /* 0x1300 */ u16 unk1300;
    /* 0x1302 */ u8 unk1302[0x596];
    /* 0x1898 */ u32 unk1898;
    /* 0x189C */ u8 unk189C[0x14];
    /* 0x18B0 */ u8 unk18B0[1];
    /* 0x18B1 */ u8 unk18B1[0x7];
    /* 0x18B8 */ u16 unk18B8;
    /* 0x18BA */ u16 unk18BA;
    /* 0x18BC */ u16 unk18BC;
    /* 0x18BE */ u16 unk18BE;
    /* 0x18C0 */ u8 unk18C0[0x5A0];
    /* 0x1E60 */ s8 unk1E60;
    /* 0x1E61 */ u8 unk1E61;
    /* 0x1E62 */ u8 unk1E62;
    /* 0x1E63 */ u8 unk1E63;
    /* 0x1E64 */ u8 unk1E64;
    /* 0x1E65 */ u8 unk1E65;
    /* 0x1E66 */ u8 unk1E66;
    /* 0x1E67 */ u8 unk1E67;
    /* 0x1E68 */ u32 unk1E68;
    /* 0x1E6C */ u32 unk1E6C;
    /* 0x1E70 */ u8 unk1E70[0x1];
    /* 0x1E71 */ u8 unk1E71;
    /* 0x1E72 */ u8 unk1E72[0xE];
    /* 0x1E80 */ u32 unk1E80;
    /* 0x1E84 */ u8 unk1E84[0x20];
    /* 0x1EA4 */ u8 unk1EA4;
    /* 0x1EA5 */ u8 unk1EA5[0x3];
    /* 0x1EA8 */ u32 unk1EA8;
    /* 0x1EAC */ u32 unk1EAC;
    /* 0x1EB0 */ u32 unk1EB0;
    /* 0x1EB4 */ u8 unk1EB4;
    /* 0x1EB5 */ u8 unk1EB5[0x1];
    /* 0x1EB6 */ u16 unk1EB6;
    /* 0x1EB8 */ u8 unk1EB8;
    /* 0x1EB9 */ u8 unk1EB9;
} GameData;

typedef struct GameGlobals {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ GameData *data;
} GameGlobals;

extern GameGlobals g_gameGlobals;

#endif
