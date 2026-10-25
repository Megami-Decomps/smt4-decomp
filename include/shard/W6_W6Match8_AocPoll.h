#ifndef SHARD_W6_W6MATCH8_AOC_POLL_H
#define SHARD_W6_W6MATCH8_AOC_POLL_H

#include "common.h"
#include "addon/aocMain.h"
#include "classes/WindowStatus.h"

struct AocPollStep {
    u32 unk00;
    u32 phase;
    u32 unk08;
    WindowStatusResult result; /* 0x0c */
    u32 unk14;
    u8 request[1];       /* 0x18 */
};
typedef char AocPollStepLayoutCheck[
    offsetof(AocPollStep, result) == 0x0C &&
    offsetof(AocPollStep, request) == 0x18 && sizeof(AocPollStep) == 0x1C ? 1 : -1];

#endif
