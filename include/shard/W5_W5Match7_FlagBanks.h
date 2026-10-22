#ifndef SHARD_W5_W5MATCH7_FLAGBANKS_H
#define SHARD_W5_W5MATCH7_FLAGBANKS_H
#include "common.h"
struct FlagWorkBanks {
    /* 0x0000 */ u8 unk0000[0x744];
    /* 0x0744 */ u32 first[16];
    /* 0x0784 */ u32 second[16];
    union {
        /* 0x07c4 */ u8 unk07c4[0xeb8];
        struct {
            /* 0x07c4 */ u8 unk07c4BeforeReset[0xd24];
            /* 0x14e8 */ u32 active;
            /* 0x14ec */ f32 time;
            /* 0x14f0 */ u32 value;
            /* 0x14f4 */ u8 unk14f4[0x18];
            /* 0x150c */ u32 overrideEnabled;
        } reset;
        struct {
            /* 0x07c4 */ u8 unk07c4BeforeBits[0xeac];
            /* 0x1670 */ u32 words[3];
        } bitFlags;
    };
    /* 0x167c */ u32 third[1];
};
extern "C" FlagWorkBanks *gameFlagsGetBlock(void);

struct FlagValueRange {
    /* 0x00 */ s32 firstId;
    /* 0x04 */ u32 lastId;
    /* 0x08 */ u8 bank;
    /* 0x09 */ u8 width;
    /* 0x0A */ u8 unk0a[2];
};
struct FlagValueStorage {
    /* 0x000 */ u8 bank0[0xF0];
    /* 0x0F0 */ u8 bank1[0x78];
    /* 0x168 */ u8 bank2[0xF0];
    /* 0x258 */ u8 bank3[0xF0];
    /* 0x348 */ u8 bank4[0xF0];
    /* 0x438 */ u8 bank5[0xF0];
    /* 0x528 */ u8 bank6[0xF0];
    /* 0x618 */ u8 bank7[0xF0];
    /* 0x708 */ u8 bank8[0x64];
    /* 0x76C */ u8 bank9[0x190];
    /* 0x8FC */ u8 bank10[0x640];
    /* 0xF3C */ u8 bank12[1];
};
typedef char FlagValueRangeSizeCheck[sizeof(FlagValueRange) == 0x0C ? 1 : -1];
typedef char FlagValueStorageSizeCheck[sizeof(FlagValueStorage) == 0xF3D ? 1 : -1];

#endif
