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
#endif
