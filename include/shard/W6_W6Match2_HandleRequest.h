#ifndef SHARD_W6_W6MATCH2_HANDLE_REQUEST_H
#define SHARD_W6_W6MATCH2_HANDLE_REQUEST_H

#include "common.h"

struct HandleRequest {
    u64 value;    // 0x00
    u32 kind;     // 0x08
    u32 argument; // 0x0c
};

struct HandleRequestResult {
    u32 handle; // 0x00
    s32 index;  // 0x04
};

#endif
