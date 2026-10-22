#ifndef SHARD_W6_W6MATCH2_SAVE_FLAGS_H
#define SHARD_W6_W6MATCH2_SAVE_FLAGS_H

#include "shard/GameDataBlocks.h"

struct SaveFlagWork {
    u8 unk00000[0x24b3c]; // 0x00000
    u8 flags[63];          // 0x24b3c
};

struct SaveFlagImage {
    u8 header[0x88]; // 0x00
    SaveFlagWork work; // 0x88
};

struct SavedCounterRange {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 last;
    /* 0x08 */ u8 bank;
    /* 0x09 */ u8 elementType;
};

struct SavedCounterBanks {
    /* 0x000 */ u8 bank0[240];
    /* 0x0F0 */ u8 bank1[120];
    /* 0x168 */ u8 bank2[240];
    /* 0x258 */ u8 bank3[240];
    /* 0x348 */ u8 bank4[240];
    /* 0x438 */ u8 bank5[240];
    /* 0x528 */ u8 bank6[240];
    /* 0x618 */ u8 bank7[240];
    /* 0x708 */ u8 bank8[100];
    /* 0x76C */ u8 bank9[400];
    /* 0x8FC */ u8 bank10[1600];
    /* 0xF3C */ u8 bank11[13];
    /* 0xF49 */ u8 seenFlags[257];
};

static __inline u8 *savedCounterBank(SavedCounterBanks *save, u8 bank)
{
    switch (bank) {
    case 0: return save->bank0;
    case 1: return save->bank1;
    case 2: return save->bank2;
    case 3: return save->bank3;
    case 4: return save->bank4;
    case 5: return save->bank5;
    case 6: return save->bank6;
    case 7: return save->bank7;
    case 8: return save->bank8;
    case 9: return save->bank9;
    case 10: return save->bank10;
    case 11: return save->bank11;
    default: return NULL;
    }
}

typedef char SavedCounterBanksSizeCheck[sizeof(SavedCounterBanks) == 0x104a ? 1 : -1];

#endif
