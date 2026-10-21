#ifndef SHARD_W6_W6MATCH3_NODEENABLE_H
#define SHARD_W6_W6MATCH3_NODEENABLE_H

#include "common.h"

struct NodeEnableTarget {
    u8 unk000[0x1f6];
    u8 enabled;  // 0x1f6
};

struct NodeEnableResource {
    u8 unk00[0x2c];
    NodeEnableTarget* target;  // 0x2c
};

struct NodeEnableNode {
    u32 flags;  // 0x00
    u8 unk04[4];
    NodeEnableResource* resource;  // 0x08
};

struct NodeEnableOwner {
    u8 unk00[0x15];
    u8 ready;  // 0x15
    u8 unk16[0xa];
    NodeEnableNode* node;  // 0x20
};

#endif
