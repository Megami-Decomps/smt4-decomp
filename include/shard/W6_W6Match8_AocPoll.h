#ifndef SHARD_W6_W6MATCH8_AOC_POLL_H
#define SHARD_W6_W6MATCH8_AOC_POLL_H

#include "common.h"
#include "addon/aocMain.h"

struct AocPollResult {
    s32 code;
    s32 detail;
};
struct AocPollStorage {
    AocPollResult result;
    u32 unk08;
    u32 unk0c;
};
struct AocPollOutput {
    u8 status;
    u8 unk01[3];
    AocPollStorage storage;
};
struct AocPollStep {
    u32 unk00;
    u32 phase;
    u32 unk08;
    AocPollResult result; /* 0x0c */
    u32 unk14;
    u8 request[1];       /* 0x18 */
};

#endif
