#ifndef SHARD_W6_W6MATCH2_STATUS_BYTES_H
#define SHARD_W6_W6MATCH2_STATUS_BYTES_H

#include "common.h"

struct StatusFields {
    u8 unk00[0xac]; // 0x00
    s8 active;      // 0xac
    u8 alternate;   // 0xad
    u8 unkae;       // 0xae
    u8 pending;     // 0xaf
};

struct StatusBytes {
    u8 unk000[0x900]; // 0x000
    StatusFields state; // 0x900
};

#endif
