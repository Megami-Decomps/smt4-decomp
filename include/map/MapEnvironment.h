#ifndef MAP_MAPENVIRONMENT_H
#define MAP_MAPENVIRONMENT_H

#include "common.h"

struct MapEnvironmentEntry {
    /* 0x00 */ u8 unk00[0x14];
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
