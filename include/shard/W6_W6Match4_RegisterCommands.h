#ifndef SHARD_W6_W6MATCH4_REGISTERCOMMANDS_H
#define SHARD_W6_W6MATCH4_REGISTERCOMMANDS_H

#include "common.h"

struct RegisterCommands { u32 words[11]; };
struct RegisterCommandData {
    u8 unk000[0xec];
    RegisterCommands commands; // 0xec
};
struct RegisterCommandPacket {
    u32 value; // 0x00
    RegisterCommands commands; // 0x04
};

#endif
