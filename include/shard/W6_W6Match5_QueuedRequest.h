#ifndef SHARD_W6_W6MATCH5_QUEUEDREQUEST_H
#define SHARD_W6_W6MATCH5_QUEUEDREQUEST_H

#include "common.h"

struct RequestParameters {
    u32 words[5];
};
struct QueuedRequestState {
    u8 unk000[0x754];
    u32 flags; // 0x754
    RequestParameters parameters; // 0x758
    u8 unk76c[0x5e4];
    u8 mode; // 0xd50
    u8 unkd51[3];
    u32 argument; // 0xd54
    u32 progress; // 0xd58
};

#endif
