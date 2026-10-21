#ifndef SHARD_W5_W5MATCH7_FLAGBANKS_H
#define SHARD_W5_W5MATCH7_FLAGBANKS_H
#include "common.h"
struct FlagWorkBanks {
    /* 0x0000 */ u8 unk0000[0x744];
    /* 0x0744 */ u32 first[16];
    /* 0x0784 */ u32 second[16];
    /* 0x07c4 */ u8 unk07c4[0xeb8];
    /* 0x167c */ u32 third[1];
};
extern "C" FlagWorkBanks *gameFlagsGetBlock(void);
#endif
