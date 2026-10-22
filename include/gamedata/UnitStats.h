#ifndef GAMEDATA_UNITSTATS_H
#define GAMEDATA_UNITSTATS_H

#include "common.h"

struct StatBlock {
    /* 0x00 */ u16 base[7];
    /* 0x0E */ u16 unk0E;
    /* 0x10 */ u16 unk10;
    /* 0x12 */ u8 unk12[0xA];
    /* 0x1C */ u16 cur[2];
    /* 0x20 */ u16 cur2;
    /* 0x22 */ u16 cur6;
    /* 0x24 */ u16 cur3;
    /* 0x26 */ u16 cur4;
    /* 0x28 */ u16 cur5;
    /* 0x2A */ u16 copy0;
    /* 0x2C */ u16 copy1;
    /* 0x2E */ u8 unk2E[2];
    /* 0x30 */ u32 bits;
    /* 0x34 */ u16 resist[8];
    /* 0x44 */ u8 unk44[2];
    /* 0x46 */ u16 id;
    /* 0x48 */ u8 level;
    /* 0x49 */ u8 unk49[0x5BB];
};

typedef char StatBlockSizeCheck[sizeof(StatBlock) == 0x604 ? 1 : -1];

#endif
