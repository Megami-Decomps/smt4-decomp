#ifndef SHARD_W6_W6MATCH5_ONLINERESULT_H
#define SHARD_W6_W6MATCH5_ONLINERESULT_H

#include "common.h"

struct OnlineCallbackResult {
    s32 status; // 0x00
    u32 value;  // 0x04
    u32 extra;  // 0x08
};

#endif
