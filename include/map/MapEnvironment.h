#ifndef MAP_MAPENVIRONMENT_H
#define MAP_MAPENVIRONMENT_H

#include "common.h"

struct MapEnvironmentEntry {
    /* 0x00 */ s16 id;
    /* 0x02 */ s16 unk02;
    /* 0x04 */ s16 unk04;
    /* 0x06 */ s16 unk06;
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 unk09;
    /* 0x0A */ u8 unk0A;
    /* 0x0B */ u8 unk0B;
    /* 0x0C */ s16 unk0C;
    /* 0x0E */ s16 unk0E;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ u8 unk14;
    /* 0x15 */ u8 unk15;
    /* 0x16 */ u8 unk16;
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u8 unk18;
    /* 0x19 */ u8 unk19;
    /* 0x1A */ s16 unk1A;
    /* 0x1C */ f32 unk1C;
    /* 0x20 */ u8 unk20;
    /* 0x21 */ u8 unk21;
    /* 0x22 */ u8 unk22;
    /* 0x23 */ u8 unk23;
    /* 0x24 */ s16 unk24;
    /* 0x26 */ s16 unk26;
    /* 0x28 */ u8 unk28[8];
};

struct MapTableGlobals {
    /* 0x00 */ MapEnvironmentEntry *entries;
    /* 0x04 */ u8 unk04[0x24];
    /* 0x28 */ u32 unk28;
    /* 0x2C */ s32 selectedIndex;
};

typedef char MapEnvironmentEntrySizeCheck[sizeof(MapEnvironmentEntry) == 0x30 ? 1 : -1];
typedef char MapTableGlobalsSizeCheck[sizeof(MapTableGlobals) == 0x30 ? 1 : -1];

#endif
