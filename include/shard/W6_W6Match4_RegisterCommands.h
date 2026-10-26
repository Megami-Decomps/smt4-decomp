#ifndef SHARD_W6_W6MATCH4_REGISTERCOMMANDS_H
#define SHARD_W6_W6MATCH4_REGISTERCOMMANDS_H

#include "common.h"

/* The preset sequence: seven command words, then four more (each part copies as its own VFP block). */
struct RegisterCommandsHead { f32 words[7]; };
struct RegisterCommandsTail { f32 words[4]; };
struct RegisterCommandData {
    u8 unk000[0xec];
    RegisterCommandsHead head; // 0xec
    RegisterCommandsTail tail; // 0x108
};
struct RegisterCommandPacket {
    u32 value; // 0x00
    RegisterCommandsHead head; // 0x04
    RegisterCommandsTail tail; // 0x20
};

#endif
